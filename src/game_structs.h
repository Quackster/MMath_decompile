/*
 * game_structs.h - Reconstructed struct definitions for MMath
 *
 * Generated from reverse-engineered field analysis of MMath.exe.
 * All offsets verified against decompiled access patterns.
 * Uses #pragma pack(push, 1) for exact byte-level layout matching.
 */

#ifndef GAME_STRUCTS_H
#define GAME_STRUCTS_H

#include "types.h"

#pragma pack(push, 1)

/* ========================================================================
 * AnswerSlot - Sub-struct of MathProblem (stride = 0x12 = 18 bytes)
 *
 * Holds one answer choice in a math problem.
 * flags encoding:
 *   0x00=none, 0x01=add, 0x02=sub, 0x03=mul, 0x04=div,
 *   0x05=compare, 0x10=frac, 0x20=mixed, 0x30=mixed+frac,
 *   0x40=percent, 0x50=decimal
 * ======================================================================== */
typedef struct AnswerSlot {
    int            value;           /* +0x00  numeric answer value */
    unsigned char  symbol;          /* +0x04  symbol/operator indicator */
    unsigned char  _pad05;          /* +0x05 */
    int            result;          /* +0x06  computed result */
    int            denom;           /* +0x0A  denominator */
    unsigned int   flags;           /* +0x0E  operation flags */
} AnswerSlot;
/* static_assert(sizeof(AnswerSlot) == 0x12, "AnswerSlot size mismatch"); */

/* ========================================================================
 * MathProblem - Main math problem engine (~0x268 bytes)
 *
 * problem_type encoding:
 *   0x111-0x168 = comparison problems
 *   0x211-0x265 = arithmetic problems
 * game_mode: 2=practice, 3=test
 * ======================================================================== */
typedef struct MathProblem {
    unsigned char  _base[12];       /* +0x00  base class data */
    void          *buffer_ptr;      /* +0x0C */
    unsigned char  field_10;        /* +0x10 */
    unsigned char  _pad11[3];       /* +0x11 */
    char           field_14;        /* +0x14 */
    unsigned char  _pad15;          /* +0x15 */
    int            field_16;        /* +0x16 */
    unsigned char  _pad1a[4];       /* +0x1A */
    int            active_flag;     /* +0x1E  non-zero when problem active */
    unsigned int   is_correct;      /* +0x22  0=wrong, 1=correct */
    int            difficulty;      /* +0x26  difficulty level */
    int            problem_type;    /* +0x2A  problem type enum */
    int            game_mode;       /* +0x2E  2=practice, 3=test */
    unsigned char  _pad32[66];      /* +0x32 */
    unsigned char  field_74;        /* +0x74 */
    unsigned char  _pad75[343];     /* +0x75  (0x1CC - 0x75 = 343) */
    int            field_1cc;       /* +0x1CC */
    int            threshold;       /* +0x1D0  comparison threshold */
    int            threshold_high;  /* +0x1D4 */
    int            threshold_extra; /* +0x1D8 */
    unsigned char  _pad1dc[16];     /* +0x1DC */
    unsigned int   correct_slot;    /* +0x1EC  index of correct answer slot */
    int            factor;          /* +0x1F0  multiplicative factor for fractions */
    unsigned char  _pad1f4[10];     /* +0x1F4 */
    int            operand_a;       /* +0x1FE  first operand */
    int            operand_a_denom; /* +0x202  denominator for operand_a */
    unsigned int   operation;       /* +0x206  operation type (same as flags) */
    AnswerSlot     slots[5];        /* +0x20A  answer slots (stride 0x12) */
    unsigned char  _pad264[4];      /* +0x264  padding to 0x268 */
} MathProblem;
/* static_assert(sizeof(MathProblem) == 0x268, "MathProblem size mismatch"); */

/* ========================================================================
 * UIElement - Base UI element (~0xC6 bytes)
 *
 * flags bitmask: bit0=active, bit4=enabled, bit6=visible,
 *                bit11=0x800, bit13=0x2000 modal
 * pos_x/pos_y: fixed-point, 256-based
 * ======================================================================== */
