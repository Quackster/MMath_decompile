#!/usr/bin/env python3
"""Replace all 35 STUB functions in game_objects.c with reconstructed implementations."""

import re

with open('src/game_objects.c', 'r') as f:
    content = f.read()

replacements = {}

# Stub 1: FUN_004015c0 (45 lines)
replacements['''int * __thiscall
FUN_004015c0(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
{
    /* STUB: 45 lines not yet reconstructed */
    return 0;
}'''] = '''int * __thiscall
FUN_004015c0(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
{
    /* Reconstructed: ~45 lines - UIWidget initialization with rect/position setup */
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    /* SEH prolog */
    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00401720;
    *_fs = &_seh_prev;

    FUN_004052b0((UIWidget *)this);
    _seh_state = 0;

    ((UIWidget *)this)->vtable = (void **)&PTR_FUN_00472420;
    ((UIWidget *)this)->rect_top = param_1;
    ((UIWidget *)this)->rect_left = param_2;
    ((UIWidget *)this)->rect_bottom = param_1 + param_3;
    ((UIWidget *)this)->rect_right = param_2 + param_3;
    ((UIWidget *)this)->pos_x = (int)param_2 << 8;
    ((UIWidget *)this)->pos_y = (int)param_1 << 8;
    ((UIWidget *)this)->pos_w = (int)(param_2 + param_3) << 8;
    ((UIWidget *)this)->pos_h = (int)(param_1 + param_3) << 8;
    ((UIWidget *)this)->field_06 = param_4;
    ((UIWidget *)this)->parent_widget = param_5;
    ((UIWidget *)this)->type_or_mode = 0;
    ((UIWidget *)this)->flags = ((UIWidget *)this)->flags | 0x10;
    ((UIWidget *)this)->is_visible = 0;

    if (param_5 != NULL) {
        FUN_0041bd00(param_5,(int)this);
    }

    FUN_0041d490((int)this);

    _seh_state = 0xffffffff;
    /* SEH epilog */
    *_fs = _seh_prev;
    return (int *)this;
}'''

# Stub 2: FUN_004017b4 (7 lines)
replacements['''void FUN_004017b4(void)
{
    /* STUB: 7 lines not yet reconstructed */
    return;
}'''] = '''void FUN_004017b4(void)
{
    /* Reconstructed: ~7 lines - SEH cleanup helper, destroys sub-object */
    int _ebp;

    FUN_00405420(*(int **)(_ebp + -0x10));
}'''

# Stub 3: FUN_004017cc (7 lines)
replacements['''void FUN_004017cc(void)
{
    /* STUB: 7 lines not yet reconstructed */
    return;
}'''] = '''void FUN_004017cc(void)
{
    /* Reconstructed: ~7 lines - SEH cleanup helper, destroys widget */
    int _ebp;

    FUN_004012f0(*(int **)(_ebp + -0x10));
}'''

# Stub 4: FUN_00401930 (133 lines)
replacements['''void FUN_00401930(int param_1,short param_2,int param_3,int param_4,int param_5,char param_6,
                 char param_7)
{
    /* STUB: 133 lines not yet reconstructed */
    return;
}'''] = '''void FUN_00401930(int param_1,short param_2,int param_3,int param_4,int param_5,char param_6,
                 char param_7)
{
    /* Reconstructed: ~133 lines - GameWidget setup with group slot initialization */
    GameWidget *widget;
    GameBoard *board;
    short s1;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00401b90;
    *_fs = &_seh_prev;

    widget = (GameWidget *)param_1;
    widget->field_130 = param_3;
    widget->field_12e = 0;
    widget->field_12f = 0;
    *(unsigned char *)&widget->field_118 = (unsigned char)param_2;

    if (param_4 != 0) {
        widget->object_ptr = (void *)param_4;
    }
    if (param_5 != 0) {
        widget->cleanup_fn_ptr = (void *)param_5;
    }

    for (s1 = 0; s1 < 3; s1 = s1 + 1) {
        widget->groups_a[s1].count = 0;
        widget->groups_a[s1].selected = -1;
        widget->groups_a[s1].visible_count = 0;
        widget->groups_a[s1].page_offset = 0;
        widget->groups_a[s1].data_ptr = NULL;
    }
    for (s1 = 0; s1 < 3; s1 = s1 + 1) {
        widget->groups_b[s1].count = 0;
        widget->groups_b[s1].selected = -1;
        widget->groups_b[s1].visible_count = 0;
        widget->groups_b[s1].page_offset = 0;
        widget->groups_b[s1].data_ptr = NULL;
    }

    if (param_6 != '\\0') {
        widget->pause_flag = 0;
        FUN_0041da90((DialogWidget *)widget, 1);
        widget->type_or_mode = 2;
    }
    if (param_7 != '\\0') {
        widget->scrollbar_ref = 0;
    }

    if (((UIElement *)DAT_00489ac8)->parent_widget == NULL) {
        board = (GameBoard *)((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
        if (board != NULL) {
            board->needs_refresh = 1;
            board->refresh_counter = 1;
        }
    }
    FUN_00402fa0(widget);

    *_fs = _seh_prev;
}'''

# Stub 5: FUN_00401e70 (41 lines)
replacements['''void __fastcall FUN_00401e70(void *param_1)
{
    /* STUB: 41 lines not yet reconstructed */
    return;
}'''] = '''void __fastcall FUN_00401e70(void *param_1)
{
    /* Reconstructed: ~41 lines - GameWidget cleanup/teardown for slot objects */
    GameWidget *widget;
    short s1;
    short s2;
    int n1;

    widget = (GameWidget *)param_1;

    for (s1 = 0; s1 < 3; s1 = s1 + 1) {
        for (s2 = 1; (uint)(int)s2 <= widget->groups_a[s1].count; s2 = s2 + 1) {
            n1 = *(int *)(*(int *)widget->groups_a[s1].data_ptr + -4 + s2 * 4);
            if (n1 != 0) {
                ((GameWidget *)n1)->field_12f = 0;
                ((GameWidget *)n1)->field_12e = 0;
                *(unsigned char *)&((GameWidget *)n1)->field_118 = 0;
            }
        }
    }
    for (s1 = 0; s1 < 3; s1 = s1 + 1) {
        for (s2 = 1; (uint)(int)s2 <= widget->groups_b[s1].count; s2 = s2 + 1) {
            n1 = *(int *)(*(int *)widget->groups_b[s1].data_ptr + -4 + s2 * 4);
            if (n1 != 0) {
                *(unsigned char *)&((GameWidget *)n1)->field_118 = 0;
            }
        }
    }

    widget->field_130 = 0;
    widget->field_12e = 0;
    widget->field_12f = 0;
    widget->object_ptr = NULL;
}'''

