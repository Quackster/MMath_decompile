#!/usr/bin/env python3
"""
fix_this_structs.py - Replace raw pointer arithmetic on `this` with typed struct access.

Processes decompiled C source files to:
1. Replace `void *this` in __thiscall signatures with correct struct pointer type
2. Replace `*(TYPE *)((int)this + OFFSET)` with `this->field_name`
3. Replace array patterns `*(TYPE *)((int)this + VAR * STRIDE + BASE)` with `this->array[VAR].field`
4. Replace `*(TYPE **)((int)this + OFFSET)` with `this->ptr_field`
5. Replace `**(TYPE **)((int)this + OFFSET)` with `*this->ptr_field`
6. Replace `(TYPE *)((int)this + OFFSET)` (no deref) with `(TYPE *)&this->field`
7. Handle `this_00` renamed pointers
8. Handle inverted patterns like `*(TYPE *)(EXPR + (int)this)`

Struct matching: scores each function's `this` offsets against known structs.
"""

import re
import os
import sys
import copy
from collections import defaultdict

# =============================================================================
# STRUCT DEFINITIONS
# =============================================================================
# Each struct: { 'name': str, 'size': int, 'fields': [ (offset, size, c_type, name, is_ptr, is_array, array_info), ...] }
# array_info = None | { 'stride': int, 'count': int, 'sub_fields': [(sub_offset, size, c_type, name), ...] }

ANSWER_SLOT_SUBFIELDS = [
    (0x00, 4, 'int', 'value'),
    (0x04, 1, 'unsigned char', 'symbol'),
    (0x05, 1, 'unsigned char', '_pad05'),
    (0x06, 4, 'int', 'result'),
    (0x0A, 4, 'int', 'denom'),
    (0x0E, 4, 'unsigned int', 'flags'),
]

PLAYER_SLOT_SUBFIELDS = [
    (0x00, 4, 'int', 'score'),
    (0x04, 1, 'unsigned char', 'color'),
    (0x05, 1, 'unsigned char', '_pad05'),
    (0x06, 4, 'int', 'rank'),
    (0x0A, 4, 'int', 'total'),
    (0x0E, 4, 'int', 'stat'),
]

# field tuple: (offset, size, c_type, field_name, is_pointer, is_array, array_info)
# array_info: (stride, count, sub_fields) or None