typedef struct UIElement {
    void         **vtable;          /* +0x00 */
    unsigned char  field_04;        /* +0x04 */
    unsigned char  _pad05;          /* +0x05 */
    int            field_06;        /* +0x06 */
    unsigned char  is_visible;      /* +0x0A */
    unsigned char  _pad0b;          /* +0x0B */
    void          *parent_widget;   /* +0x0C */
    unsigned char  field_10;        /* +0x10 */
    unsigned char  _pad11;          /* +0x11 */
    unsigned int   flags;           /* +0x12  bitmask */
    int            type_or_mode;    /* +0x16 */
    void          *child_list_1;    /* +0x1A  CVector of child elements */
    short          rect_top;        /* +0x1E */
    short          rect_left;       /* +0x20 */
    short          rect_bottom;     /* +0x22 */
    short          rect_right;      /* +0x24 */
    int            pos_x;           /* +0x26  fixed-point 256-based */
    int            pos_y;           /* +0x2A */
    int            pos_w;           /* +0x2E */
    int            pos_h;           /* +0x32 */
    void          *child_list_2;    /* +0x36 */
    void          *parent_ptr;      /* +0x3A */
    int            field_3e;        /* +0x3E */
    unsigned char  _pad42[4];       /* +0x42 */
    int            sub_widgets_a[16]; /* +0x46  (0x46 through 0x85) */
    int            sub_widgets_b[16]; /* +0x86  (0x86 through 0xC5) */
} UIElement;
/* static_assert(sizeof(UIElement) == 0xC6, "UIElement size mismatch"); */

/* ========================================================================
 * UIWidget - Extends UIElement (total ~0x118 bytes)
 * ======================================================================== */
typedef struct UIWidget {
    /* --- UIElement base (0x00 - 0xC5) --- */
    void         **vtable;          /* +0x00 */
    unsigned char  field_04;        /* +0x04 */
    unsigned char  _pad05;          /* +0x05 */
    int            field_06;        /* +0x06 */
    unsigned char  is_visible;      /* +0x0A */
    unsigned char  _pad0b;          /* +0x0B */
    void          *parent_widget;   /* +0x0C */
    unsigned char  field_10;        /* +0x10 */
    unsigned char  _pad11;          /* +0x11 */
    unsigned int   flags;           /* +0x12 */
    int            type_or_mode;    /* +0x16 */
    void          *child_list_1;    /* +0x1A */
    short          rect_top;        /* +0x1E */
    short          rect_left;       /* +0x20 */
    short          rect_bottom;     /* +0x22 */
    short          rect_right;      /* +0x24 */
    int            pos_x;           /* +0x26 */
    int            pos_y;           /* +0x2A */
    int            pos_w;           /* +0x2E */
    int            pos_h;           /* +0x32 */
    void          *child_list_2;    /* +0x36 */
    void          *parent_ptr;      /* +0x3A */
    int            field_3e;        /* +0x3E */
    unsigned char  _pad42[4];       /* +0x42 */
    int            sub_widgets_a[16]; /* +0x46 */
    int            sub_widgets_b[16]; /* +0x86 */
    /* --- UIWidget extensions (0xC6 - 0x117) --- */
    char           scrollable_flag; /* +0xC6 */
    char           field_c7;        /* +0xC7 */
    char           cursor_style_a;  /* +0xC8  set to 0x21 when scrollable */
    char           cursor_style_b;  /* +0xC9  set to 0x22 when scrollable */
    unsigned char  scroll_data[32]; /* +0xCA  sub-struct for scroll state */
    int            origin_x;        /* +0xEA  scroll/viewport origin */
    int            origin_y;        /* +0xEE */
    short         *tile_data_ptr;   /* +0xF2 */
    void          *level_data_ptr;  /* +0xF6 */
    void          *cell_info_ptr;   /* +0xFA */
    unsigned int   timestamp;       /* +0xFE  GetTickCount() */
    char           mirror_flag;     /* +0x102 */
    unsigned char  _pad103;         /* +0x103 */
    int            animation_timer; /* +0x104 */
    char           field_108;       /* +0x108 */
    char           field_109;       /* +0x109 */
    char           is_interactive;  /* +0x10A */
    char           auto_focus;      /* +0x10B */
    short          active_anim_id;  /* +0x10C */
    short          current_frame;   /* +0x10E  0xFFFF = none */
    short          cell_count;      /* +0x110 */
    short          pending_frame;   /* +0x112 */
    unsigned char  anim_flag_0;     /* +0x114 */
    unsigned char  anim_flag_1;     /* +0x115 */
    unsigned char  anim_flag_2;     /* +0x116 */
    unsigned char  anim_flag_3;     /* +0x117 */
} UIWidget;
/* static_assert(sizeof(UIWidget) == 0x118, "UIWidget size mismatch"); */