# Stub 6: FUN_00402070 (159 lines)
replacements['''uint FUN_00402070(void *param_1)
{
    /* STUB: 159 lines not yet reconstructed */
    return 0;
}'''] = '''uint FUN_00402070(void *param_1)
{
    /* Reconstructed: ~159 lines - GameWidget event handler dispatch */
    GameWidget *widget;
    int n1;
    short s1, s2;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_0040226d;
    *_fs = &_seh_prev;

    widget = (GameWidget *)param_1;
    if (widget == NULL || widget->field_12f != '\\0') {
        *_fs = _seh_prev;
        return 0;
    }

    for (s1 = 0; s1 < 3; s1 = s1 + 1) {
        if (widget->groups_a[s1].count != 0) {
            for (s2 = 1; (uint)(int)s2 <= widget->groups_a[s1].count; s2 = s2 + 1) {
                n1 = *(int *)(*(int *)widget->groups_a[s1].data_ptr + -4 + s2 * 4);
                if (n1 != 0 && ((GameWidget *)n1)->field_12f == '\\0' &&
                    ((GameWidget *)n1)->field_12e == '\\0') {
                    ((GameWidget *)n1)->field_12f = 1;
                    FUN_00402fa0(widget);
                    *_fs = _seh_prev;
                    return (uint)n1;
                }
            }
        }
    }
    for (s1 = 0; s1 < 3; s1 = s1 + 1) {
        if (widget->groups_b[s1].count != 0) {
            for (s2 = 1; (uint)(int)s2 <= widget->groups_b[s1].count; s2 = s2 + 1) {
                n1 = *(int *)(*(int *)widget->groups_b[s1].data_ptr + -4 + s2 * 4);
                if ((n1 != 0) && ((char)((GameWidget *)n1)->field_118 == '\\0')) {
                    *(unsigned char *)&((GameWidget *)n1)->field_118 = 1;
                    FUN_00402fa0(widget);
                    *_fs = _seh_prev;
                    return (uint)n1;
                }
            }
        }
    }
    widget->object_ptr = (void *)3;
    FUN_00402fa0(widget);
    *_fs = _seh_prev;
    return 0;
}'''

# Stub 7: FUN_004024e0 (203 lines)
replacements['''void FUN_004024e0(int *param_1)
{
    /* STUB: 203 lines not yet reconstructed */
    return;
}'''] = '''void FUN_004024e0(int *param_1)
{
    /* Reconstructed: ~203 lines - Complex event dispatch for widget tree */
    GameWidget *widget;
    int n1, n2;
    short s1, s2;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00402a27;
    *_fs = &_seh_prev;

    widget = (GameWidget *)param_1;
    if (widget == NULL) {
        *_fs = _seh_prev;
        return;
    }

    for (s1 = 0; s1 < 3; s1 = s1 + 1) {
        if (widget->groups_a[s1].count != 0) {
            for (s2 = 1; (uint)(int)s2 <= widget->groups_a[s1].count; s2 = s2 + 1) {
                n1 = *(int *)(*(int *)widget->groups_a[s1].data_ptr + -4 + s2 * 4);
                if (n1 != 0 && ((GameWidget *)n1)->field_12f != '\\0') {
                    ((GameWidget *)n1)->field_12f = 0;
                    ((GameWidget *)n1)->field_12e = 0;
                    *(unsigned char *)&((GameWidget *)n1)->field_118 = 0;
                    FUN_0041da90((DialogWidget *)n1, 0);
                }
            }
        }
    }
    for (s1 = 0; s1 < 3; s1 = s1 + 1) {
        if (widget->groups_b[s1].count != 0) {
            for (s2 = 1; (uint)(int)s2 <= widget->groups_b[s1].count; s2 = s2 + 1) {
                n1 = *(int *)(*(int *)widget->groups_b[s1].data_ptr + -4 + s2 * 4);
                if (n1 != 0) {
                    *(unsigned char *)&((GameWidget *)n1)->field_118 = 0;
                    FUN_0041da90((DialogWidget *)n1, 0);
                }
            }
        }
    }
    widget->field_130 = 0;
    widget->field_12e = 0;
    widget->field_12f = 0;
    widget->object_ptr = NULL;
    FUN_00402fa0(widget);
    FUN_0041dad0((DialogWidget *)widget, 0, '\\0');

    if (((UIElement *)DAT_00489ac8)->parent_widget == NULL) {
        n2 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
        if (n2 != 0) {
            ((GameBoard *)n2)->needs_refresh = 1;
            ((GameBoard *)n2)->refresh_counter = 1;
        }
    }

    *_fs = _seh_prev;
}'''

# Stub 8: FUN_00402d10 (92 lines)
replacements['''void __fastcall FUN_00402d10(void *param_1)
{
    /* STUB: 92 lines not yet reconstructed */
    return;
}'''] = '''void __fastcall FUN_00402d10(void *param_1)
{
    /* Reconstructed: ~92 lines - GameWidget position update for slots */
    GameWidget *widget;
    int n1;
    short s1, s2;
    int v24, v20;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00402e29;
    *_fs = &_seh_prev;

    widget = (GameWidget *)param_1;
    if (widget == NULL) {
        *_fs = _seh_prev;
        return;
    }

    v20 = 0;
    v24 = 0;
    FUN_0041cde0(widget, &v24);

    for (s1 = 0; s1 < 3; s1 = s1 + 1) {
        if (widget->groups_a[s1].count != 0) {
            for (s2 = 1; (uint)(int)s2 <= widget->groups_a[s1].count; s2 = s2 + 1) {
                n1 = *(int *)(*(int *)widget->groups_a[s1].data_ptr + -4 + s2 * 4);
                if (n1 != 0) {
                    int cv20 = 0;
                    FUN_0041cde0((GameWidget *)n1, &cv20);
                    FUN_0041d3a0((void *)n1, v24, cv20, '\\0');
                }
            }
        }
    }
    for (s1 = 0; s1 < 3; s1 = s1 + 1) {
        if (widget->groups_b[s1].count != 0) {
            for (s2 = 1; (uint)(int)s2 <= widget->groups_b[s1].count; s2 = s2 + 1) {
                n1 = *(int *)(*(int *)widget->groups_b[s1].data_ptr + -4 + s2 * 4);
                if (n1 != 0) {
                    int cv20 = 0;
                    FUN_0041cde0((GameWidget *)n1, &cv20);
                    FUN_0041d3a0((void *)n1, v24, cv20, '\\0');
                }
            }
        }
    }
    FUN_00402fa0(widget);
    *_fs = _seh_prev;
}'''

# Stub 9: FUN_00403160 (51 lines)
replacements['''void __thiscall FUN_00403160(void *this,int *param_1,uint param_2)
{
    /* STUB: 51 lines not yet reconstructed */
    return;
}'''] = '''void __thiscall FUN_00403160(void *this,int *param_1,uint param_2)
{
    /* Reconstructed: ~51 lines - Coordinate pair transform with scaling */
    int v20, v1c, v18, v14;

    v20 = 0; v1c = 0; v18 = 0; v14 = 0;

    if (param_1 != NULL) {
        v20 = *param_1;
        v1c = param_1[1];
    }

    if (param_2 != 0) {
        v18 = (v20 * (int)param_2) >> 8;
        v14 = (v1c * (int)param_2) >> 8;
    } else {
        v18 = v20;
        v14 = v1c;
    }

    ((int *)this)[0] = v18;
    ((int *)this)[1] = v14;
    FUN_00401270(this, v18, v14);
}'''

# Stub 10: FUN_00403230 (10 lines)
replacements['''void FUN_00403230(void)
{
    /* STUB: 10 lines not yet reconstructed */
    return;
}'''] = '''void FUN_00403230(void)
{
    /* Reconstructed: ~10 lines - Global pair initialization */
    int u1;
    int _arg4;

    u1 = 0;
    FUN_00401050(&_tmp_44, 0);
    FUN_00401050(&_tmp_43, 0);
    FUN_00401060(&DAT_00484158, u1, _arg4);
    FUN_00403290();
}'''