STRUCTS = [
    {
        'name': 'AnswerSlot',
        'size': 0x12,
        'fields': [
            (0x00, 4, 'int', 'value', False, False, None),
            (0x04, 1, 'unsigned char', 'symbol', False, False, None),
            (0x05, 1, 'unsigned char', '_pad05', False, False, None),
            (0x06, 4, 'int', 'result', False, False, None),
            (0x0A, 4, 'int', 'denom', False, False, None),
            (0x0E, 4, 'unsigned int', 'flags', False, False, None),
        ],
    },
    {
        'name': 'MathProblem',
        'size': 0x268,
        'fields': [
            (0x00, 12, 'unsigned char', '_base', False, False, None),
            (0x0C, 4, 'void *', 'buffer_ptr', True, False, None),
            (0x10, 1, 'unsigned char', 'field_10', False, False, None),
            (0x11, 3, 'unsigned char', '_pad11', False, False, None),
            (0x14, 1, 'char', 'field_14', False, False, None),
            (0x15, 1, 'unsigned char', '_pad15', False, False, None),
            (0x16, 4, 'int', 'field_16', False, False, None),
            (0x1A, 4, 'unsigned char', '_pad1a', False, False, None),
            (0x1E, 4, 'int', 'active_flag', False, False, None),
            (0x22, 4, 'unsigned int', 'is_correct', False, False, None),
            (0x26, 4, 'int', 'difficulty', False, False, None),
            (0x2A, 4, 'int', 'problem_type', False, False, None),
            (0x2E, 4, 'int', 'game_mode', False, False, None),
            (0x32, 66, 'unsigned char', '_pad32', False, False, None),
            (0x74, 1, 'unsigned char', 'field_74', False, False, None),
            (0x75, 343, 'unsigned char', '_pad75', False, False, None),
            (0x1CC, 4, 'int', 'field_1cc', False, False, None),
            (0x1D0, 4, 'int', 'threshold', False, False, None),
            (0x1D4, 4, 'int', 'threshold_high', False, False, None),
            (0x1D8, 4, 'int', 'threshold_extra', False, False, None),
            (0x1DC, 16, 'unsigned char', '_pad1dc', False, False, None),
            (0x1EC, 4, 'unsigned int', 'correct_slot', False, False, None),
            (0x1F0, 4, 'int', 'factor', False, False, None),
            (0x1F4, 10, 'unsigned char', '_pad1f4', False, False, None),
            (0x1FE, 4, 'int', 'operand_a', False, False, None),
            (0x202, 4, 'int', 'operand_a_denom', False, False, None),
            (0x206, 4, 'unsigned int', 'operation', False, False, None),
            (0x20A, 0x12 * 5, 'AnswerSlot', 'slots', False, True,
             (0x12, 5, ANSWER_SLOT_SUBFIELDS)),
        ],
    },
    {
        'name': 'UIElement',
        'size': 0xC6,
        'fields': [
            (0x00, 4, 'void **', 'vtable', True, False, None),
            (0x04, 1, 'unsigned char', 'field_04', False, False, None),
            (0x05, 1, 'unsigned char', '_pad05', False, False, None),
            (0x06, 4, 'int', 'field_06', False, False, None),
            (0x0A, 1, 'unsigned char', 'is_visible', False, False, None),
            (0x0B, 1, 'unsigned char', '_pad0b', False, False, None),
            (0x0C, 4, 'void *', 'parent_widget', True, False, None),
            (0x10, 1, 'unsigned char', 'field_10', False, False, None),
            (0x11, 1, 'unsigned char', '_pad11', False, False, None),
            (0x12, 4, 'unsigned int', 'flags', False, False, None),
            (0x16, 4, 'int', 'type_or_mode', False, False, None),
            (0x1A, 4, 'void *', 'child_list_1', True, False, None),
            (0x1E, 2, 'short', 'rect_top', False, False, None),
            (0x20, 2, 'short', 'rect_left', False, False, None),
            (0x22, 2, 'short', 'rect_bottom', False, False, None),
            (0x24, 2, 'short', 'rect_right', False, False, None),
            (0x26, 4, 'int', 'pos_x', False, False, None),
            (0x2A, 4, 'int', 'pos_y', False, False, None),
            (0x2E, 4, 'int', 'pos_w', False, False, None),
            (0x32, 4, 'int', 'pos_h', False, False, None),
            (0x36, 4, 'void *', 'child_list_2', True, False, None),
            (0x3A, 4, 'void *', 'parent_ptr', True, False, None),
            (0x3E, 4, 'int', 'field_3e', False, False, None),
            (0x42, 4, 'unsigned char', '_pad42', False, False, None),
            (0x46, 64, 'int', 'sub_widgets_a', False, True,
             (4, 16, [(0, 4, 'int', '')])),
            (0x86, 64, 'int', 'sub_widgets_b', False, True,
             (4, 16, [(0, 4, 'int', '')])),
        ],
    },
    {
        'name': 'UIWidget',
        'size': 0x118,
        'fields': [
            (0x00, 4, 'void **', 'vtable', True, False, None),
            (0x04, 1, 'unsigned char', 'field_04', False, False, None),
            (0x05, 1, 'unsigned char', '_pad05', False, False, None),
            (0x06, 4, 'int', 'field_06', False, False, None),
            (0x0A, 1, 'unsigned char', 'is_visible', False, False, None),
            (0x0B, 1, 'unsigned char', '_pad0b', False, False, None),
            (0x0C, 4, 'void *', 'parent_widget', True, False, None),
            (0x10, 1, 'unsigned char', 'field_10', False, False, None),
            (0x11, 1, 'unsigned char', '_pad11', False, False, None),
            (0x12, 4, 'unsigned int', 'flags', False, False, None),
            (0x16, 4, 'int', 'type_or_mode', False, False, None),
            (0x1A, 4, 'void *', 'child_list_1', True, False, None),
            (0x1E, 2, 'short', 'rect_top', False, False, None),
            (0x20, 2, 'short', 'rect_left', False, False, None),
            (0x22, 2, 'short', 'rect_bottom', False, False, None),
            (0x24, 2, 'short', 'rect_right', False, False, None),
            (0x26, 4, 'int', 'pos_x', False, False, None),
            (0x2A, 4, 'int', 'pos_y', False, False, None),
            (0x2E, 4, 'int', 'pos_w', False, False, None),
            (0x32, 4, 'int', 'pos_h', False, False, None),
            (0x36, 4, 'void *', 'child_list_2', True, False, None),
            (0x3A, 4, 'void *', 'parent_ptr', True, False, None),
            (0x3E, 4, 'int', 'field_3e', False, False, None),
            (0x42, 4, 'unsigned char', '_pad42', False, False, None),
            (0x46, 64, 'int', 'sub_widgets_a', False, True,
             (4, 16, [(0, 4, 'int', '')])),
            (0x86, 64, 'int', 'sub_widgets_b', False, True,
             (4, 16, [(0, 4, 'int', '')])),
            (0xC6, 1, 'char', 'scrollable_flag', False, False, None),
            (0xC7, 1, 'char', 'field_c7', False, False, None),
            (0xC8, 1, 'char', 'cursor_style_a', False, False, None),
            (0xC9, 1, 'char', 'cursor_style_b', False, False, None),
            (0xCA, 32, 'unsigned char', 'scroll_data', False, False, None),
            (0xEA, 4, 'int', 'origin_x', False, False, None),
            (0xEE, 4, 'int', 'origin_y', False, False, None),
            (0xF2, 4, 'void *', 'tile_data_ptr', True, False, None),
            (0xF6, 4, 'void *', 'level_data_ptr', True, False, None),
            (0xFA, 4, 'void *', 'cell_info_ptr', True, False, None),
            (0xFE, 4, 'unsigned int', 'timestamp', False, False, None),
            (0x102, 1, 'char', 'mirror_flag', False, False, None),
            (0x103, 1, 'unsigned char', '_pad103', False, False, None),
            (0x104, 4, 'int', 'animation_timer', False, False, None),
            (0x108, 1, 'char', 'field_108', False, False, None),
            (0x109, 1, 'char', 'field_109', False, False, None),
            (0x10A, 1, 'char', 'is_interactive', False, False, None),
            (0x10B, 1, 'char', 'auto_focus', False, False, None),
            (0x10C, 2, 'short', 'active_anim_id', False, False, None),
            (0x10E, 2, 'short', 'current_frame', False, False, None),
            (0x110, 2, 'short', 'cell_count', False, False, None),
            (0x112, 2, 'short', 'pending_frame', False, False, None),
            (0x114, 1, 'unsigned char', 'anim_flag_0', False, False, None),
            (0x115, 1, 'unsigned char', 'anim_flag_1', False, False, None),
            (0x116, 1, 'unsigned char', 'anim_flag_2', False, False, None),
            (0x117, 1, 'unsigned char', 'anim_flag_3', False, False, None),
        ],
    },
    {
        'name': 'GameWidget',
        'size': 0x19C,
        'fields': [
            # Include UIWidget fields so offsets < 0x118 still match
            (0x00, 4, 'void **', 'vtable', True, False, None),
            (0x04, 1, 'unsigned char', 'field_04', False, False, None),
            (0x06, 4, 'int', 'field_06', False, False, None),
            (0x0A, 1, 'unsigned char', 'is_visible', False, False, None),
            (0x0C, 4, 'void *', 'parent_widget', True, False, None),
            (0x10, 1, 'unsigned char', 'field_10', False, False, None),
            (0x12, 4, 'unsigned int', 'flags', False, False, None),
            (0x16, 4, 'int', 'type_or_mode', False, False, None),
            (0x1A, 4, 'void *', 'child_list_1', True, False, None),
            (0x1E, 2, 'short', 'rect_top', False, False, None),
            (0x20, 2, 'short', 'rect_left', False, False, None),
            (0x22, 2, 'short', 'rect_bottom', False, False, None),
            (0x24, 2, 'short', 'rect_right', False, False, None),
            (0x26, 4, 'int', 'pos_x', False, False, None),
            (0x2A, 4, 'int', 'pos_y', False, False, None),
            (0x2E, 4, 'int', 'pos_w', False, False, None),
            (0x32, 4, 'int', 'pos_h', False, False, None),
            (0x36, 4, 'void *', 'child_list_2', True, False, None),
            (0x3A, 4, 'void *', 'parent_ptr', True, False, None),
            (0x3E, 4, 'int', 'field_3e', False, False, None),
            (0x46, 64, 'int', 'sub_widgets_a', False, True,
             (4, 16, [(0, 4, 'int', '')])),
            (0x86, 64, 'int', 'sub_widgets_b', False, True,
             (4, 16, [(0, 4, 'int', '')])),
            (0xC6, 1, 'char', 'scrollable_flag', False, False, None),
            (0xC8, 1, 'char', 'cursor_style_a', False, False, None),
            (0xC9, 1, 'char', 'cursor_style_b', False, False, None),
            (0xEA, 4, 'int', 'origin_x', False, False, None),
            (0xEE, 4, 'int', 'origin_y', False, False, None),
            (0xF2, 4, 'void *', 'tile_data_ptr', True, False, None),
            (0xF6, 4, 'void *', 'level_data_ptr', True, False, None),
            (0xFA, 4, 'void *', 'cell_info_ptr', True, False, None),
            (0xFE, 4, 'unsigned int', 'timestamp', False, False, None),
            (0x102, 1, 'char', 'mirror_flag', False, False, None),
            (0x104, 4, 'int', 'animation_timer', False, False, None),
            (0x108, 1, 'char', 'field_108', False, False, None),
            (0x109, 1, 'char', 'field_109', False, False, None),
            (0x10A, 1, 'char', 'is_interactive', False, False, None),
            (0x10B, 1, 'char', 'auto_focus', False, False, None),
            (0x10C, 2, 'short', 'active_anim_id', False, False, None),
            (0x10E, 2, 'short', 'current_frame', False, False, None),
            (0x110, 2, 'short', 'cell_count', False, False, None),
            (0x112, 2, 'short', 'pending_frame', False, False, None),
            # GameWidget-specific fields
            (0x118, 2, 'short', 'field_118', False, False, None),
            (0x11A, 4, 'int', 'pair_x_1', False, False, None),
            (0x11E, 4, 'int', 'pair_y_1', False, False, None),
            (0x122, 4, 'int', 'pair_x_2', False, False, None),
            (0x126, 4, 'void *', 'object_ptr', True, False, None),
            (0x12A, 4, 'int', 'scrollbar_ref', False, False, None),
            (0x12E, 1, 'unsigned char', 'field_12e', False, False, None),
            (0x12F, 1, 'unsigned char', 'field_12f', False, False, None),
            (0x130, 4, 'int', 'field_130', False, False, None),
            (0x136, 4, 'void *', 'cleanup_fn_ptr', True, False, None),
            (0x13A, 4, 'void *', 'slot_ptr_0', True, False, None),
            (0x142, 4, 'void *', 'name_data_ptr', True, False, None),
            (0x14A, 4, 'void *', 'group_data_a', True, False, None),
            (0x154, 4, 'unsigned int', 'group_count_a', False, False, None),
            (0x15A, 2, 'short', 'selected_slot', False, False, None),
            (0x15C, 2, 'unsigned short', 'visible_slot_count', False, False, None),
            (0x15E, 2, 'short', 'page_offset', False, False, None),
        ],
    },
    {
        'name': 'PlayerSlot',
        'size': 0x12,
        'fields': [
            (0x00, 4, 'int', 'score', False, False, None),
            (0x04, 1, 'unsigned char', 'color', False, False, None),
            (0x05, 1, 'unsigned char', '_pad05', False, False, None),
            (0x06, 4, 'int', 'rank', False, False, None),
            (0x0A, 4, 'int', 'total', False, False, None),
            (0x0E, 4, 'int', 'stat', False, False, None),
        ],
    },
    {
        'name': 'GameBoard',
        'size': 0x280,
        'fields': [
            (0x14, 4, 'int', 'field_14', False, False, None),
            (0x22, 4, 'int', 'is_match', False, False, None),
            (0x2A, 4, 'int', 'event_type', False, False, None),
            (0x2E, 4, 'int', 'board_mode', False, False, None),
            (0x150, 4, 'void *', 'reward_obj_a', True, False, None),
            (0x154, 4, 'void *', 'reward_obj_b', True, False, None),
            (0x158, 4, 'void **', 'callback_ptr', True, False, None),
            (0x15C, 4, 'void *', 'reward_obj_c', True, False, None),
            (0x160, 4, 'void *', 'reward_obj_d', True, False, None),
            (0x164, 4, 'void *', 'reward_obj_e', True, False, None),
            (0x168, 4, 'void *', 'reward_obj_f', True, False, None),
            (0x170, 4, 'int', 'level_data_offset', False, False, None),
            (0x174, 1, 'char', 'is_timed', False, False, None),
            (0x176, 4, 'unsigned int', 'last_tick', False, False, None),
            (0x17A, 2, 'short', 'score_current', False, False, None),
            (0x17C, 2, 'short', 'score_secondary', False, False, None),
            (0x17E, 2, 'short', 'score_checkpoint_a', False, False, None),
            (0x180, 2, 'short', 'score_checkpoint_b', False, False, None),
            (0x182, 4, 'void *', 'reward_data_a', True, False, None),
            (0x186, 4, 'void *', 'reward_data_b', True, False, None),
            (0x18A, 4, 'void *', 'reward_data_c', True, False, None),
            (0x18E, 4, 'int', 'sound_handle', False, False, None),
            (0x1BA, 1, 'unsigned char', 'needs_refresh', False, False, None),
            (0x1BC, 2, 'short', 'refresh_counter', False, False, None),
            (0x1D0, 0x12 * 4, 'PlayerSlot', 'players', False, True,
             (0x12, 4, PLAYER_SLOT_SUBFIELDS)),
            (0x22A, 4, 'int', 'match_player', False, False, None),
            (0x234, 4, 'int', 'match_note', False, False, None),
            (0x238, 4, 'int', 'transpose_offset', False, False, None),
            (0x24C, 4, 'int', 'target_x', False, False, None),
            (0x250, 4, 'int', 'target_y', False, False, None),
            (0x26C, 2, 'short', 'board_layer', False, False, None),
            (0x26E, 2, 'short', 'board_note', False, False, None),
            (0x270, 2, 'short', 'field_270', False, False, None),
        ],
    },
    {
        'name': 'GameScreen',
        'size': 0x48A,
        'fields': [
            (0x06, 2, 'short', 'font_size', False, False, None),
            (0x08, 2, 'short', 'font_id', False, False, None),
            (0x0A, 4, 'unsigned int', 'font_style', False, False, None),
            (0x0E, 4, 'void *', 'hwnd', True, False, None),
            (0x1E, 1, 'unsigned char', 'color_r', False, False, None),
            (0x1F, 1, 'unsigned char', 'color_g', False, False, None),
            (0x20, 1, 'unsigned char', 'color_b', False, False, None),
            (0x26, 2, 'short', 'pen_style', False, False, None),
            (0x28, 2, 'short', 'pen_width', False, False, None),
            (0x47E, 4, 'void *', 'hdc_active', True, False, None),
            (0x482, 4, 'void *', 'hdc_buffer', True, False, None),
            (0x486, 4, 'void *', 'hdc_screen', True, False, None),
        ],
    },
    {
        'name': 'CString',
        'size': 0x1A,
        'fields': [
            (0x00, 4, 'void **', 'vtable', True, False, None),
            (0x04, 4, 'void **', 'pp_buffer', True, False, None),
            (0x08, 4, 'int', 'capacity', False, False, None),
            (0x0C, 4, 'void *', 'allocator', True, False, None),
            (0x10, 4, 'int', 'tag', False, False, None),
            (0x14, 1, 'unsigned char', 'owns_buffer', False, False, None),
            (0x15, 1, 'unsigned char', '_pad15', False, False, None),
            (0x16, 4, 'int', 'extra_data', False, False, None),
        ],
    },
    {
        'name': 'DialogWidget',
        'size': 0x1DA,
        'fields': [
            # Inherit key UIWidget offsets for matching
            (0x00, 4, 'void **', 'vtable', True, False, None),
            (0x06, 4, 'int', 'field_06', False, False, None),
            (0x0C, 4, 'void *', 'parent_widget', True, False, None),
            (0x12, 4, 'unsigned int', 'flags', False, False, None),
            (0x1A, 4, 'void *', 'child_list_1', True, False, None),
            (0x26, 4, 'int', 'pos_x', False, False, None),
            (0x2A, 4, 'int', 'pos_y', False, False, None),
            (0x36, 4, 'void *', 'child_list_2', True, False, None),
            # DialogWidget-specific
            (0x118, 4, 'void *', 'prev_dialog', True, False, None),
            (0x11C, 4, 'void *', 'child_list', True, False, None),
            (0x120, 1, 'unsigned char', 'is_registered', False, False, None),
            (0x121, 1, 'unsigned char', 'is_closing', False, False, None),
            (0x122, 4, 'int', 'dialog_result', False, False, None),
            (0x1CE, 4, 'int', 'dialog_value', False, False, None),
            (0x1D2, 1, 'unsigned char', 'input_mode', False, False, None),
            (0x1D8, 1, 'unsigned char', 'dialog_active', False, False, None),
            (0x1D9, 1, 'unsigned char', 'dialog_initialized', False, False, None),
        ],
    },
    {
        'name': 'TextDisplay',
        'size': 0x5E0,
        'fields': [
            (0x46, 4, 'void **', 'text_buffer_ptr', True, False, None),
            (0x4A, 4, 'int', 'text_capacity', False, False, None),
            (0x4E, 4, 'void *', 'text_allocator', True, False, None),
            (0x8E, 2, 'short', 'field_8e', False, False, None),
            (0x98, 2, 'short', 'origin_x', False, False, None),
            (0x9A, 2, 'short', 'origin_y', False, False, None),
            (0x9E, 4, 'int', 'field_9e', False, False, None),
            (0xA2, 2, 'short', 'extent_x', False, False, None),
            (0xA4, 2, 'short', 'extent_y', False, False, None),
            (0xAC, 4, 'int', 'text_length', False, False, None),
            (0xB0, 4, 'int', 'param_store', False, False, None),
            (0x11C, 2, 'short', 'field_11c', False, False, None),
            (0x126, 2, 'short', 'field_126', False, False, None),
            (0x128, 2, 'short', 'field_128', False, False, None),
            (0x22E, 4, 'int', 'max_entries', False, False, None),
            (0x406, 4, 'int', 'field_406', False, False, None),
            (0x5D2, 4, 'void **', 'pp_data', True, False, None),
            (0x5DC, 4, 'int', 'data_count', False, False, None),
        ],
    },
    {
        'name': 'SoundPlayer',
        'size': 0x1D0,
        'fields': [
            (0x10, 4, 'void *', 'audio_buffer', True, False, None),
            (0x26, 4, 'int', 'instrument_id', False, False, None),
            (0x2A, 4, 'int', 'note_value', False, False, None),
            (0x48, 4 * 96, 'int', 'sequence_data', False, True,
             (4, 96, [(0, 4, 'int', '')])),
            (0x1C8, 4, 'int', 'write_index', False, False, None),
            (0x1CC, 4, 'unsigned int', 'playback_rate', False, False, None),
        ],
    },
]