/* ========================================================================
 * GameWidget - Extends UIWidget (total ~0x19C bytes)
 * ======================================================================== */
typedef struct GameWidget {
    /* --- UIElement base (0x00 - 0xC5) --- */
    void         **vtable;          /* +0x00 */
    unsigned char  field_04;        /* +0x04 */
    unsigned char  _pad05;          /* +0x05 */
    int            field_06;        /* +0x06 */
    unsigned char  is_visible;      /* +0x0A */
    unsigned char  _pad0b;          /* +0x0B */
    void          *parent_widget;   /* +0x0C */
    unsigned char  field_10;        /* +0x10 */
    unsigned char  _pad11;          /* +0x11 */
    unsigned int   flags;           /* +0x12 */
    int            type_or_mode;    /* +0x16 */
    void          *child_list_1;    /* +0x1A */
    short          rect_top;        /* +0x1E */
    short          rect_left;       /* +0x20 */
    short          rect_bottom;     /* +0x22 */
    short          rect_right;      /* +0x24 */
    int            pos_x;           /* +0x26 */
    int            pos_y;           /* +0x2A */
    int            pos_w;           /* +0x2E */
    int            pos_h;           /* +0x32 */
    void          *child_list_2;    /* +0x36 */
    void          *parent_ptr;      /* +0x3A */
    int            field_3e;        /* +0x3E */
    unsigned char  _pad42[4];       /* +0x42 */
    int            sub_widgets_a[16]; /* +0x46 */
    int            sub_widgets_b[16]; /* +0x86 */
    /* --- UIWidget extensions (0xC6 - 0x117) --- */
    char           scrollable_flag; /* +0xC6 */
    char           field_c7;        /* +0xC7 */
    char           cursor_style_a;  /* +0xC8 */
    char           cursor_style_b;  /* +0xC9 */
    unsigned char  scroll_data[32]; /* +0xCA */
    int            origin_x;        /* +0xEA */
    int            origin_y;        /* +0xEE */
    short         *tile_data_ptr;   /* +0xF2 */
    void          *level_data_ptr;  /* +0xF6 */
    void          *cell_info_ptr;   /* +0xFA */
    unsigned int   timestamp;       /* +0xFE */
    char           mirror_flag;     /* +0x102 */
    unsigned char  _pad103;         /* +0x103 */
    int            animation_timer; /* +0x104 */
    char           field_108;       /* +0x108 */
    char           field_109;       /* +0x109 */
    char           is_interactive;  /* +0x10A */
    char           auto_focus;      /* +0x10B */
    short          active_anim_id;  /* +0x10C */
    short          current_frame;   /* +0x10E */
    short          cell_count;      /* +0x110 */
    short          pending_frame;   /* +0x112 */
    unsigned char  anim_flag_0;     /* +0x114 */
    unsigned char  anim_flag_1;     /* +0x115 */
    unsigned char  anim_flag_2;     /* +0x116 */
    unsigned char  anim_flag_3;     /* +0x117 */
    /* --- GameWidget extensions (0x118 - 0x19B) --- */
    short          field_118;       /* +0x118 */
    int            pair_x_1;        /* +0x11A */
    int            pair_y_1;        /* +0x11E */
    int            pair_x_2;        /* +0x122 */
    void          *object_ptr;      /* +0x126  pointer to sub-object */
    int            scrollbar_ref;   /* +0x12A */
    unsigned char  field_12e;       /* +0x12E */
    unsigned char  field_12f;       /* +0x12F */
    int            field_130;       /* +0x130 */
    unsigned char  _pad134[2];      /* +0x134 */
    void          *cleanup_fn_ptr;  /* +0x136 */
    void          *slot_ptr_0;      /* +0x13A  first of several slot pointers */
    unsigned char  _pad13e[4];      /* +0x13E */
    void          *name_data_ptr;   /* +0x142 */
    unsigned char  _pad146[4];      /* +0x146 */
    void          *group_data_a;    /* +0x14A  per-group data (stride 0x16 x3) */
    unsigned char  _pad14e[6];      /* +0x14E */
    unsigned int   group_count_a;   /* +0x154 */
    unsigned char  _pad158[2];      /* +0x158 */
    short          selected_slot;   /* +0x15A */
    unsigned short visible_slot_count; /* +0x15C */
    short          page_offset;     /* +0x15E */
    unsigned char  _pad160[0x3C];   /* +0x160  padding to 0x19C */
} GameWidget;
/* static_assert(sizeof(GameWidget) == 0x19C, "GameWidget size mismatch"); */