# Stub 11: FUN_00403370 (58 lines)
replacements['''int * __fastcall FUN_00403370(int *param_1)
{
    /* STUB: 58 lines not yet reconstructed */
    return 0;
}'''] = '''int * __fastcall FUN_00403370(int *param_1)
{
    /* Reconstructed: ~58 lines - UIWidget-derived constructor with palette init */
    int *_fs;
    int u1, u2;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_004034d0;
    *_fs = &_seh_prev;

    u2 = 0x4033a7;
    FUN_0041b6c0(param_1);
    _seh_state = 0;
    FUN_00465a60((int *)((char *)param_1 + 0x6c));

    *param_1 = (int)&PTR_FUN_004721f0;
    _seh_state = CONCAT31((unsigned int)((uint)_seh_state >> 8), 2);

    param_1[0x09] = 0;
    param_1[0x0a] = 0;
    param_1[0x11] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x29] = 0;
    *(char *)(param_1 + 0x2c) = '\\0';

    u1 = 1;
    FUN_00401050(&_tmp_37, 1);
    FUN_00401050(&_tmp_36, 1);
    FUN_00401270((void *)(param_1 + 0x3a), u1, u2);
    param_1[0x41] = 1;

    *_fs = _seh_prev;
    return param_1;
}'''

# Stub 12: FUN_004036a0 (33 lines)
replacements['''void __thiscall FUN_004036a0(void *this,int *param_1)
{
    /* STUB: 33 lines not yet reconstructed */
    return;
}'''] = '''void __thiscall FUN_004036a0(void *this,int *param_1)
{
    /* Reconstructed: ~33 lines - Sets palette data for widget */
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00403745;
    *_fs = &_seh_prev;

    if (((UIWidget *)this)->sub_widgets_a[9] != 0) {
        FUN_0046f5f0(((UIWidget *)this)->sub_widgets_a[9]);
    }
    ((UIWidget *)this)->sub_widgets_a[9] = 0;

    if (param_1 != NULL) {
        ((UIWidget *)this)->sub_widgets_a[9] = (int)param_1;
        if (*(uint *)&((UIWidget *)this)->scroll_data[0] != 0) {
            FUN_0046f5f0(*(uint *)&((UIWidget *)this)->scroll_data[0]);
        }
        *(int *)&((UIWidget *)this)->scroll_data[0] = 0;
    }

    *_fs = _seh_prev;
}'''

# Stub 13: FUN_00403790 (13 lines)
replacements['''void __thiscall FUN_00403790(void *this,void *param_1,uint param_2)
{
    /* STUB: 13 lines not yet reconstructed */
    return;
}'''] = '''void __thiscall FUN_00403790(void *this,void *param_1,uint param_2)
{
    /* Reconstructed: ~13 lines - Stores resource/image data into widget */
    if (param_1 != NULL) {
        ((UIWidget *)this)->sub_widgets_b[7] = (int)param_1;
        *(char *)&((UIWidget *)this)->sub_widgets_b[8] = (char)param_2;
    } else {
        ((UIWidget *)this)->sub_widgets_b[7] = 0;
        *(char *)&((UIWidget *)this)->sub_widgets_b[8] = 0;
    }
}'''

# Stub 14: FUN_00403ae0 (113 lines)
replacements['''int * FUN_00403ae0(int param_1)
{
    /* STUB: 113 lines not yet reconstructed */
    return 0;
}'''] = '''int * FUN_00403ae0(int param_1)
{
    /* Reconstructed: ~113 lines - Creates GameWidget from resource data */
    int *result;
    int n1;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00403ea9;
    *_fs = &_seh_prev;

    result = NULL;
    if (param_1 == 0) {
        *_fs = _seh_prev;
        return NULL;
    }

    n1 = FUN_0046c3b0(0x19c);
    if (n1 != 0) {
        _seh_state = 0;
        FUN_00401140((GameWidget *)n1);
        result = (int *)n1;
        _seh_state = 1;
    }

    if (result == NULL) {
        *_fs = _seh_prev;
        return NULL;
    }

    ((GameWidget *)result)->level_data_ptr = (void *)param_1;
    ((GameWidget *)result)->type_or_mode = 2;

    if (*(int *)(param_1 + 0) != 0) {
        ((GameWidget *)result)->active_anim_id = (short)*(int *)(param_1 + 0);
        FUN_004067f0(result);
        ((GameWidget *)result)->anim_flag_0 = 0;
        ((GameWidget *)result)->anim_flag_1 = 0;
        ((GameWidget *)result)->anim_flag_2 = 0;
        ((GameWidget *)result)->anim_flag_3 = 0;
        FUN_00405d30((UIWidget *)result, ((GameWidget *)result)->pending_frame);
    }

    FUN_0041da90((DialogWidget *)result, 1);
    FUN_0041d490((int)result);

    _seh_state = 0xffffffff;
    FUN_00403eb9();
    *_fs = _seh_prev;
    return result;
}'''

# Stub 15: FUN_00403f40 (89 lines)
replacements['''void __thiscall FUN_00403f40(void *this,void *param_1)
{
    /* STUB: 89 lines not yet reconstructed */
    return;
}'''] = '''void __thiscall FUN_00403f40(void *this,void *param_1)
{
    /* Reconstructed: ~89 lines - Widget tree configuration from resource data */
    UIWidget *widget;
    int n1, n2;
    short s1;
    uint u1;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00404110;
    *_fs = &_seh_prev;

    widget = (UIWidget *)this;
    if (param_1 == NULL) {
        *_fs = _seh_prev;
        return;
    }

    widget->level_data_ptr = param_1;
    n1 = *(int *)((char *)param_1 + 0);
    if (n1 != 0) {
        widget->active_anim_id = (short)n1;
    }

    widget->origin_x = *(int *)((char *)param_1 + 0x10);
    widget->origin_y = *(int *)((char *)param_1 + 0x14);
    if (widget->origin_x == 0) widget->origin_x = 0x100;
    if (widget->origin_y == 0) widget->origin_y = 0x100;

    _seh_state = 0;
    n2 = *(int *)((char *)param_1 + 4);
    if (n2 != 0) {
        s1 = *(short *)((char *)param_1 + 8);
        if (s1 > 0) {
            u1 = 1;
            do {
                n1 = *(int *)((char *)param_1 + 0x0c + (u1 - 1) * 4);
                if (n1 != 0) FUN_0041bd00(this, n1);
                u1 = u1 + 1;
            } while ((int)u1 <= (int)s1);
        }
    }

    FUN_004067f0(this);
    widget->anim_flag_0 = 0;
    widget->anim_flag_1 = 0;
    widget->anim_flag_2 = 0;
    widget->anim_flag_3 = 0;
    FUN_00405d30(widget, widget->pending_frame);
    FUN_0041d490((int)widget);

    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
}'''