# =============================================================================
# BUILD LOOKUP TABLES
# =============================================================================

def build_offset_map(struct_def):
    """Build a dict: offset -> field info for a struct."""
    omap = {}
    for f in struct_def['fields']:
        offset, size, ctype, name, is_ptr, is_array, array_info = f
        if name.startswith('_pad') or name.startswith('_base'):
            continue  # skip padding for matching purposes but keep for lookup
        omap[offset] = f
        # For arrays, also register each element's sub-field offsets
        if is_array and array_info:
            stride, count, sub_fields = array_info
            for idx in range(count):
                for sf in sub_fields:
                    sub_off, sub_sz, sub_type, sub_name = sf
                    abs_off = offset + idx * stride + sub_off
                    if abs_off not in omap:
                        omap[abs_off] = f  # point to the array field
    return omap


def build_full_offset_map(struct_def):
    """Build offset -> (field_name, sub_access_str, field_info) including padding."""
    omap = {}
    for f in struct_def['fields']:
        offset, size, ctype, name, is_ptr, is_array, array_info = f
        if is_array and array_info:
            stride, count, sub_fields = array_info
            # Register the base of each element
            for idx in range(count):
                elem_base = offset + idx * stride
                if sub_fields and sub_fields[0][3]:  # named sub-fields
                    omap[elem_base] = (name, f'[{idx}].{sub_fields[0][3]}', f)
                else:
                    omap[elem_base] = (name, f'[{idx}]', f)
                for sf in sub_fields:
                    sub_off, sub_sz, sub_type, sub_name = sf
                    abs_off = elem_base + sub_off
                    if sub_name and sub_name != sub_fields[0][3]:
                        omap[abs_off] = (name, f'[{idx}].{sub_name}', f)
                    elif not sub_name:
                        omap[abs_off] = (name, f'[{idx}]', f)
                    else:
                        omap[abs_off] = (name, f'[{idx}].{sub_name}', f)
        else:
            omap[offset] = (name, '', f)
    return omap