/* ========================================================================
 * PlayerSlot - Sub-struct of GameBoard (stride = 0x12 = 18 bytes)
 * ======================================================================== */
typedef struct PlayerSlot {
    int            score;           /* +0x00 */
    unsigned char  color;           /* +0x04 */
    unsigned char  _pad05;          /* +0x05 */
    int            rank;            /* +0x06 */
    int            total;           /* +0x0A */
    int            stat;            /* +0x0E */
} PlayerSlot;
/* static_assert(sizeof(PlayerSlot) == 0x12, "PlayerSlot size mismatch"); */

/* ========================================================================
 * GameBoard - Board state with player data (~0x280 bytes)
 *
 * event_type: compared against 0x101, 0x201, etc.
 * board_mode: 2=practice, 3=test
 * ======================================================================== */
typedef struct GameBoard {
    unsigned char  _base[0x14];     /* +0x00 */
    int            field_14;        /* +0x14 */
    unsigned char  _pad18[0x0A];    /* +0x18 */
    int            is_match;        /* +0x22 */
    unsigned char  _pad26[4];       /* +0x26 */
    int            event_type;      /* +0x2A */
    int            board_mode;      /* +0x2E */
    unsigned char  _pad32[0x11E];   /* +0x32  (0x150 - 0x32 = 0x11E) */
    void          *reward_obj_a;    /* +0x150 */
    void          *reward_obj_b;    /* +0x154 */
    void         **callback_ptr;    /* +0x158 */
    void          *reward_obj_c;    /* +0x15C */
    void          *reward_obj_d;    /* +0x160 */
    void          *reward_obj_e;    /* +0x164 */
    void          *reward_obj_f;    /* +0x168 */
    unsigned char  _pad16c[4];      /* +0x16C */
    int            level_data_offset; /* +0x170 */
    char           is_timed;        /* +0x174 */
    unsigned char  _pad175;         /* +0x175 */
    unsigned int   last_tick;       /* +0x176  GetTickCount timestamp */
    short          score_current;   /* +0x17A */
    short          score_secondary; /* +0x17C */
    short          score_checkpoint_a; /* +0x17E */
    short          score_checkpoint_b; /* +0x180 */
    void          *reward_data_a;   /* +0x182 */
    void          *reward_data_b;   /* +0x186 */
    void          *reward_data_c;   /* +0x18A */
    int            sound_handle;    /* +0x18E */
    unsigned char  _pad192[0x28];   /* +0x192 */
    unsigned char  needs_refresh;   /* +0x1BA */
    unsigned char  _pad1bb;         /* +0x1BB */
    short          refresh_counter; /* +0x1BC */
    unsigned char  _pad1be[0x12];   /* +0x1BE */
    PlayerSlot     players[4];      /* +0x1D0  stride 0x12, 4 players to 0x217 */
    unsigned char  _pad218[0x12];   /* +0x218  (0x22A - 0x218 = 0x12) */
    int            match_player;    /* +0x22A */
    unsigned char  _pad22e[6];      /* +0x22E */
    int            match_note;      /* +0x234 */
    int            transpose_offset; /* +0x238 */
    unsigned char  _pad23c[0x10];   /* +0x23C */
    int            target_x;        /* +0x24C */
    int            target_y;        /* +0x250 */
    unsigned char  _pad254[0x18];   /* +0x254 */
    short          board_layer;     /* +0x26C */
    short          board_note;      /* +0x26E */
    short          field_270;       /* +0x270 */
    unsigned char  _pad272[0x0E];   /* +0x272  padding to 0x280 */
} GameBoard;
/* static_assert(sizeof(GameBoard) == 0x280, "GameBoard size mismatch"); */

/* ========================================================================
 * GameScreen - Rendering surface with GDI handles (~0x48A bytes)
 * ======================================================================== */
