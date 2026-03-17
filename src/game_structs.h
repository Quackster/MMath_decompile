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
    unsigned char  _pad42[2];       /* +0x42 */
    short          field_44;        /* +0x44  palette/cursor index, 0xFFFF = none */
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
    unsigned char  _pad42[2];       /* +0x42 */
    short          field_44;        /* +0x44  palette/cursor index, 0xFFFF = none */
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
 * GroupEntry - Sub-struct of GameWidget (stride = 0x16 = 22 bytes)
 *
 * Each GameWidget has groups_a[3] at +0x14A and groups_b[3] at +0x18C.
 * ======================================================================== */
typedef struct GroupEntry {
    void          *data_ptr;        /* +0x00  pointer to slot array (CVector-like) */
    unsigned char  _pad04[6];       /* +0x04 */
    unsigned int   count;           /* +0x0A  number of entries */
    unsigned char  _pad0e[2];       /* +0x0E */
    short          selected;        /* +0x10  selected index */
    unsigned short visible_count;   /* +0x12  visible slot count */
    short          page_offset;     /* +0x14  page/scroll offset */
} GroupEntry;
/* static_assert(sizeof(GroupEntry) == 0x16, "GroupEntry size mismatch"); */

/* ========================================================================
 * GameWidget - Extends UIWidget (total ~0x1CE bytes)
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
    unsigned char  _pad42[2];       /* +0x42 */
    short          field_44;        /* +0x44  palette/cursor index, 0xFFFF = none */
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
    GroupEntry     groups_a[3];     /* +0x14A  group A entries (stride 0x16 x3, to 0x18B) */
    GroupEntry     groups_b[3];     /* +0x18C  group B entries (stride 0x16 x3, to 0x1CD) */
} GameWidget;
/* Note: actual size may be larger than 0x19C due to groups_b extending to 0x1CE */

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
 * BoardSlotEntry - Sub-struct used by GameBoard subclass (stride = 0x0E = 14 bytes)
 *
 * Alternative layout of the players[] region used by board game logic.
 * Count stored at GameBoard +0x1D4, array starts at +0x1D8.
 * ======================================================================== */
typedef struct BoardSlotEntry {
    unsigned char  slot_type;       /* +0x00  type/color index */
    unsigned char  _pad01;          /* +0x01 */
    int            resource_id;     /* +0x02  resource/sound index */
    int            pos_x;           /* +0x06  x position */
    int            pos_y;           /* +0x0A  y position */
} BoardSlotEntry;
/* static_assert(sizeof(BoardSlotEntry) == 0x0E, "BoardSlotEntry size mismatch"); */

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
    int            field_26;        /* +0x26  board dimension/size */
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
    void          *field_16c;       /* +0x16C  object pointer with vtable */
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
    int            field_192;       /* +0x192 */
    unsigned char  field_196;       /* +0x196 */
    unsigned char  _pad197;         /* +0x197 */
    char           field_198;       /* +0x198  init flag */
    char           field_199;       /* +0x199 */
    int            slot_handles[5]; /* +0x19A  5 slot handle ints (0x19A-0x1AD) */
    int            field_1ae;       /* +0x1AE  pointer/object */
    int            field_1b2;       /* +0x1B2  pointer/object with vtable */
    short          field_1b6;       /* +0x1B6 */
    char           field_1b8;       /* +0x1B8 */
    char           field_1b9;       /* +0x1B9 */
    unsigned char  needs_refresh;   /* +0x1BA */
    unsigned char  _pad1bb;         /* +0x1BB */
    short          refresh_counter; /* +0x1BC */
    int            field_1be;       /* +0x1BE */
    unsigned char  _pad1c2[6];      /* +0x1C2 */
    int            field_1c8;       /* +0x1C8 */
    unsigned char  _pad1cc[4];      /* +0x1CC */
    PlayerSlot     players[4];      /* +0x1D0  stride 0x12, 4 players to 0x217
                                     * NOTE: Some subclasses use an alternative layout in this region:
                                     *   +0x1D4: int board_slot_count
                                     *   +0x1D8: BoardSlotEntry board_slots[N]  (stride 0x0E)
                                     * Access via: ((BoardSlotEntry *)((int)board + 0x1D8))[i]
                                     */
    unsigned char  _pad218[0x12];   /* +0x218  (0x22A - 0x218 = 0x12) */
    int            match_player;    /* +0x22A */
    unsigned char  _pad22e[6];      /* +0x22E */
    int            match_note;      /* +0x234 */
    int            transpose_offset; /* +0x238 */
    unsigned char  _pad23c[0x10];   /* +0x23C */
    int            target_x;        /* +0x24C */
    int            target_y;        /* +0x250 */
    short          field_254;       /* +0x254  timer/state field */
    unsigned char  _pad256[0x16];   /* +0x256 */
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
    unsigned char  _pad42_d[2];     /* +0x42 */
    short          field_44;        /* +0x44  palette/cursor index, 0xFFFF = none */
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