# Pre-compute for all structs
STRUCT_OFFSET_MAPS = {}      # for scoring
STRUCT_FULL_MAPS = {}        # for replacement
STRUCT_ARRAY_INFO = {}       # base_offset -> (stride, count, sub_fields, field_name)

for s in STRUCTS:
    STRUCT_OFFSET_MAPS[s['name']] = build_offset_map(s)
    STRUCT_FULL_MAPS[s['name']] = build_full_offset_map(s)
    for f in s['fields']:
        offset, size, ctype, name, is_ptr, is_array, array_info = f
        if is_array and array_info:
            stride, count, sub_fields = array_info
            if s['name'] not in STRUCT_ARRAY_INFO:
                STRUCT_ARRAY_INFO[s['name']] = {}
            STRUCT_ARRAY_INFO[s['name']][offset] = (stride, count, sub_fields, name)


# Priority for disambiguation: prefer more specific (larger) structs when
# they have unique high-offset fields. We score by number of matching offsets,
# then break ties by preferring structs whose unique fields (fields not shared
# with any other struct) matched.

# Structs that are parents of others - deprioritize if child also matches
CHILD_STRUCTS = {
    'UIElement': ['UIWidget', 'GameWidget', 'DialogWidget'],
    'UIWidget': ['GameWidget', 'DialogWidget'],
}