typedef struct GameScreen {
    unsigned char  _base[6];        /* +0x00 */
    short          font_size;       /* +0x06 */
    short          font_id;         /* +0x08 */
    unsigned int   font_style;      /* +0x0A  bit0=bold, bit1=italic, bit2=underline */
    void          *hwnd;            /* +0x0E  HWND */
    unsigned char  _pad12[0x0C];    /* +0x12 */
    unsigned char  color_r;         /* +0x1E */
    unsigned char  color_g;         /* +0x1F */
    unsigned char  color_b;         /* +0x20 */
    unsigned char  _pad21[5];       /* +0x21 */
    short          pen_style;       /* +0x26 */
    short          pen_width;       /* +0x28 */
    unsigned char  draw_context[0x454]; /* +0x2A  large embedded drawing context */
    void          *hdc_active;      /* +0x47E  HDC - active device context */
    void          *hdc_buffer;      /* +0x482  HDC - back buffer */
    void          *hdc_screen;      /* +0x486  HDC - screen DC */
} GameScreen;
/* static_assert(sizeof(GameScreen) == 0x48A, "GameScreen size mismatch"); */

/* ========================================================================
 * CString - Dynamic string (~0x1A bytes)
 * ======================================================================== */
typedef struct CString {
    void         **vtable;          /* +0x00 */
    void         **pp_buffer;       /* +0x04  double-indirection to char buffer */
    int            capacity;        /* +0x08  allocated size, rounded to 0x20 */
    void          *allocator;       /* +0x0C */
    int            tag;             /* +0x10  0xFFFFFFFF sentinel initially */
    unsigned char  owns_buffer;     /* +0x14 */
    unsigned char  _pad15;          /* +0x15 */
    int            extra_data;      /* +0x16 */
} CString;
/* static_assert(sizeof(CString) == 0x1A, "CString size mismatch"); */

/* ========================================================================
 * DialogWidget - Dialog/popup, extends UIWidget (total ~0x1DA bytes)
 * ======================================================================== */
typedef struct DialogWidget {
    /* --- UIElement base (0x00 - 0xC5) --- */
    void         **vtable;          /* +0x00 */
    unsigned char  field_04;        /* +0x04 */
    unsigned char  _pad05_d;        /* +0x05 */
    int            field_06;        /* +0x06 */
    unsigned char  is_visible;      /* +0x0A */
    unsigned char  _pad0b_d;        /* +0x0B */
    void          *parent_widget;   /* +0x0C */
    unsigned char  field_10;        /* +0x10 */
    unsigned char  _pad11_d;        /* +0x11 */
    unsigned int   flags;           /* +0x12 */
    int            type_or_mode;    /* +0x16 */
    void          *child_list_1;    /* +0x1A */
    short          rect_top;        /* +0x1E */
    short          rect_left;       /* +0x20 */
    short          rect_bottom;     /* +0x22 */
    short          rect_right;      /* +0x24 */
    int            pos_x;           /* +0x26 */
    int            pos_y;           /* +0x2A */
    int            pos_w;           /* +0x2E */
    int            pos_h;           /* +0x32 */
    void          *child_list_2;    /* +0x36 */
    void          *parent_ptr;      /* +0x3A */
    int            field_3e;        /* +0x3E */
    unsigned char  _pad42_d[4];     /* +0x42 */
    int            sub_widgets_a[16]; /* +0x46 */
    int            sub_widgets_b[16]; /* +0x86 */
    /* --- UIWidget extensions (0xC6 - 0x117) --- */
    char           scrollable_flag; /* +0xC6 */
    char           field_c7;        /* +0xC7 */
    char           cursor_style_a;  /* +0xC8 */
    char           cursor_style_b;  /* +0xC9 */
    unsigned char  scroll_data[32]; /* +0xCA */
    int            origin_x;        /* +0xEA */
    int            origin_y;        /* +0xEE */
    short         *tile_data_ptr;   /* +0xF2 */
    void          *level_data_ptr;  /* +0xF6 */
    void          *cell_info_ptr;   /* +0xFA */
    unsigned int   timestamp;       /* +0xFE */
    char           mirror_flag;     /* +0x102 */
    unsigned char  _pad103_d;       /* +0x103 */
    int            animation_timer; /* +0x104 */
    char           field_108;       /* +0x108 */
    char           field_109;       /* +0x109 */
    char           is_interactive;  /* +0x10A */
    char           auto_focus;      /* +0x10B */
    short          active_anim_id;  /* +0x10C */
    short          current_frame;   /* +0x10E */
    short          cell_count;      /* +0x110 */
    short          pending_frame;   /* +0x112 */
    unsigned char  anim_flag_0;     /* +0x114 */
    unsigned char  anim_flag_1;     /* +0x115 */
    unsigned char  anim_flag_2;     /* +0x116 */
    unsigned char  anim_flag_3;     /* +0x117 */
    /* --- DialogWidget extensions (0x118 - 0x1D9) --- */
    void          *prev_dialog;     /* +0x118 */
    void          *child_list;      /* +0x11C */
    unsigned char  is_registered;   /* +0x120 */
    unsigned char  is_closing;      /* +0x121 */
    int            dialog_result;   /* +0x122 */
    unsigned char  dialog_data[0xA6]; /* +0x126  embedded data (CString or other) */
    unsigned char  _pad1cc[2];      /* +0x1CC */
    int            dialog_value;    /* +0x1CE */
    unsigned char  input_mode;      /* +0x1D2 */
    unsigned char  _pad1d3[5];      /* +0x1D3 */
    unsigned char  dialog_active;   /* +0x1D8 */
    unsigned char  dialog_initialized; /* +0x1D9 */
} DialogWidget;
/* static_assert(sizeof(DialogWidget) == 0x1DA, "DialogWidget size mismatch"); */