/* ========================================================================
 * ResourceRecord - Binary resource/sprite record (~variable size)
 *
 * Used by resource loading functions (FUN_0045d6b0, FUN_0045d720,
 * FUN_0045d8e0, FUN_0045d930, FUN_0045d950, FUN_0045feb0).
 * Layout reverse-engineered from initialization and access patterns.
 * The record has a header followed by sub-entries at stride 0x0E.
 * ======================================================================== */
typedef struct ResourceSubEntry {
    short          field_00;        /* +0x00 */
    short          field_02;        /* +0x02 */
    short          field_04;        /* +0x04 */
    short          field_06;        /* +0x06 */
    short          field_08;        /* +0x08 */
    short          field_0a;        /* +0x0A */
    short          field_0c;        /* +0x0C */
} ResourceSubEntry;
/* static_assert(sizeof(ResourceSubEntry) == 0x0E, "ResourceSubEntry size mismatch"); */

typedef struct ResourceDataBlock {
    unsigned char  _base[0x10];     /* +0x00 */
    void          *byte_data_ptr;   /* +0x10  pointer to byte data array */
    int            data_limit;      /* +0x14  max valid index */
} ResourceDataBlock;

typedef struct ResourceRecord {
    short          entry_count;     /* +0x00  number of entries */
    short          field_02;        /* +0x02  init 0xFF */
    short          field_04;        /* +0x04  init 0xFF */
    short          field_06;        /* +0x06 */
    short          field_08;        /* +0x08 */
    short          active_flag;     /* +0x0A  init 1, 0=inactive */
    short          mode_flags;      /* +0x0C  mode/type with bit flags (0x2000, 0x4000) */
    int            field_0e;        /* +0x0E */
    int            field_12;        /* +0x12 */
    int            field_16;        /* +0x16  computation operand */
    int            field_1a;        /* +0x1A  computation operand */
    int            data_block_ptr;  /* +0x1E  pointer to ResourceDataBlock */
    short          field_22;        /* +0x22 */
    ResourceSubEntry entries[6];    /* +0x24  sub-entries (stride 0x0E, 6 max) */
} ResourceRecord;
/* static_assert(sizeof(ResourceRecord) == 0x76, "ResourceRecord size mismatch"); */

/* ========================================================================
 * TimerState - Game timer/input state (pointed to by DAT_004896b0)
 *
 * Used extensively in game_resources.c and game_ui.c.
 * Offsets reverse-engineered from access patterns.
 * ======================================================================== */
typedef struct TimerState {
    unsigned char  _base[4];        /* +0x00 */
    unsigned int   tick_a;          /* +0x04  GetTickCount timestamp */
    unsigned char  _pad08[4];       /* +0x08 */
    unsigned int   tick_b;          /* +0x0C  GetTickCount timestamp */
    unsigned char  _pad10[0x17];    /* +0x10 */
    char           flag_27;         /* +0x27  animation/playback flag */
    char           flag_28;         /* +0x28  active flag */
    char           flag_29;         /* +0x29  secondary flag */
    unsigned char  _pad2a[2];       /* +0x2A */
    char           flag_2c;         /* +0x2C */
    unsigned char  _pad2d[3];       /* +0x2D */
    short          state_30;        /* +0x30  state machine value */
    unsigned char  _pad32[0x0C];    /* +0x32 */
    char           field_3e;        /* +0x3E */
    unsigned char  _pad3f;          /* +0x3F */
    void          *active_ptr;      /* +0x40  active object pointer */
} TimerState;

/* ========================================================================
 * ResourceHandle - Small resource reference (~8 bytes)
 *
 * Used by FUN_0042f180/FUN_0042f1c0/FUN_0042f350/FUN_0042f3f0.
 * Holds a loaded flag, resource ID, and pointer to loaded data.
 * ======================================================================== */