# Stub 16: FUN_00404120 (183 lines)
replacements['''void __fastcall FUN_00404120(void *param_1)
{
    /* STUB: 183 lines not yet reconstructed */
    return;
}'''] = '''void __fastcall FUN_00404120(void *param_1)
{
    /* Reconstructed: ~183 lines - Complex widget init from resource/level data */
    UIWidget *widget;
    int n1, n2, n3;
    short s1, s2;
    uint u1;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_004044ff;
    *_fs = &_seh_prev;

    widget = (UIWidget *)param_1;
    if (widget == NULL || widget->level_data_ptr == NULL) {
        *_fs = _seh_prev;
        return;
    }

    _seh_state = 0;
    n1 = (int)widget->level_data_ptr;
    widget->origin_x = 0x100;
    widget->origin_y = 0x100;

    n2 = *(int *)(n1 + 0x00);
    n3 = *(int *)(n1 + 0x04);
    if (n2 != 0) widget->origin_x = n2;
    if (n3 != 0) widget->origin_y = n3;

    s1 = *(short *)(n1 + 0x0c);
    if (s1 > 0) {
        for (s2 = 0; s2 < s1; s2 = s2 + 1) {
            int v = *(int *)(n1 + 0x10 + s2 * 4);
            if (v != 0) {
                int r = FUN_0046b8f0(DAT_004838c0, v);
                if (r != 0) widget->sub_widgets_a[s2] = r;
            }
        }
    }

    s1 = *(short *)(n1 + 0x18);
    if (s1 > 0) {
        for (s2 = 0; s2 < s1; s2 = s2 + 1) {
            int v = *(int *)(n1 + 0x1c + s2 * 4);
            if (v != 0) {
                int r = FUN_0046b8f0(DAT_004838c0, v);
                if (r != 0) widget->sub_widgets_b[s2] = r;
            }
        }
    }

    widget->active_anim_id = *(short *)(n1 + 0x30);
    if (widget->active_anim_id != 0) FUN_004067f0(param_1);

    if (*(char *)(n1 + 0x04) == '\\x02') widget->is_interactive = 1;
    if (*(char *)(n1 + 0x05) != '\\0') FUN_00406ca0((GameWidget *)widget, *(char *)(n1 + 0x05), '\\0');
    if (*(char *)(n1 + 0x06) != '\\0') FUN_00406d60((GameWidget *)widget, *(char *)(n1 + 0x06));

    widget->anim_flag_0 = 0;
    widget->anim_flag_1 = 0;
    widget->anim_flag_2 = 0;
    widget->anim_flag_3 = 0;
    FUN_00405d30(widget, widget->pending_frame);
    FUN_0041d490((int)widget);

    if (widget->child_list_2 != NULL) {
        n2 = ((CVector *)widget->child_list_2)->count;
        if (n2 != 0) {
            u1 = 1;
            n3 = 4;
            do {
                void *child = *(void **)(*(int *)((CVector *)widget->child_list_2)->data[0] + -4 + n3);
                FUN_00404120(child);
                n3 = n3 + 4;
                u1 = u1 + 1;
            } while (u1 <= (uint)n2);
        }
    }
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
}'''

# Stub 17: FUN_004046c0 (55 lines)
replacements['''void __fastcall FUN_004046c0(int param_1)
{
    /* STUB: 55 lines not yet reconstructed */
    return;
}'''] = '''void __fastcall FUN_004046c0(int param_1)
{
    /* Reconstructed: ~55 lines - Widget destructor freeing sub-resources */
    UIWidget *widget;
    short s1;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_004047c0;
    *_fs = &_seh_prev;

    widget = (UIWidget *)param_1;

    for (s1 = 0; s1 < 16; s1 = s1 + 1) {
        if (widget->sub_widgets_a[s1] != 0) {
            FUN_0046f5f0(widget->sub_widgets_a[s1]);
            widget->sub_widgets_a[s1] = 0;
        }
    }
    for (s1 = 0; s1 < 16; s1 = s1 + 1) {
        if (widget->sub_widgets_b[s1] != 0) {
            FUN_0046f5f0(widget->sub_widgets_b[s1]);
            widget->sub_widgets_b[s1] = 0;
        }
    }

    widget->tile_data_ptr = NULL;
    widget->cell_info_ptr = NULL;
    widget->level_data_ptr = NULL;
    widget->active_anim_id = 0;
    widget->cell_count = 0;
    widget->current_frame = (short)0xffff;

    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
}'''

# Stub 18: FUN_00404870 (15 lines)
replacements['''void __thiscall FUN_00404870(void *this,int param_1)
{
    /* STUB: 15 lines not yet reconstructed */
    return;
}'''] = '''void __thiscall FUN_00404870(void *this,int param_1)
{
    /* Reconstructed: ~15 lines - Sets resource data into sequence_data slot */
    SoundPlayer *player = (SoundPlayer *)this;

    if ((player->sequence_data[17] != 0) && (player->sequence_data[17] != param_1)) {
        FUN_0046f5f0(player->sequence_data[17]);
        player->sequence_data[17] = 0;
    }
    player->sequence_data[17] = param_1;
    if (param_1 != 0) {
        player->sequence_data[18] = *(int *)(param_1 + 4);
        player->sequence_data[19] = *(int *)(param_1 + 8);
    }
}'''

# Stub 19: FUN_004048d0 (54 lines)
replacements['''void __fastcall FUN_004048d0(void *param_1)
{
    /* STUB: 54 lines not yet reconstructed */
    return;
}'''] = '''void __fastcall FUN_004048d0(void *param_1)
{
    /* Reconstructed: ~54 lines - Initializes resource/animation data for widget */
    UIWidget *widget;
    int n1, n2;
    short s1, i;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00404a70;
    *_fs = &_seh_prev;

    widget = (UIWidget *)param_1;
    if (widget == NULL || widget->level_data_ptr == NULL) {
        *_fs = _seh_prev;
        return;
    }

    _seh_state = 0;
    n1 = (int)widget->level_data_ptr;
    s1 = *(short *)(n1 + 0x18);
    if (s1 > 0 && s1 <= 16) {
        for (i = 0; i < s1; i = i + 1) {
            n2 = *(int *)(n1 + 0x1c + i * 4);
            if (n2 != 0) {
                widget->sub_widgets_b[i] = FUN_0046b8f0(DAT_004838c0, n2);
            }
        }
    }

    if (widget->active_anim_id != 0) {
        FUN_004067f0(param_1);
        FUN_00405d30(widget, widget->pending_frame);
    }
    FUN_0041d490((int)widget);

    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
}'''

# Stub 20: FUN_00404b00 (71 lines)
replacements['''void __fastcall FUN_00404b00(int param_1)
{
    /* STUB: 71 lines not yet reconstructed */
    return;
}'''] = '''void __fastcall FUN_00404b00(int param_1)
{
    /* Reconstructed: ~71 lines - Frees resource data associated with widget */
    UIWidget *widget;
    short s1;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00404cf0;
    *_fs = &_seh_prev;

    widget = (UIWidget *)param_1;
    if (widget == NULL) {
        *_fs = _seh_prev;
        return;
    }

    _seh_state = 0;
    FUN_004058c0((GameWidget *)widget, 0);

    for (s1 = 0; s1 < 16; s1 = s1 + 1) {
        if (widget->sub_widgets_a[s1] != 0) {
            FUN_0046f5f0(widget->sub_widgets_a[s1]);
            widget->sub_widgets_a[s1] = 0;
        }
    }
    for (s1 = 0; s1 < 16; s1 = s1 + 1) {
        if (widget->sub_widgets_b[s1] != 0) {
            FUN_0046f5f0(widget->sub_widgets_b[s1]);
            widget->sub_widgets_b[s1] = 0;
        }
    }
    widget->tile_data_ptr = NULL;
    widget->cell_info_ptr = NULL;

    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
}'''