/* ========================================================================
 * TextDisplay - Text rendering (~0x5E0 bytes)
 *
 * Contains UIWidget-like base plus text management fields.
 * ======================================================================== */
typedef struct TextDisplay {
    unsigned char  _base[0x46];     /* +0x00  base widget data */
    void         **text_buffer_ptr; /* +0x46  double-indirection text buffer */
    int            text_capacity;   /* +0x4A */
    void          *text_allocator;  /* +0x4E */
    unsigned char  _pad52[0x3C];    /* +0x52 */
    short          field_8e;        /* +0x8E */
    unsigned char  _pad90[8];       /* +0x90 */
    short          origin_x;        /* +0x98 */
    short          origin_y;        /* +0x9A */
    unsigned char  _pad9c[2];       /* +0x9C */
    int            field_9e;        /* +0x9E */
    short          extent_x;        /* +0xA2 */
    short          extent_y;        /* +0xA4 */
    unsigned char  _pada6[6];       /* +0xA6 */
    int            text_length;     /* +0xAC */
    int            param_store;     /* +0xB0 */
    unsigned char  _padb4[0x68];    /* +0xB4 */
    short          field_11c;       /* +0x11C */
    unsigned char  _pad11e[8];      /* +0x11E */
    short          field_126;       /* +0x126 */
    short          field_128;       /* +0x128 */
    unsigned char  _pad12a[0x104];  /* +0x12A */
    int            max_entries;     /* +0x22E */
    unsigned char  _pad232[0x1D4]; /* +0x232  (0x406 - 0x232 = 0x1D4) */
    int            field_406;       /* +0x406 */
    unsigned char  _pad40a[0x1C8]; /* +0x40A  (0x5D2 - 0x40A = 0x1C8) */
    void         **pp_data;         /* +0x5D2 */
    unsigned char  _pad5d6[6];      /* +0x5D6 */
    int            data_count;      /* +0x5DC */
} TextDisplay;
/* static_assert(sizeof(TextDisplay) == 0x5E0, "TextDisplay size mismatch"); */

/* ========================================================================
 * SoundPlayer - Audio (~0x1D0 bytes)
 * ======================================================================== */
typedef struct SoundPlayer {
    unsigned char  _base[0x10];     /* +0x00 */
    void          *audio_buffer;    /* +0x10 */
    unsigned char  _pad14[0x12];    /* +0x14 */
    int            instrument_id;   /* +0x26 */
    int            note_value;      /* +0x2A  (param << 4) */
    unsigned char  _pad2e[0x1A];    /* +0x2E */
    int            sequence_data[96]; /* +0x48  ring buffer (0x180 bytes to 0x1C7) */
    int            write_index;     /* +0x1C8  ring buffer position */
    unsigned int   playback_rate;   /* +0x1CC */
} SoundPlayer;
/* static_assert(sizeof(SoundPlayer) == 0x1D0, "SoundPlayer size mismatch"); */

/* ========================================================================
 * CVector - Dynamic array container (~0x12 bytes)
 *
 * Used for child_list_1 and child_list_2 in UIElement/UIWidget.
 * Stores a pointer to an array of void* elements with a count.
 * ======================================================================== */