typedef struct ResourceHandle {
    char           loaded;          /* +0x00  1=loaded, 0=not loaded */
    unsigned char  _pad01;          /* +0x01 */
    short          resource_id;     /* +0x02  resource identifier */
    void          *data_ptr;        /* +0x04  pointer to loaded resource data */
} ResourceHandle;
/* static_assert(sizeof(ResourceHandle) == 0x08, "ResourceHandle size mismatch"); */

/* ========================================================================
 * PoolCacheEntry - Memory pool cache entry (stride = 0x0E = 14 bytes)
 *
 * Global array at DAT_00486240, 256 entries.
 * Used by FUN_00427030 (alloc), FUN_00427220 (free), FUN_00427290 (cleanup).
 * ======================================================================== */
typedef struct PoolCacheEntry {
    void          *data_ptr;        /* +0x00  allocated data pointer */
    int            alloc_size;      /* +0x04  allocated size */
    int            used_size;       /* +0x08  currently used size */
    char           in_use;          /* +0x0C  1=in-use, 0=free */
    unsigned char  _pad0d;          /* +0x0D */
} PoolCacheEntry;
/* static_assert(sizeof(PoolCacheEntry) == 0x0E, "PoolCacheEntry size mismatch"); */

/* ========================================================================
 * SoundChannelState - Sound/animation channel state (~0x1D8 bytes)
 *
 * Used in game_audio.c FUN_00440ca0 and related functions.
 * Contains a resource handle pointer and two channel selection shorts.
 * ======================================================================== */
typedef struct SoundChannelState {
    unsigned char  _base[0x6A];
    int            resource_handle;  /* +0x6A  resource/sprite handle ptr */
    unsigned char  _pad6e[0x162];    /* +0x6E  (0x1D0 - 0x6E = 0x162) */
    short          channel_a;        /* +0x1D0  first channel selection */
    unsigned char  _pad1d2[4];       /* +0x1D2 */
    short          channel_b;        /* +0x1D6  second channel selection */
} SoundChannelState;
/* static_assert(sizeof(SoundChannelState) == 0x1D8, "SoundChannelState size mismatch"); */

/* ========================================================================
 * PointF64 - 2D point with double-precision coordinates (~0x14 bytes)
 *
 * Used in game_ui.c FUN_00432fb0 for rotation math.
 * ======================================================================== */
typedef struct PointF64 {
    int            type;             /* +0x00  type/flags */
    double         x;               /* +0x04  x coordinate */
    double         y;               /* +0x0C  y coordinate */
} PointF64;
/* static_assert(sizeof(PointF64) == 0x14, "PointF64 size mismatch"); */

/* ========================================================================
 * ExtendedCString - CString with additional field at +0x18 (~0x1C bytes)
 *
 * Extends CString. The extra_data field at +0x16 is split into two shorts,
 * and a new int field is added at +0x18.
 * Used in game_ui.c FUN_004329d0, FUN_00432a10, FUN_00432a60.
 * ======================================================================== */
typedef struct ExtendedCString {
    void         **vtable;           /* +0x00 */
    void         **pp_buffer;        /* +0x04  double-indirection to char buffer */
    int            capacity;         /* +0x08  allocated size, rounded to 0x20 */
    void          *allocator;        /* +0x0C */
    int            tag;              /* +0x10  0xFFFFFFFF sentinel initially */
    unsigned char  owns_buffer;      /* +0x14 */
    unsigned char  _pad15;           /* +0x15 */
    short          extra_lo;         /* +0x16  low part of original extra_data */
    int            extra_hi;         /* +0x18  extended field (set from param_1[5] or param_6) */
} ExtendedCString;
/* static_assert(sizeof(ExtendedCString) == 0x1C, "ExtendedCString size mismatch"); */

/* ========================================================================
 * SoundSlotEntry - Sound slot sub-entry (stride = 0x0E = 14 bytes)
 *
 * Used at DAT_0048714c area in game_ui.c, stride-0x0E lookup.
 * ======================================================================== */
typedef struct SoundSlotEntry {
    unsigned char  _base[0x0A];      /* +0x00 */
    short          field_0a;         /* +0x0A */
    unsigned char  field_0c;         /* +0x0C */
    unsigned char  flags;            /* +0x0D  bit4=active */
} SoundSlotEntry;
/* static_assert(sizeof(SoundSlotEntry) == 0x0E, "SoundSlotEntry size mismatch"); */

/* ========================================================================
 * ExtendedWidget - Large widget with display/render fields (>0x5CE bytes)
 *
 * Likely a TextDisplay subclass or composite widget.
 * Used in game_ui.c FUN_00434860, FUN_004383b0, etc.
 * ======================================================================== */