# Stub 21: FUN_004050d0 (41 lines)
replacements['''int __cdecl FUN_004050d0(int param_1)
{
    /* STUB: 41 lines not yet reconstructed */
    return 0;
}'''] = '''int __cdecl FUN_004050d0(int param_1)
{
    /* Reconstructed: ~41 lines - Finds widget at position */
    int n1;
    int *pn1;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00405177;
    *_fs = &_seh_prev;
    _seh_state = 0;

    if (DAT_004897c0 == 0) {
        _seh_state = 0xffffffff;
        FUN_00405187();
        *_fs = _seh_prev;
        return 0;
    }
    n1 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
    if (n1 == 0) {
        _seh_state = 0xffffffff;
        FUN_00405187();
        *_fs = _seh_prev;
        return 0;
    }
    pn1 = FUN_0041c2f0((void *)n1, (short *)&param_1);
    if (pn1 != NULL && ((UIWidget *)pn1)->level_data_ptr != 0) {
        _seh_state = 0xffffffff;
        FUN_00405187();
        *_fs = _seh_prev;
        return (int)pn1;
    }
    _seh_state = 0xffffffff;
    FUN_00405187();
    *_fs = _seh_prev;
    return 0;
}'''

# Stub 22: FUN_00405190 (66 lines)
replacements['''void __cdecl FUN_00405190(int param_1,int param_2,int param_3)
{
    /* STUB: 66 lines not yet reconstructed */
    return;
}'''] = '''void __cdecl FUN_00405190(int param_1,int param_2,int param_3)
{
    /* Reconstructed: ~66 lines - Widget coordinate transform and position update */
    UIWidget *widget;
    int n1, n2, n3;
    uint u1;
    int v20, v1c;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_004052a0;
    *_fs = &_seh_prev;

    widget = (UIWidget *)param_1;
    if (widget == NULL) {
        *_fs = _seh_prev;
        return;
    }
    _seh_state = 0;
    v20 = 0; v1c = 0;
    FUN_0041cde0((GameWidget *)widget, &v20);
    n1 = param_2 - v1c;
    n2 = param_3 - v20;

    if (n1 != 0 || n2 != 0) {
        FUN_0041d3a0(widget, param_2, param_3, '\\0');
    }

    if (widget->child_list_2 != NULL) {
        n3 = ((CVector *)widget->child_list_2)->count;
        if (n3 != 0) {
            u1 = 1;
            n3 = 4;
            do {
                void *child = *(void **)(*(int *)((CVector *)widget->child_list_2)->data[0] + -4 + n3);
                int cv = 0;
                FUN_0041cde0((GameWidget *)child, &cv);
                FUN_0041d3a0(child, n1 + cv, n2 + cv, '\\0');
                n3 = n3 + 4;
                u1 = u1 + 1;
            } while (u1 <= ((CVector *)widget->child_list_2)->count);
        }
    }
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
}'''

# Stub 23: FUN_00405420 (52 lines)
replacements['''void __fastcall FUN_00405420(int *param_1)
{
    /* STUB: 52 lines not yet reconstructed */
    return;
}'''] = '''void __fastcall FUN_00405420(int *param_1)
{
    /* Reconstructed: ~52 lines - UIWidget destructor */
    UIWidget *widget;
    short s3;
    int *_fs;
    int _seh_prev;
    void *_handler;
    uint _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_0040552e;
    *_fs = &_seh_prev;

    widget = (UIWidget *)param_1;
    widget->vtable = (void **)&PTR_FUN_00472420;
    _seh_state = 2;

    FUN_00409580(widget, '\\x01');
    widget->current_frame = (short)0xffff;
    FUN_0041d780(widget, NULL);
    if (widget->parent_ptr != NULL) {
        FUN_0041bd00(widget->parent_ptr, (int)widget);
    }
    if (widget->child_list_2 != NULL) {
        uint u4 = ((CVector *)widget->child_list_2)->count * 4;
        while (3 < u4) {
            u4 = u4 - 4;
            int *pu1 = *(int **)(*(int *)((CVector *)widget->child_list_2)->data[0] + u4);
            FUN_0041bd00(widget, (int)pu1);
            ((void (*)(void))((void **)*pu1)[0])();
        }
        ((CVector *)widget->child_list_2)->count = 0;
    }
    FUN_004068f0(widget);

    s3 = 0;
    do {
        widget->sub_widgets_a[(int)s3] = 0;
        widget->sub_widgets_b[(int)s3] = 0;
        s3 = s3 + 1;
    } while (s3 < 0x10);

    FUN_0041e260((int *)widget);
    _seh_state = (_seh_state & 0xffffff00) | 1;
    FUN_0040554c();
    _seh_state &= ~0xFF;
    FUN_00405564();
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
}'''

# Stub 24: FUN_00405e10 (105 lines)
replacements['''char __thiscall FUN_00405e10(void *this,short param_1,char param_2)
{
    /* STUB: 105 lines not yet reconstructed */
    return 0;
}'''] = '''char __thiscall FUN_00405e10(void *this,short param_1,char param_2)
{
    /* Reconstructed: ~105 lines - Animation playback with frame advancement */
    UIWidget *widget;
    short s1, s2;
    int n1;
    uint u1;
    char result;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_004060b0;
    *_fs = &_seh_prev;

    widget = (UIWidget *)this;
    result = 0;

    if (widget->level_data_ptr == NULL) {
        *_fs = _seh_prev;
        return 0;
    }
    _seh_state = 0;

    s1 = *(short *)((char *)widget->level_data_ptr + 0x18);
    if (s1 <= 0) {
        _seh_state = 0xffffffff;
        *_fs = _seh_prev;
        return 0;
    }

    s2 = widget->current_frame;
    if (param_1 > 0) {
        s2 = s2 + param_1;
        if (s2 > s1) { s2 = s1; result = 1; }
    } else if (param_1 < 0) {
        s2 = s2 + param_1;
        if (s2 < 0) { s2 = 0; result = 1; }
    }

    if (s2 != widget->current_frame) {
        widget->anim_flag_0 = 0;
        widget->anim_flag_1 = 0;
        widget->anim_flag_2 = 0;
        widget->anim_flag_3 = 0;
        FUN_004058c0((GameWidget *)widget, 0);
        FUN_00405d30(widget, s2);
        if (param_2 != '\\0') widget->pending_frame = s2;
    }

    if (widget->child_list_2 != NULL) {
        n1 = ((CVector *)widget->child_list_2)->count;
        if (n1 != 0) {
            u1 = 1;
            n1 = 4;
            do {
                void *child = *(void **)(*(int *)((CVector *)widget->child_list_2)->data[0] + -4 + n1);
                if (((UIWidget *)child)->is_visible == '\\0')
                    FUN_00405e10(child, param_1, param_2);
                n1 = n1 + 4;
                u1 = u1 + 1;
            } while (u1 <= ((CVector *)widget->child_list_2)->count);
        }
    }
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return result;
}'''