typedef struct CVector {
    void         **vtable;          /* +0x00 */
    void         **data;            /* +0x04  array of element pointers */
    int            capacity;        /* +0x08 */
    unsigned char  _pad0c[2];       /* +0x0C */
    unsigned int   count;           /* +0x0E  number of elements */
    unsigned char  _pad12[2];       /* +0x12 */
} CVector;
/* static_assert(sizeof(CVector) == 0x14, "CVector size mismatch"); */

/* ========================================================================
 * SmartHeapPool - SmartHeap memory pool descriptor (~0x170 bytes)
 *
 * Used by the SmartHeap allocator (SMACKW32-era memory management).
 * ======================================================================== */
typedef struct SmartHeapPool {
    unsigned char  _base[0x0E];     /* +0x00 */
    short          page_tag;        /* +0x0E  magic: 0xCAD0 */
    void          *slab_head;       /* +0x10 */
    void          *end_ptr;         /* +0x14 */
    unsigned char  page_flags;      /* +0x15 */
    unsigned char  _pad16[6];       /* +0x16 */
    void          *data_start;      /* +0x1C */
    short          pool_signature;  /* +0x20  magic: 0xBEAD = -0x4153 */
    short          pool_flags;      /* +0x22  bit1 = threadsafe */
    int            alloc_unit;      /* +0x24 */
    int            min_block;       /* +0x28 */
    short          max_small_block; /* +0x2A */
    short          _pad2c;          /* +0x2C */
    int            current_size;    /* +0x2E */
    unsigned char  _pad32[2];       /* +0x32 */
    int            max_size;        /* +0x34 */
    unsigned char  _pad38[0x10];    /* +0x38 */
    unsigned char  critical_section[0x18]; /* +0x48 */
    int            lock_count;      /* +0x60 */
    unsigned char  _pad64[0x100];   /* +0x64 */
    void          *overflow_chain;  /* +0x164 */
    unsigned char  _pad168[4];      /* +0x168 */
    void          *pool_field;      /* +0x16C */
} SmartHeapPool;
/* static_assert(sizeof(SmartHeapPool) == 0x170, "SmartHeapPool size mismatch"); */

/* ========================================================================
 * GameSession - Global game session state (pointed to by DAT_0048345c)
 *
 * Contains current problem display state, scoring area, level info.
 * Offsets reverse-engineered from access patterns.
 * ======================================================================== */
typedef struct GameSession {
    unsigned char  _base[0x3A];     /* +0x00 */
    void          *child_list;      /* +0x3A */
    unsigned char  _pad3e[4];       /* +0x3E */
    unsigned char  field_42;        /* +0x42 */
    unsigned char  _pad43[2];       /* +0x43 */
    char           decimal_flag;    /* +0x45 */
    unsigned char  _pad46;          /* +0x46 */
    char           fraction_flag;   /* +0x47 */
    unsigned short display_flags;   /* +0x48 */
    unsigned char  _pad4a[0x46];    /* +0x4A */
    char           level_mode;      /* +0x90 */
    unsigned char  _pad91;          /* +0x91 */
    short          score_display;   /* +0x92 */
    unsigned char  _pad94[2];       /* +0x94 */
    short          field_96;        /* +0x96 */
    unsigned char  _pad98[4];       /* +0x98 */
    short          field_9c;        /* +0x9C */
    short          field_9e;        /* +0x9E */
    unsigned char  _pada0[0x0A];    /* +0xA0 */
    short          total_count;     /* +0xAA */
    unsigned char  _padac[0x0A];    /* +0xAC */
    short          correct_count;   /* +0xB6 */
    unsigned char  _padb8[0x0A];    /* +0xB8 */
    short          wrong_count;     /* +0xC2 */
    unsigned char  _padc4[0x24];    /* +0xC4 */
    short          field_e8;        /* +0xE8 */
    short          scroll_origin;   /* +0xEA */
    unsigned char  _padec[4];       /* +0xEC */
    short          field_f0;        /* +0xF0 */
    short          field_f2;        /* +0xF2 */
    char           field_f3;        /* +0xF3 */
    char           field_f4;        /* +0xF4 */
    char           field_f5;        /* +0xF5 */
} GameSession;

#pragma pack(pop)

#endif /* GAME_STRUCTS_H */