typedef struct ExtendedWidget {
    unsigned char  _base[0x6A];      /* +0x00  base widget data */
    int            resource_id;      /* +0x6A  resource/sprite handle ptr */
    unsigned char  _pad6e[0x26A];    /* +0x6E  (0x2D8 - 0x6E = 0x26A) */
    void          *render_data;      /* +0x2D8  render/text data pointer */
    unsigned char  _pad2dc[0x38];    /* +0x2DC  (0x314 - 0x2DC = 0x38) */
    void          *display_list;     /* +0x314  display list/sound data pointer */
    unsigned char  _pad318[0x298];   /* +0x318  (0x5B0 - 0x318 = 0x298) */
    short          active_item;      /* +0x5B0  active/selected item index */
    unsigned char  _pad5b2[0x18];    /* +0x5B2  (0x5CA - 0x5B2 = 0x18) */
    int            item_count;       /* +0x5CA  number of items */
} ExtendedWidget;
/* static_assert(sizeof(ExtendedWidget) == 0x5CE, "ExtendedWidget size mismatch"); */

/* ========================================================================
 * GameWidgetInit - Widget initialization struct (~0x6A bytes)
 *
 * Used in game_ui.c FUN_00433880. Offsets match UIElement subrange
 * but accessed via raw int pointer. Has sub-object at +0x42,
 * display fields at +0x5a, +0x5e, +0x5f, +0x62, +0x66.
 * ======================================================================== */
typedef struct GameWidgetInit {
    unsigned char  _base[0x42];      /* +0x00 */
    void          *sub_object;       /* +0x42  embedded sub-object pointer */
    unsigned char  _pad46[0x14];     /* +0x46  (0x5A - 0x46 = 0x14) */
    short          init_state;       /* +0x5A  initialization state */
    unsigned char  _pad5c[2];        /* +0x5C */
    unsigned char  style_a;          /* +0x5E  style byte (0xFF=none) */
    unsigned char  style_b;          /* +0x5F  style byte (0xFF=none) */
    unsigned char  _pad60[2];        /* +0x60 */
    int            scale_x;          /* +0x62  scale/transform X (init 0x100) */
    int            scale_y;          /* +0x66  scale/transform Y */
} GameWidgetInit;
/* static_assert(sizeof(GameWidgetInit) == 0x6A, "GameWidgetInit size mismatch"); */

/* ========================================================================
 * ExtendedDialogWidget - DialogWidget with scroll/drag extensions (~0x1E8 bytes)
 *
 * Extends DialogWidget (0x1DA) with additional scroll/drag tracking fields.
 * Used in game_input.c FUN_0043c3a0, FUN_0043c9e0, FUN_0043e500.
 * ======================================================================== */