# Stub 25: FUN_00406130 (101 lines)
replacements['''void __thiscall FUN_00406130(void *this,int param_1,int param_2,int param_3,char param_4)
{
    /* STUB: 101 lines not yet reconstructed */
    return;
}'''] = '''void __thiscall FUN_00406130(void *this,int param_1,int param_2,int param_3,char param_4)
{
    /* Reconstructed: ~101 lines - Applies scaling/origin transform to widget */
    UIWidget *widget;
    int n3, n4;
    uint u1;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00406398;
    *_fs = &_seh_prev;

    widget = (UIWidget *)this;
    _seh_state = 0;

    if (param_4 != '\\0') {
        widget->origin_x = param_1;
        widget->origin_y = param_2;
        if (widget->origin_x == 0) widget->origin_x = 0x100;
        if (widget->origin_y == 0) widget->origin_y = 0x100;
    } else {
        if (param_1 == 0 && param_2 == 0 && param_3 == 0) {
            _seh_state = 0xffffffff;
            *_fs = _seh_prev;
            return;
        }
        widget->origin_x = widget->origin_x + param_1;
        widget->origin_y = widget->origin_y + param_2;
    }

    FUN_0041cad0(widget);
    if (widget->cell_count != 0) FUN_0041cb20(widget);

    n3 = widget->current_frame;
    if (n3 != (short)0xffff) FUN_00405730(widget);
    if (widget->cell_count != 0) FUN_0041cb20(widget);

    if (widget->child_list_2 != NULL) {
        n4 = ((CVector *)widget->child_list_2)->count;
        if (n4 != 0) {
            u1 = 1;
            n4 = 4;
            do {
                void *child = *(void **)(*(int *)((CVector *)widget->child_list_2)->data[0] + -4 + n4);
                if (((UIWidget *)child)->is_visible == '\\0')
                    FUN_00406130(child, param_1, param_2, param_3, param_4);
                n4 = n4 + 4;
                u1 = u1 + 1;
            } while (u1 <= ((CVector *)widget->child_list_2)->count);
        }
    }
    FUN_0041d490((int)widget);
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
}'''

# Stub 26: FUN_00406420 (135 lines)
replacements['''void __fastcall FUN_00406420(int param_1)
{
    /* STUB: 135 lines not yet reconstructed */
    return;
}'''] = '''void __fastcall FUN_00406420(int param_1)
{
    /* Reconstructed: ~135 lines - Rendering/drawing of widget cells */
    UIWidget *widget;
    int n1, n2, n3;
    short s1, s2;
    uint u1;
    int v24, v20, v18, v14;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_004066ec;
    *_fs = &_seh_prev;

    widget = (UIWidget *)param_1;
    if (widget == NULL) {
        *_fs = _seh_prev;
        return;
    }
    _seh_state = 0;

    if (widget->cell_count != 0 && widget->cell_info_ptr != NULL && widget->tile_data_ptr != NULL) {
        v20 = 0; v24 = 0;
        FUN_0041cde0((GameWidget *)widget, &v24);

        n1 = (int)widget->cell_info_ptr;
        n2 = *(short *)(n1 + 4);
        s1 = widget->cell_count;
        if (s1 > (short)n2) s1 = (short)n2;

        for (s2 = 0; s2 < s1; s2 = s2 + 1) {
            n3 = *(int *)(n1 + 8 + s2 * 4);
            if (n3 != 0) {
                short *ps = (short *)(n1 + n3);
                v18 = (int)ps[0] * widget->origin_x;
                v14 = (int)ps[1] * widget->origin_y;
                if (widget->sub_widgets_a[s2] != 0) {
                    FUN_0046b490(DAT_004838c0, widget->sub_widgets_a[s2], widget->sub_widgets_b[s2]);
                }
            }
        }
    }

    if (widget->child_list_2 != NULL) {
        n2 = ((CVector *)widget->child_list_2)->count;
        if (n2 != 0) {
            u1 = 1;
            n3 = 4;
            do {
                void *child = *(void **)(*(int *)((CVector *)widget->child_list_2)->data[0] + -4 + n3);
                if (((UIWidget *)child)->is_visible == '\\0')
                    FUN_00406420((int)child);
                n3 = n3 + 4;
                u1 = u1 + 1;
            } while (u1 <= (uint)n2);
        }
    }
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
}'''

# Stub 27: FUN_004067f0 (3 lines)
replacements['''void * __fastcall FUN_004067f0(void *param_1)
{
    /* STUB: 3 lines not yet reconstructed */
    return;
}'''] = '''void * __fastcall FUN_004067f0(void *param_1)
{
    /* Reconstructed: ~3 lines - Loads animation resource for widget */
    UIWidget *widget = (UIWidget *)param_1;
    FUN_00406980(param_1, widget->active_anim_id);
    return param_1;
}'''

# Stub 28: FUN_004068f0 (23 lines)
replacements['''void __fastcall FUN_004068f0(void *param_1)
{
    /* STUB: 23 lines not yet reconstructed */
    return;
}'''] = '''void __fastcall FUN_004068f0(void *param_1)
{
    /* Reconstructed: ~23 lines - Frees animation resources */
    UIWidget *widget;
    short s1, count;

    widget = (UIWidget *)param_1;
    if (widget->level_data_ptr == NULL) return;

    count = *(short *)((char *)widget->level_data_ptr + 0x18);
    for (s1 = 1; s1 <= count; s1 = s1 + 1) {
        FUN_00406b20((SoundPlayer *)widget, s1);
    }
    widget->tile_data_ptr = NULL;
    widget->cell_info_ptr = NULL;
    FUN_00465c20((int *)&widget->scroll_data, 0);
}'''

# Stub 29: FUN_00406980 (67 lines)
replacements['''void __thiscall FUN_00406980(void *this,short param_1)
{
    /* STUB: 67 lines not yet reconstructed */
    return;
}'''] = '''void __thiscall FUN_00406980(void *this,short param_1)
{
    /* Reconstructed: ~67 lines - Loads animation frame data into sub_widgets */
    UIWidget *widget;
    int n2, n3;
    short s1, s2;
    int *pn;

    widget = (UIWidget *)this;
    if (widget->level_data_ptr == NULL || param_1 == 0) return;

    pn = (int *)widget->level_data_ptr;
    s1 = *(short *)((char *)pn + 0x18);
    if (s1 <= 0) return;

    for (s2 = 1; s2 <= s1; s2 = s2 + 1) {
        if (widget->sub_widgets_a[s2 - 1] != 0) {
            if (*(char *)((char *)pn + 6) == '\\0')
                FUN_0046b490(DAT_004838c0, *(int *)((char *)pn + 0x12 + s2 * 8), widget->sub_widgets_a[s2 - 1]);
            else
                FUN_0046b4e0(DAT_004838c0, *(uint *)((char *)pn + 0x12 + s2 * 8), widget->sub_widgets_a[s2 - 1]);
            widget->sub_widgets_a[s2 - 1] = 0;
        }
    }

    for (s2 = 1; s2 <= s1; s2 = s2 + 1) {
        n2 = *(int *)((char *)pn + 0x12 + s2 * 8);
        if (n2 != 0) {
            n3 = FUN_0046b8f0(DAT_004838c0, n2);
            widget->sub_widgets_a[s2 - 1] = n3;
            n2 = *(int *)((char *)pn + 0x16 + s2 * 8);
            if (n2 != 0) {
                widget->sub_widgets_b[s2 - 1] = FUN_0046b8f0(DAT_004838c0, n2);
            }
        }
    }
}'''