# =============================================================================
# OFFSET EXTRACTION FROM FUNCTION BODY
# =============================================================================

# Matches: (int|intptr_t)this + 0xHEX  or  (int)this + DEC  or  (int)this_00 + 0xHEX
RE_THIS_OFFSET = re.compile(
    r'\(int(?:ptr_t)?\)(this(?:_\d+)?)\s*\+\s*(0x[0-9a-fA-F]+|\d+)'
)
# Inverted: EXPR + (int|intptr_t)this
RE_THIS_OFFSET_INV = re.compile(
    r'(0x[0-9a-fA-F]+|\d+)\s*\+\s*\(int(?:ptr_t)?\)(this(?:_\d+)?)'
)


def extract_this_offsets(body_text):
    """Extract all constant offsets used with this/this_XX in the function body."""
    offsets = set()
    this_vars = set()
    for m in RE_THIS_OFFSET.finditer(body_text):
        this_vars.add(m.group(1))
        val = m.group(2)
        offsets.add(int(val, 16) if val.startswith('0x') else int(val))
    for m in RE_THIS_OFFSET_INV.finditer(body_text):
        this_vars.add(m.group(2))
        val = m.group(1)
        offsets.add(int(val, 16) if val.startswith('0x') else int(val))
    return offsets, this_vars


def score_struct(struct_name, offsets):
    """Score how well a set of offsets matches a struct. Returns (score, unique_score)."""
    omap = STRUCT_OFFSET_MAPS.get(struct_name, {})
    score = 0
    for off in offsets:
        if off in omap:
            score += 1
        else:
            # Check if offset falls inside an array field
            for f in STRUCTS:
                if f['name'] != struct_name:
                    continue
                for field in f['fields']:
                    foff, fsize, _, _, _, is_arr, arr_info = field
                    if is_arr and arr_info:
                        stride, count, _ = arr_info
                        if foff <= off < foff + stride * count:
                            score += 1
                            break
    return score


def determine_struct(offsets):
    """Given a set of offsets, pick the best-matching struct. Returns struct_name or None."""
    if not offsets:
        return None

    scores = []
    for s in STRUCTS:
        sc = score_struct(s['name'], offsets)
        if sc >= 2:
            scores.append((sc, s['name'], s['size']))

    if not scores:
        return None

    # Sort by score descending, then by struct size descending (prefer more specific)
    scores.sort(key=lambda x: (x[0], x[2]), reverse=True)

    best_score = scores[0][0]
    best_name = scores[0][1]

    # If parent and child tie, prefer child
    if len(scores) > 1 and scores[1][0] == best_score:
        # Check if one is parent of the other
        for sc, name, sz in scores:
            if sc < best_score:
                break
            if name in CHILD_STRUCTS and best_name in CHILD_STRUCTS[name]:
                pass  # best_name is child, keep it
            elif best_name in CHILD_STRUCTS and name in CHILD_STRUCTS[best_name]:
                best_name = name  # name is child, prefer it

    # If the best-scoring struct has only shared offsets (offsets < 0x46) and
    # a more specific struct also scored well, prefer the specific one
    # This handles UIElement vs UIWidget vs GameWidget ambiguity
    if best_score >= 2:
        # Check if any higher-offset field matched for this struct
        omap = STRUCT_OFFSET_MAPS.get(best_name, {})
        has_unique_high = any(off >= 0xC6 and off in omap for off in offsets)
        if not has_unique_high and best_name in ('GameWidget', 'DialogWidget'):
            # Check if UIWidget or UIElement would be more appropriate
            for sc, name, sz in scores:
                if name == 'UIWidget' and sc >= best_score - 1:
                    # Similar score, no unique high fields -> could be either
                    pass  # keep GameWidget since it extends UIWidget

    return best_name


# =============================================================================
# FIELD LOOKUP
# =============================================================================

def lookup_field(struct_name, offset):
    """
    Look up a field at the given offset in the struct.
    Returns (access_str, field_info) or None.
    access_str is like 'field_name' or 'slots[2].value'
    """
    fmap = STRUCT_FULL_MAPS.get(struct_name)
    if not fmap:
        return None
    if offset in fmap:
        name, sub, field_info = fmap[offset]
        return (name + sub, field_info)

    # Check if it falls inside an array
    arr_info_map = STRUCT_ARRAY_INFO.get(struct_name, {})
    for base_off, (stride, count, sub_fields, arr_name) in arr_info_map.items():
        if base_off <= offset < base_off + stride * count:
            rel = offset - base_off
            idx = rel // stride
            sub_off = rel % stride
            for sf in sub_fields:
                if sf[0] == sub_off:
                    if sf[3]:
                        return (f'{arr_name}[{idx}].{sf[3]}', None)
                    else:
                        return (f'{arr_name}[{idx}]', None)
            # Sub-offset doesn't match a named sub-field
            return (f'{arr_name}[{idx}]', None)
    return None