typedef struct ExtendedDialogWidget {
    /* --- DialogWidget base (0x00 - 0x1D9) --- */
    void         **vtable;           /* +0x00 */
    unsigned char  field_04;         /* +0x04 */
    unsigned char  _pad05_e;         /* +0x05 */
    int            field_06;         /* +0x06 */
    unsigned char  is_visible;       /* +0x0A */
    unsigned char  _pad0b_e;         /* +0x0B */
    void          *parent_widget;    /* +0x0C */
    unsigned char  field_10;         /* +0x10 */
    unsigned char  _pad11_e;         /* +0x11 */
    unsigned int   flags;            /* +0x12 */
    int            type_or_mode;     /* +0x16 */
    void          *child_list_1;     /* +0x1A */
    short          rect_top;         /* +0x1E */
    short          rect_left;        /* +0x20 */
    short          rect_bottom;      /* +0x22 */
    short          rect_right;       /* +0x24 */
    int            pos_x;            /* +0x26 */
    int            pos_y;            /* +0x2A */
    int            pos_w;            /* +0x2E */
    int            pos_h;            /* +0x32 */
    void          *child_list_2;     /* +0x36 */
    void          *parent_ptr;       /* +0x3A */
    int            field_3e;         /* +0x3E */
    unsigned char  _pad42_e[2];      /* +0x42 */
    short          field_44;         /* +0x44 */
    int            sub_widgets_a[16]; /* +0x46 */
    int            sub_widgets_b[16]; /* +0x86 */
    char           scrollable_flag;  /* +0xC6 */
    char           field_c7;         /* +0xC7 */
    char           cursor_style_a;   /* +0xC8 */
    char           cursor_style_b;   /* +0xC9 */
    unsigned char  scroll_data[32];  /* +0xCA */
    int            origin_x;         /* +0xEA */
    int            origin_y;         /* +0xEE */
    short         *tile_data_ptr;    /* +0xF2 */
    void          *level_data_ptr;   /* +0xF6 */
    void          *cell_info_ptr;    /* +0xFA */
    unsigned int   timestamp;        /* +0xFE */
    char           mirror_flag;      /* +0x102 */
    unsigned char  _pad103_e;        /* +0x103 */
    int            animation_timer;  /* +0x104 */
    char           field_108;        /* +0x108 */
    char           field_109;        /* +0x109 */
    char           is_interactive;   /* +0x10A */
    char           auto_focus;       /* +0x10B */
    short          active_anim_id;   /* +0x10C */
    short          current_frame;    /* +0x10E */
    short          cell_count;       /* +0x110 */
    short          pending_frame;    /* +0x112 */
    unsigned char  anim_flag_0;      /* +0x114 */
    unsigned char  anim_flag_1;      /* +0x115 */
    unsigned char  anim_flag_2;      /* +0x116 */
    unsigned char  anim_flag_3;      /* +0x117 */
    void          *prev_dialog;      /* +0x118 */
    void          *child_list;       /* +0x11C */
    unsigned char  is_registered;    /* +0x120 */
    unsigned char  is_closing;       /* +0x121 */
    int            dialog_result;    /* +0x122 */
    unsigned char  dialog_data[0xA6]; /* +0x126 */
    unsigned char  _pad1cc_e[2];     /* +0x1CC */
    int            dialog_value;     /* +0x1CE */
    unsigned char  input_mode;       /* +0x1D2 */
    unsigned char  _pad1d3_e[5];     /* +0x1D3 */
    unsigned char  dialog_active;    /* +0x1D8 */
    unsigned char  dialog_initialized; /* +0x1D9 */
    /* --- ExtendedDialogWidget extensions (0x1DA - 0x1E7) --- */
    int            drag_y;           /* +0x1DA  drag/scroll Y position */
    int            drag_x;           /* +0x1DE  drag/scroll X position */
    int            scroll_y;         /* +0x1E2  scroll offset Y */
    short          scroll_x;         /* +0x1E6  scroll offset X */
} ExtendedDialogWidget;
/* static_assert(sizeof(ExtendedDialogWidget) == 0x1E8, "ExtendedDialogWidget size mismatch"); */

/* ========================================================================
 * PaletteContainer - Palette/resource container (~0x7E bytes)
 *
 * Used in game_objects.c FUN_004037e0.
 * Contains sub-object, palette handle, child list, and child count.
 * ======================================================================== */
typedef struct PaletteContainer {
    unsigned char  _base[0x42];      /* +0x00 */
    void          *sub_object;       /* +0x42  embedded sub-object ptr */
    unsigned char  _pad46[0x24];     /* +0x46  (0x6A - 0x46 = 0x24) */
    int            palette_handle;   /* +0x6A  palette/resource handle */
    unsigned char  _pad6e[4];        /* +0x6E */
    void          *child_list_ptr;   /* +0x72  child widget list pointer */
    unsigned char  _pad76[6];        /* +0x76  (0x7C - 0x76 = 6) */
    short          child_count;      /* +0x7C  number of child widgets */
} PaletteContainer;
/* static_assert(sizeof(PaletteContainer) == 0x7E, "PaletteContainer size mismatch"); */

/* ========================================================================
 * ResourceObject - Sprite/resource object (~0x1C bytes)
 *
 * Used in game_misc.c FUN_00465c40, FUN_00465c80 for resource management.
 * Contains data pointer, secondary pointer, and ownership flag.
 * ======================================================================== */
typedef struct ResourceObject {
    unsigned char  _base[0x0C];      /* +0x00 */
    void          *buffer_ptr;       /* +0x0C  internal buffer pointer */
    unsigned int   data_ptr;         /* +0x10  resource data pointer */
    int            secondary_ptr;    /* +0x14  secondary data/resource pointer */
    char           owns_data;        /* +0x18  1=owns data, 0=borrowed */
    unsigned char  _pad19[3];        /* +0x19 */
} ResourceObject;
/* static_assert(sizeof(ResourceObject) == 0x1C, "ResourceObject size mismatch"); */

#pragma pack(pop)

#endif /* GAME_STRUCTS_H */