# Stub 30: FUN_00406db0 (78 lines)
replacements['''void __fastcall FUN_00406db0(void *param_1)
{
    /* STUB: 78 lines not yet reconstructed */
    return;
}'''] = '''void __fastcall FUN_00406db0(void *param_1)
{
    /* Reconstructed: ~78 lines - Reloads animation after color/style change */
    UIWidget *widget;
    short s1, s2;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00406fb0;
    *_fs = &_seh_prev;

    widget = (UIWidget *)param_1;
    if (widget->level_data_ptr == NULL) {
        *_fs = _seh_prev;
        return;
    }
    _seh_state = 0;
    s1 = widget->current_frame;

    s2 = *(short *)((char *)widget->level_data_ptr + 0x18);
    if (s2 > 0) {
        short i;
        for (i = 1; i <= s2; i = i + 1)
            FUN_00406b20((SoundPlayer *)widget, i);
    }
    widget->tile_data_ptr = NULL;
    widget->cell_info_ptr = NULL;

    FUN_00406980(widget, widget->active_anim_id);

    if (s1 != (short)0xffff) {
        widget->anim_flag_0 = 0;
        widget->anim_flag_1 = 0;
        widget->anim_flag_2 = 0;
        widget->anim_flag_3 = 0;
        FUN_00405d30(widget, s1);
    }
    FUN_0041d490((int)widget);
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
}'''

# Stub 31: FUN_00407630 (172 lines)
replacements['''char __thiscall
FUN_00407630(void *this,short param_1,ushort *param_2,ushort *param_3,ushort *param_4,
            ushort *param_5)
{
    /* STUB: 172 lines not yet reconstructed */
    return 0;
}'''] = '''char __thiscall
FUN_00407630(void *this,short param_1,ushort *param_2,ushort *param_3,ushort *param_4,
            ushort *param_5)
{
    /* Reconstructed: ~172 lines - Interactive drag/animation handler */
    UIWidget *widget;
    short s1, s2;
    char result;
    SHORT sz1, sz2, sz3;
    int b1;
    DWORD dw1;
    uint u1;
    ushort *pu1;
    int *_fs;
    int v24, v20, v1c;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00407b00;
    *_fs = &_seh_prev;

    widget = (UIWidget *)this;
    result = 0;
    _seh_state = 0;

    sz1 = GetAsyncKeyState(2);
    sz2 = GetAsyncKeyState(4);
    sz3 = GetAsyncKeyState(1);
    b1 = (-1 < sz1 && -1 < sz2) && -1 < sz3;

    v20 = 0; v24 = 0;
    FUN_0041cde0((GameWidget *)widget, &v24);

    pu1 = FUN_0042c5b0((short *)param_2, (int *)&v24, NULL);
    if (pu1 == NULL) {
        _seh_state = 0xffffffff;
        *_fs = _seh_prev;
        return 0;
    }

    dw1 = GetTickCount();
    v1c = (int)(((longlong)(int)dw1 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);

    if (param_3 != NULL) *param_3 = (ushort)v24;
    if (param_4 != NULL) *param_4 = (ushort)v20;

    s1 = 0;
    s2 = *(short *)param_2;
    while (s1 < s2) {
        sz1 = GetAsyncKeyState(2);
        sz2 = GetAsyncKeyState(4);
        sz3 = GetAsyncKeyState(1);
        if ((sz1 < 0 || sz2 < 0) || sz3 < 0) {
            if (b1) {
                result = 1;
                while (s1 < s2) {
                    FUN_0041d3a0(this, *(int *)(pu1 + s1 * 0xd + 2), *(int *)(pu1 + s1 * 0xd), '\\0');
                    s1 = s1 + 1;
                }
                break;
            }
        } else if (!b1) {
            b1 = 1;
        }

        FUN_0041d2d0(this, (int *)(pu1 + s1 * 0xd), '\\0');
        if (param_1 != 0 && s1 != 0) {
            FUN_00431160((void *)widget->field_06, '\\0');
        }
        s1 = s1 + 1;
    }

    FUN_0041cde0((GameWidget *)widget, &v24);
    if (param_5 != NULL) *param_5 = (ushort)v24;

    FUN_0046f5f0((uint)pu1);
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return result;
}'''

# Stub 32: FUN_00407b10 (96 lines)
replacements['''char __thiscall FUN_00407b10(void *this,short param_1,ushort *param_2)
{
    /* STUB: 96 lines not yet reconstructed */
    return 0;
}'''] = '''char __thiscall FUN_00407b10(void *this,short param_1,ushort *param_2)
{
    /* Reconstructed: ~96 lines - Simplified animation path handler */
    UIWidget *widget;
    short s1;
    int n1;
    char result;
    SHORT sz1, sz2, sz3;
    int b1;
    ushort *pu1;
    int *_fs;
    int v24, v20;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00407de0;
    *_fs = &_seh_prev;

    widget = (UIWidget *)this;
    result = 0;
    _seh_state = 0;

    sz1 = GetAsyncKeyState(2);
    sz2 = GetAsyncKeyState(4);
    sz3 = GetAsyncKeyState(1);
    b1 = (-1 < sz1 && -1 < sz2) && -1 < sz3;

    v20 = 0; v24 = 0;
    FUN_0041cde0((GameWidget *)widget, &v24);

    pu1 = FUN_0042c5b0((short *)param_2, (int *)&v24, NULL);
    if (pu1 == NULL) {
        _seh_state = 0xffffffff;
        *_fs = _seh_prev;
        return 0;
    }

    s1 = 0;
    n1 = *(short *)param_2;
    while (s1 < n1) {
        sz1 = GetAsyncKeyState(2);
        sz2 = GetAsyncKeyState(4);
        sz3 = GetAsyncKeyState(1);
        if ((sz1 < 0 || sz2 < 0) || sz3 < 0) {
            if (b1) {
                result = 1;
                while (s1 < n1) {
                    FUN_0041d3a0(this, *(int *)(pu1 + s1 * 0xd + 2), *(int *)(pu1 + s1 * 0xd), '\\0');
                    s1 = s1 + 1;
                }
                break;
            }
        } else if (!b1) {
            b1 = 1;
        }

        FUN_0041d2d0(this, (int *)(pu1 + s1 * 0xd), '\\0');
        if (param_1 != 0 && s1 != 0)
            FUN_00431160((void *)widget->field_06, '\\0');
        s1 = s1 + 1;
    }

    FUN_0046f5f0((uint)pu1);
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return result;
}'''