def lookup_array_access(struct_name, stride, base_offset):
    """
    For pattern VAR * STRIDE + BASE, find the array field and sub-field.
    Returns (array_name, sub_field_suffix, sub_fields_list) or None.
    """
    arr_info_map = STRUCT_ARRAY_INFO.get(struct_name, {})
    for field_base, (fstride, count, sub_fields, arr_name) in arr_info_map.items():
        if fstride == stride and field_base <= base_offset < field_base + stride:
            sub_off = base_offset - field_base
            for sf in sub_fields:
                if sf[0] == sub_off:
                    if sf[3]:
                        return (arr_name, f'.{sf[3]}', sub_fields)
                    else:
                        return (arr_name, '', sub_fields)
            # Exact sub-field not found, return array access only
            return (arr_name, '', sub_fields)
    return None


# =============================================================================
# FUNCTION EXTRACTION
# =============================================================================

# Match __thiscall function signatures
RE_FUNC_SIG = re.compile(
    r'^(\w[\w\s\*]*?)\s+__thiscall\s+(\w+)\s*\(([^)]*)\)',
    re.MULTILINE
)

# Match function bodies (find matching braces)
def find_function_body(text, sig_end_pos):
    """Find the body of a function starting from after the signature.
    Returns (body_text, body_start, body_end) or None."""
    # Find the opening brace
    idx = text.find('{', sig_end_pos)
    if idx == -1:
        return None
    depth = 1
    start = idx + 1
    i = start
    while i < len(text) and depth > 0:
        if text[i] == '{':
            depth += 1
        elif text[i] == '}':
            depth -= 1
        i += 1
    if depth != 0:
        return None
    return (text[start:i - 1], start, i - 1)


def extract_functions(text):
    """Extract all __thiscall functions from text.
    Returns list of (sig_match, body_text, func_start, func_end)."""
    functions = []
    for m in RE_FUNC_SIG.finditer(text):
        # Find the body
        result = find_function_body(text, m.end())
        if result:
            body_text, body_start, body_end = result
            # func_start = start of signature, func_end = closing brace
            functions.append((m, body_text, m.start(), body_end + 1))
    return functions


# =============================================================================
# REPLACEMENT PATTERNS
# =============================================================================

def type_size(ctype_str):
    """Return the byte size for a C type string."""
    ctype_str = ctype_str.strip().rstrip('*').strip()
    sizes = {
        'char': 1, 'unsigned char': 1, 'byte': 1, 'undefined1': 1, 'undefined': 1,
        'uchar': 1, 'bool': 1,
        'short': 2, 'unsigned short': 2, 'ushort': 2, 'word': 2, 'undefined2': 2,
        'int': 4, 'unsigned int': 4, 'uint': 4, 'dword': 4,
        'undefined4': 4, 'undefined3': 4, 'long': 4, 'unsigned long': 4, 'ulong': 4,
        'float': 4,
        'long long': 8, 'unsigned long long': 8, 'ulonglong': 8,
        'undefined8': 8, 'double': 8, 'undefined5': 8, 'undefined6': 8,
    }
    # Pointer types are 4 bytes
    if '*' in ctype_str or ctype_str.endswith('*'):
        return 4
    return sizes.get(ctype_str, 4)


def make_replacements(body_text, struct_name, this_var='this'):
    """
    Apply all replacement patterns to a function body.
    Returns (new_body, replacements_count, unresolved_count).
    """
    replacements = 0
    unresolved = 0
    result = body_text

    # Helper to parse offset from hex/dec string
    def parse_int(s):
        s = s.strip()
        if s.startswith('0x') or s.startswith('0X'):
            return int(s, 16)
        return int(s)

    tv = re.escape(this_var)

    # ---- Pattern 3: Array access: *(TYPE *)(VAR * STRIDE + BASE + (int)this) ----
    # and inverted: *(TYPE *)((int)this + VAR * STRIDE + BASE)
    # Also handle without deref: (TYPE *)((int)this + VAR * STRIDE + BASE)
    # VAR can be a simple variable (param_1) or a struct field (this->correct_slot)

    # Index expression: variable or this->field
    IDX = r'(?:\w+->)?\w+'

    # Forward: *(TYPE *)((int|intptr_t)this + expr * stride + base)
    arr_pat_fwd = re.compile(
        r'\*\((\w[\w\s]*\*)\s*\)\(\(int(?:ptr_t)?\)' + tv +
        r'\s*\+\s*(' + IDX + r')\s*\*\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\)'
    )
    # Inverted: *(TYPE *)(expr * stride + base + (int|intptr_t)this)
    arr_pat_inv = re.compile(
        r'\*\((\w[\w\s]*\*)\s*\)\((' + IDX + r')\s*\*\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*\(int(?:ptr_t)?\)' + tv + r'\)'
    )
    # Return value pattern: VAR * STRIDE + BASE + (int|intptr_t)this
    ret_arr_pat = re.compile(
        r'(' + IDX + r')\s*\*\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*\(int(?:ptr_t)?\)' + tv
    )
    # Forward return: (int|intptr_t)this + VAR * STRIDE + BASE
    ret_arr_pat_fwd = re.compile(
        r'\(int(?:ptr_t)?\)' + tv + r'\s*\+\s*(' + IDX + r')\s*\*\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)'
    )

    def replace_array_deref(m, is_inverted=False):
        nonlocal replacements, unresolved
        cast_type = m.group(1).strip()
        var_name = m.group(2)
        stride = parse_int(m.group(3))
        base = parse_int(m.group(4))
        arr = lookup_array_access(struct_name, stride, base)
        if arr:
            arr_name, sub_suffix, _ = arr
            replacements += 1
            return f'{this_var}->{arr_name}[{var_name}]{sub_suffix}'
        unresolved += 1
        return m.group(0)

    result = arr_pat_fwd.sub(lambda m: replace_array_deref(m), result)
    result = arr_pat_inv.sub(lambda m: replace_array_deref(m, True), result)

    # No-deref array pattern: (TYPE *)((int|intptr_t)this + VAR * STRIDE + BASE)
    arr_noref_fwd = re.compile(
        r'\((\w[\w\s]*\*)\s*\)\(\(int(?:ptr_t)?\)' + tv +
        r'\s*\+\s*(' + IDX + r')\s*\*\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\)'
    )
    arr_noref_inv = re.compile(
        r'\((\w[\w\s]*\*)\s*\)\((' + IDX + r')\s*\*\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*\(int(?:ptr_t)?\)' + tv + r'\)'
    )

    def replace_array_noref(m):
        nonlocal replacements, unresolved
        cast_type = m.group(1).strip()
        var_name = m.group(2)
        stride = parse_int(m.group(3))
        base = parse_int(m.group(4))
        arr = lookup_array_access(struct_name, stride, base)
        if arr:
            arr_name, sub_suffix, _ = arr
            replacements += 1
            return f'({cast_type})&{this_var}->{arr_name}[{var_name}]{sub_suffix}'
        unresolved += 1
        return m.group(0)

    result = arr_noref_fwd.sub(replace_array_noref, result)
    result = arr_noref_inv.sub(replace_array_noref, result)

    # Return array patterns
    def replace_ret_array(m):
        nonlocal replacements, unresolved
        var_name = m.group(1)
        stride = parse_int(m.group(2))
        base = parse_int(m.group(3))
        arr = lookup_array_access(struct_name, stride, base)
        if arr:
            arr_name, sub_suffix, _ = arr
            replacements += 1
            return f'(int)&{this_var}->{arr_name}[{var_name}]{sub_suffix}'
        unresolved += 1
        return m.group(0)

    result = ret_arr_pat.sub(replace_ret_array, result)
    result = ret_arr_pat_fwd.sub(replace_ret_array, result)

    # ---- Pattern 5: Double deref: **(TYPE **)((int|intptr_t)this + OFFSET) ----
    dbl_deref = re.compile(
        r'\*\*\((\w[\w\s]*\*\s*\*)\s*\)\(\(int(?:ptr_t)?\)' + tv + r'\s*\+\s*(0x[0-9a-fA-F]+|\d+)\)'
    )
    dbl_deref_inv = re.compile(
        r'\*\*\((\w[\w\s]*\*\s*\*)\s*\)\((0x[0-9a-fA-F]+|\d+)\s*\+\s*\(int(?:ptr_t)?\)' + tv + r'\)'
    )

    def replace_dbl_deref(m):
        nonlocal replacements, unresolved
        offset = parse_int(m.group(2))
        field = lookup_field(struct_name, offset)
        if field:
            fname, finfo = field
            replacements += 1
            return f'*{this_var}->{fname}'
        unresolved += 1
        return m.group(0).replace(f'(int){this_var}', f'(intptr_t){this_var}')

    result = dbl_deref.sub(replace_dbl_deref, result)
    result = dbl_deref_inv.sub(replace_dbl_deref, result)

    # ---- Pattern 4: Pointer deref: *(TYPE **)((int|intptr_t)this + OFFSET) ----
    ptr_deref = re.compile(
        r'\*\((\w[\w\s]*\*\s*\*)\s*\)\(\(int(?:ptr_t)?\)' + tv + r'\s*\+\s*(0x[0-9a-fA-F]+|\d+)\)'
    )
    ptr_deref_inv = re.compile(
        r'\*\((\w[\w\s]*\*\s*\*)\s*\)\((0x[0-9a-fA-F]+|\d+)\s*\+\s*\(int(?:ptr_t)?\)' + tv + r'\)'
    )

    def replace_ptr_deref(m):
        nonlocal replacements, unresolved
        offset = parse_int(m.group(2))
        field = lookup_field(struct_name, offset)
        if field:
            fname, finfo = field
            replacements += 1
            return f'{this_var}->{fname}'
        unresolved += 1
        return m.group(0).replace(f'(int){this_var}', f'(intptr_t){this_var}')

    result = ptr_deref.sub(replace_ptr_deref, result)
    result = ptr_deref_inv.sub(replace_ptr_deref, result)

    # ---- Pattern 2: Simple deref: *(TYPE *)((int|intptr_t)this + OFFSET) ----
    simple_deref = re.compile(
        r'\*\((\w[\w\s]*\*)\s*\)\(\(int(?:ptr_t)?\)' + tv + r'\s*\+\s*(0x[0-9a-fA-F]+|\d+)\)'
    )
    simple_deref_inv = re.compile(
        r'\*\((\w[\w\s]*\*)\s*\)\((0x[0-9a-fA-F]+|\d+)\s*\+\s*\(int(?:ptr_t)?\)' + tv + r'\)'
    )

    def replace_simple_deref(m):
        nonlocal replacements, unresolved
        offset = parse_int(m.group(2))
        field = lookup_field(struct_name, offset)
        if field:
            fname, finfo = field
            replacements += 1
            return f'{this_var}->{fname}'
        unresolved += 1
        return m.group(0).replace(f'(int){this_var}', f'(intptr_t){this_var}')

    result = simple_deref.sub(replace_simple_deref, result)
    result = simple_deref_inv.sub(replace_simple_deref, result)

    # ---- Pattern 6: Address-of (no deref): (TYPE *)((int|intptr_t)this + OFFSET) ----
    addr_of = re.compile(
        r'\((\w[\w\s]*\*)\s*\)\(\(int(?:ptr_t)?\)' + tv + r'\s*\+\s*(0x[0-9a-fA-F]+|\d+)\)'
    )
    addr_of_inv = re.compile(
        r'\((\w[\w\s]*\*)\s*\)\((0x[0-9a-fA-F]+|\d+)\s*\+\s*\(int(?:ptr_t)?\)' + tv + r'\)'
    )

    def replace_addr_of(m):
        nonlocal replacements, unresolved
        cast_type = m.group(1).strip()
        offset = parse_int(m.group(2))
        field = lookup_field(struct_name, offset)
        if field:
            fname, finfo = field
            replacements += 1
            return f'({cast_type})&{this_var}->{fname}'
        unresolved += 1
        return m.group(0).replace(f'(int){this_var}', f'(intptr_t){this_var}')

    result = addr_of.sub(replace_addr_of, result)
    result = addr_of_inv.sub(replace_addr_of, result)

    # ---- Fallback: replace remaining (int)this with (intptr_t)this ----
    remaining_casts = re.compile(r'\(int\)' + tv + r'(?!\w)')
    remaining_count = len(remaining_casts.findall(result))
    if remaining_count > 0:
        unresolved += remaining_count
        result = remaining_casts.sub(f'(intptr_t){this_var}', result)

    return result, replacements, unresolved


# =============================================================================
# MAIN PROCESSING
# =============================================================================