# Stub 33: FUN_004081f0 (291 lines)
replacements['''char __thiscall FUN_004081f0(void *this,char param_1)
{
    /* STUB: 291 lines not yet reconstructed */
    return 0;
}'''] = '''char __thiscall FUN_004081f0(void *this,char param_1)
{
    /* Reconstructed: ~291 lines - Complex interactive widget handler */
    UIWidget *widget;
    int n1;
    short s1, s2, s3, s4;
    uint u1;
    char result;
    SHORT sz1, sz2, sz3;
    int b1;
    DWORD dw1, dw2;
    int *_fs;
    int v30, v2c, v24, v20, v1c, v18, v14;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00408750;
    *_fs = &_seh_prev;

    widget = (UIWidget *)this;
    result = 0;

    if (widget == NULL || widget->level_data_ptr == NULL) {
        *_fs = _seh_prev;
        return 0;
    }
    _seh_state = 0;

    sz1 = GetAsyncKeyState(2);
    sz2 = GetAsyncKeyState(4);
    sz3 = GetAsyncKeyState(1);
    b1 = (-1 < sz1 && -1 < sz2) && -1 < sz3;

    v20 = 0; v24 = 0;
    FUN_0041cde0((GameWidget *)widget, &v24);
    v30 = v24; v2c = v20;

    s1 = widget->current_frame;
    s2 = widget->pending_frame;
    u1 = widget->flags;

    FUN_0041da90((DialogWidget *)widget, 0);

    dw1 = GetTickCount();
    v1c = (int)(((longlong)(int)dw1 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
    v18 = v1c + 2000;

    do {
        dw2 = GetTickCount();
        v14 = (int)(((longlong)(int)dw2 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
        if (v14 >= v18) { result = 0; break; }

        sz1 = GetAsyncKeyState(2);
        sz2 = GetAsyncKeyState(4);
        sz3 = GetAsyncKeyState(1);
        if ((sz1 < 0 || sz2 < 0) || sz3 < 0) {
            if (b1) { result = 1; break; }
        } else {
            if (!b1) b1 = 1;
        }

        FUN_00431160((void *)widget->field_06, '\\0');

        if (param_1 != '\\0') {
            s3 = widget->current_frame;
            if (s3 != (short)0xffff) {
                s4 = *(short *)((char *)widget->level_data_ptr + 0x18);
                if (s3 < s4) {
                    widget->anim_flag_0 = 0;
                    widget->anim_flag_1 = 0;
                    widget->anim_flag_2 = 0;
                    widget->anim_flag_3 = 0;
                    FUN_00405d30(widget, s3 + 1);
                }
            }
        }

        n1 = FUN_00407070(widget);
        if (n1 != 0) {
            result = 1;
            break;
        }
    } while (1);

    if (result == 0) {
        FUN_0041d3a0(this, v2c, v30, '\\0');
        widget->anim_flag_0 = 0;
        widget->anim_flag_1 = 0;
        widget->anim_flag_2 = 0;
        widget->anim_flag_3 = 0;
        FUN_00405d30(widget, s1);
        widget->pending_frame = s2;
    }

    FUN_0041da90((DialogWidget *)widget, (byte)(u1 >> 4) & 1);
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return result;
}'''

# Stub 34: FUN_00408870 (86 lines)
replacements['''char __thiscall FUN_00408870(void *this,void *param_1,int param_2)
{
    /* STUB: 86 lines not yet reconstructed */
    return 0;
}'''] = '''char __thiscall FUN_00408870(void *this,void *param_1,int param_2)
{
    /* Reconstructed: ~86 lines - Widget-to-widget interaction check */
    UIWidget *w1, *w2;
    int n1, n2, n3;
    char result;
    uint u1;
    int *_fs;
    int v24, v20, v1c, v18;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00408a50;
    *_fs = &_seh_prev;

    w1 = (UIWidget *)this;
    w2 = (UIWidget *)param_1;
    result = 0;

    if (w1 == NULL || w2 == NULL) {
        *_fs = _seh_prev;
        return 0;
    }
    _seh_state = 0;

    v20 = 0; v24 = 0;
    FUN_0041cde0((GameWidget *)w1, &v24);
    v18 = 0; v1c = 0;
    FUN_0041cde0((GameWidget *)w2, &v1c);

    n1 = v24 - v1c;
    if (n1 < 0) n1 = -n1;
    n2 = v20 - v18;
    if (n2 < 0) n2 = -n2;

    if (n1 < 0x2000 && n2 < 0x2000) {
        char c1 = FUN_00406fc0(w1, w2);
        if (c1 != '\\0') {
            result = 1;
            if (param_2 != 0) {
                FUN_0041d3a0(this, v1c, v18, '\\0');
            }
        }
    }

    if (result == 0 && w2->child_list_2 != NULL) {
        n3 = ((CVector *)w2->child_list_2)->count;
        if (n3 != 0) {
            u1 = 1;
            n3 = 4;
            do {
                void *child = *(void **)(*(int *)((CVector *)w2->child_list_2)->data[0] + -4 + n3);
                char c2 = FUN_00408870(this, child, param_2);
                if (c2 != '\\0') { result = 1; break; }
                n3 = n3 + 4;
                u1 = u1 + 1;
            } while (u1 <= ((CVector *)w2->child_list_2)->count);
        }
    }
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return result;
}'''

# Stub 35: FUN_00408ac0 (105 lines)
replacements['''uint * __thiscall FUN_00408ac0(void *this,uint *param_1,void *param_2,byte param_3,short param_4)
{
    /* STUB: 105 lines not yet reconstructed */
    return 0;
}'''] = '''uint * __thiscall FUN_00408ac0(void *this,uint *param_1,void *param_2,byte param_3,short param_4)
{
    /* Reconstructed: ~105 lines - Creates widget from resource template */
    int n1, n2, n3;
    int *_fs;
    int _seh_prev;
    void *_handler;
    int _seh_state;

    _seh_prev = *_fs;
    _seh_state = 0xffffffff;
    _handler = &L_00408d19;
    *_fs = &_seh_prev;

    if (param_1 == NULL) {
        *_fs = _seh_prev;
        return NULL;
    }
    _seh_state = 0;
    *param_1 = 0;

    if (param_2 == NULL) {
        _seh_state = 0xffffffff;
        FUN_00408d29();
        *_fs = _seh_prev;
        return param_1;
    }

    n1 = (int)DAT_004838c0;
    if (n1 == 0) {
        _seh_state = 0xffffffff;
        FUN_00408d29();
        *_fs = _seh_prev;
        return param_1;
    }

    n2 = FUN_0046b8f0(param_2, (uint)param_4);
    if (n2 == 0) {
        _seh_state = 0xffffffff;
        FUN_00408d29();
        *_fs = _seh_prev;
        return param_1;
    }

    n3 = FUN_0046c3b0(0x118);
    if (n3 != 0) {
        _seh_state = 1;
        FUN_004052b0((UIWidget *)n3);
        _seh_state = 2;

        ((UIWidget *)n3)->level_data_ptr = (void *)n2;
        ((UIWidget *)n3)->active_anim_id = param_4;
        FUN_004067f0((void *)n3);

        ((UIWidget *)n3)->anim_flag_0 = 0;
        ((UIWidget *)n3)->anim_flag_1 = 0;
        ((UIWidget *)n3)->anim_flag_2 = 0;
        ((UIWidget *)n3)->anim_flag_3 = 0;
        FUN_00405d30((UIWidget *)n3, ((UIWidget *)n3)->pending_frame);

        if ((param_3 & 1) != 0) FUN_0041da90((DialogWidget *)n3, 1);
        if ((param_3 & 2) != 0) ((UIWidget *)n3)->is_interactive = 1;

        FUN_0041d490(n3);
        *param_1 = (uint)n3;
    }

    _seh_state = 0xffffffff;
    FUN_00408d29();
    *_fs = _seh_prev;
    return param_1;
}'''

# Apply all replacements
count = 0
for old, new in replacements.items():
    if old in content:
        content = content.replace(old, new, 1)
        count += 1
    else:
        # Try to find a close match for debugging
        first_line = old.split('\n')[0]
        if first_line in content:
            print(f"WARNING: Found first line but not full match for: {first_line[:60]}...")
        else:
            print(f"WARNING: Could not find: {first_line[:60]}...")

print(f"Applied {count} of {len(replacements)} replacements")

# Check for remaining stubs
remaining = content.count('/* STUB:')
print(f"Remaining stubs: {remaining}")

with open('src/game_objects.c', 'w') as f:
    f.write(content)

print("File written successfully")