def process_file(filepath, dry_run=False):
    """Process a single C source file. Returns stats dict."""
    with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
        text = f.read()

    stats = {
        'functions_typed': 0,
        'fields_replaced': 0,
        'unresolved': 0,
        'functions_skipped': 0,
    }

    # Check if there are any __thiscall functions with this access patterns
    if '__thiscall' not in text:
        return stats
    if ('(int)this' not in text and '(int)this_' not in text and
            '(intptr_t)this' not in text):
        return stats

    functions = extract_functions(text)
    if not functions:
        return stats

    # Process functions in reverse order to maintain position integrity
    new_text = text
    offset_shift = 0
    include_added = False

    # Collect all replacements first
    replacements_list = []

    for sig_match, body_text, func_start, func_end in functions:
        ret_type = sig_match.group(1).strip()
        func_name = sig_match.group(2)
        params_str = sig_match.group(3)

        # Check if this function uses this pointer arithmetic
        offsets, this_vars = extract_this_offsets(body_text)
        if not offsets:
            continue

        # Determine the struct type
        struct_name = determine_struct(offsets)
        if not struct_name:
            stats['functions_skipped'] += 1
            # Still do fallback (int)this -> (intptr_t)this
            new_body, repl, unres = body_text, 0, 0
            for tv in this_vars:
                pat = re.compile(r'\(int\)' + re.escape(tv) + r'(?!\w)')
                cnt = len(pat.findall(new_body))
                if cnt:
                    new_body = pat.sub(f'(intptr_t){tv}', new_body)
                    unres += cnt
            if new_body != body_text:
                stats['unresolved'] += unres
                replacements_list.append((func_start, func_end, body_text, new_body,
                                          sig_match, None, this_vars))
            continue

        stats['functions_typed'] += 1

        # Apply replacements for 'this'
        new_body = body_text
        total_repl = 0
        total_unres = 0

        if 'this' in this_vars:
            new_body, repl, unres = make_replacements(new_body, struct_name, 'this')
            total_repl += repl
            total_unres += unres

        # Handle this_XX variants
        for tv in this_vars:
            if tv == 'this':
                continue
            # For this_00 etc., we need to add a local var and use it
            new_body_tmp, repl, unres = make_replacements(new_body, struct_name, tv)
            total_repl += repl
            total_unres += unres
            new_body = new_body_tmp

        stats['fields_replaced'] += total_repl
        stats['unresolved'] += total_unres

        replacements_list.append((func_start, func_end, body_text, new_body,
                                  sig_match, struct_name, this_vars))

    # Apply replacements in reverse order
    for func_start, func_end, old_body, new_body, sig_match, struct_name, this_vars in reversed(replacements_list):
        # Find body position in current new_text
        body_start_in_func = new_text.find('{', sig_match.start()) + 1
        body_end_in_func = func_end - 1
        actual_old_body = new_text[body_start_in_func:body_end_in_func]

        # For this_XX variables, add local cast at top of function body
        extra_decls = ''
        if struct_name:
            for tv in this_vars:
                if tv != 'this' and tv.startswith('this_'):
                    extra_decls += f'\n  {struct_name} *self_{tv} = ({struct_name} *){tv};'

        # Replace the signature's void *this with StructType *this
        if struct_name:
            old_sig = new_text[sig_match.start():body_start_in_func]
            new_sig = old_sig.replace('void *this', f'{struct_name} *this', 1)
            # Also handle cases where this was already some other type
            if new_sig == old_sig:
                # Try replacing just the param
                new_sig = re.sub(
                    r'\bvoid\s*\*\s*this\b',
                    f'{struct_name} *this',
                    old_sig,
                    count=1
                )
        else:
            old_sig = new_text[sig_match.start():body_start_in_func]
            new_sig = old_sig

        # Build the replacement
        new_func_text = new_sig
        if extra_decls:
            new_func_text += extra_decls + '\n' + new_body
        else:
            # Just swap the body
            new_func_text += new_body

        new_text = new_text[:sig_match.start()] + new_func_text + new_text[body_end_in_func:]

    # Add #include "game_structs.h" if we made changes and it's not already there
    if stats['functions_typed'] > 0 or stats['fields_replaced'] > 0:
        if '#include "game_structs.h"' not in new_text:
            # Insert after the last existing #include
            last_include = -1
            for m in re.finditer(r'^#include\s+[<"].*[>"]', new_text, re.MULTILINE):
                last_include = m.end()
            if last_include >= 0:
                new_text = (new_text[:last_include] +
                            '\n#include "game_structs.h"' +
                            new_text[last_include:])
            else:
                new_text = '#include "game_structs.h"\n' + new_text

    if not dry_run and new_text != text:
        with open(filepath, 'w', encoding='utf-8', newline='\n') as f:
            f.write(new_text)

    return stats


def main():
    import argparse
    parser = argparse.ArgumentParser(
        description='Replace raw this pointer arithmetic with typed struct field access.'
    )
    parser.add_argument('files', nargs='*',
                        help='C source files to process. If none given, processes src/*.c')
    parser.add_argument('--dry-run', '-n', action='store_true',
                        help='Show what would be changed without writing files.')
    parser.add_argument('--verbose', '-v', action='store_true',
                        help='Print per-function details.')
    args = parser.parse_args()

    if not args.files:
        # Default: process all .c files in src/
        src_dir = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')
        if os.path.isdir(src_dir):
            args.files = sorted(
                os.path.join(src_dir, f)
                for f in os.listdir(src_dir)
                if f.endswith('.c')
            )
        else:
            print(f"Error: src directory not found at {src_dir}", file=sys.stderr)
            sys.exit(1)

    total_stats = defaultdict(int)

    for filepath in args.files:
        if not os.path.isfile(filepath):
            print(f"  SKIP (not found): {filepath}")
            continue

        stats = process_file(filepath, dry_run=args.dry_run)

        if any(v > 0 for v in stats.values()):
            prefix = "[DRY RUN] " if args.dry_run else ""
            print(f"{prefix}{os.path.basename(filepath)}:")
            print(f"    Functions typed:    {stats['functions_typed']}")
            print(f"    Fields replaced:    {stats['fields_replaced']}")
            print(f"    Unresolved:         {stats['unresolved']}")
            print(f"    Functions skipped:  {stats['functions_skipped']} (no struct match)")
        else:
            if args.verbose:
                print(f"  {os.path.basename(filepath)}: no changes")

        for k, v in stats.items():
            total_stats[k] += v

    print(f"\n{'=' * 50}")
    print(f"TOTAL across {len(args.files)} files:")
    print(f"    Functions typed:    {total_stats['functions_typed']}")
    print(f"    Fields replaced:    {total_stats['fields_replaced']}")
    print(f"    Unresolved:         {total_stats['unresolved']}")
    print(f"    Functions skipped:  {total_stats['functions_skipped']}")

    if args.dry_run:
        print("\n(Dry run - no files were modified)")


if __name__ == '__main__':
    main()
