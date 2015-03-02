/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//ugradfs/willyzhang/win/ELEC3500/TugOfWar/ELEC3500Group3/TugOfWar/scorer_tb.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {4, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {20, 0};



static void Always_43_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2448);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1564);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t24, t3, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_45_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2888);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2896);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5320);
    *((int *)t8) = t7;

LAB9:    t9 = (t0 + 5320);
    if (*((int *)t9) > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5324);
    *((int *)t8) = t7;

LAB13:    t9 = (t0 + 5324);
    if (*((int *)t9) > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB10:    xsi_set_current_line(62, ng0);
    t10 = (t0 + 2904);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    t2 = (t0 + 5320);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB9;

LAB14:    xsi_set_current_line(65, ng0);
    t10 = (t0 + 2912);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    t2 = (t0 + 5324);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB13;

LAB17:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5328);
    *((int *)t8) = t7;

LAB18:    t9 = (t0 + 5328);
    if (*((int *)t9) > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB19:    xsi_set_current_line(67, ng0);
    t10 = (t0 + 2920);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    t2 = (t0 + 5328);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB18;

LAB22:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5332);
    *((int *)t8) = t7;

LAB23:    t9 = (t0 + 5332);
    if (*((int *)t9) > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB24:    xsi_set_current_line(70, ng0);
    t10 = (t0 + 2928);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    t2 = (t0 + 5332);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB23;

LAB27:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2936);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5336);
    *((int *)t8) = t7;

LAB30:    t9 = (t0 + 5336);
    if (*((int *)t9) > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB31:    xsi_set_current_line(76, ng0);
    t10 = (t0 + 2944);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    t2 = (t0 + 5336);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB30;

LAB34:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5340);
    *((int *)t8) = t7;

LAB35:    t9 = (t0 + 5340);
    if (*((int *)t9) > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB36:    xsi_set_current_line(78, ng0);
    t10 = (t0 + 2952);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    t2 = (t0 + 5340);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB35;

LAB39:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5344);
    *((int *)t8) = t7;

LAB40:    t9 = (t0 + 5344);
    if (*((int *)t9) > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB41:    xsi_set_current_line(81, ng0);
    t10 = (t0 + 2960);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    t2 = (t0 + 5344);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB40;

LAB44:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2968);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5348);
    *((int *)t8) = t7;

LAB47:    t9 = (t0 + 5348);
    if (*((int *)t9) > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB48:    xsi_set_current_line(87, ng0);
    t10 = (t0 + 2976);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    t2 = (t0 + 5348);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB47;

LAB51:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5352);
    *((int *)t8) = t7;

LAB52:    t9 = (t0 + 5352);
    if (*((int *)t9) > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB53:    xsi_set_current_line(89, ng0);
    t10 = (t0 + 2984);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    t2 = (t0 + 5352);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB52;

LAB56:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5356);
    *((int *)t8) = t7;

LAB57:    t9 = (t0 + 5356);
    if (*((int *)t9) > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB58:    xsi_set_current_line(92, ng0);
    t10 = (t0 + 2992);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    t2 = (t0 + 5356);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB57;

LAB61:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB63:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5360);
    *((int *)t8) = t7;

LAB64:    t9 = (t0 + 5360);
    if (*((int *)t9) > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB65:    xsi_set_current_line(98, ng0);
    t10 = (t0 + 3008);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB67:    t2 = (t0 + 5360);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB64;

LAB68:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5364);
    *((int *)t8) = t7;

LAB69:    t9 = (t0 + 5364);
    if (*((int *)t9) > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB70:    xsi_set_current_line(100, ng0);
    t10 = (t0 + 3016);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB72:    t2 = (t0 + 5364);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB69;

LAB73:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5368);
    *((int *)t8) = t7;

LAB74:    t9 = (t0 + 5368);
    if (*((int *)t9) > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB75:    xsi_set_current_line(103, ng0);
    t10 = (t0 + 3024);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB77:    t2 = (t0 + 5368);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB74;

LAB78:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3032);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB79:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB80:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5372);
    *((int *)t8) = t7;

LAB81:    t9 = (t0 + 5372);
    if (*((int *)t9) > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB82:    xsi_set_current_line(109, ng0);
    t10 = (t0 + 3040);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB84:    t2 = (t0 + 5372);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB81;

LAB85:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5376);
    *((int *)t8) = t7;

LAB86:    t9 = (t0 + 5376);
    if (*((int *)t9) > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB87:    xsi_set_current_line(111, ng0);
    t10 = (t0 + 3048);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB89:    t2 = (t0 + 5376);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB86;

LAB90:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5380);
    *((int *)t8) = t7;

LAB91:    t9 = (t0 + 5380);
    if (*((int *)t9) > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB92:    xsi_set_current_line(114, ng0);
    t10 = (t0 + 3056);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB94:    t2 = (t0 + 5380);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB91;

LAB95:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3064);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB96:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB97:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5384);
    *((int *)t8) = t7;

LAB98:    t9 = (t0 + 5384);
    if (*((int *)t9) > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB99:    xsi_set_current_line(120, ng0);
    t10 = (t0 + 3072);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB101:    t2 = (t0 + 5384);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB98;

LAB102:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5388);
    *((int *)t8) = t7;

LAB103:    t9 = (t0 + 5388);
    if (*((int *)t9) > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB104:    xsi_set_current_line(122, ng0);
    t10 = (t0 + 3080);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB106:    t2 = (t0 + 5388);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB103;

LAB107:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5392);
    *((int *)t8) = t7;

LAB108:    t9 = (t0 + 5392);
    if (*((int *)t9) > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB109:    xsi_set_current_line(125, ng0);
    t10 = (t0 + 3088);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB111:    t2 = (t0 + 5392);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB108;

LAB112:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3096);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB113;
    goto LAB1;

LAB113:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB114:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5396);
    *((int *)t8) = t7;

LAB115:    t9 = (t0 + 5396);
    if (*((int *)t9) > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB116:    xsi_set_current_line(131, ng0);
    t10 = (t0 + 3104);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB118:    t2 = (t0 + 5396);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB115;

LAB119:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5400);
    *((int *)t8) = t7;

LAB120:    t9 = (t0 + 5400);
    if (*((int *)t9) > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB124;
    goto LAB1;

LAB121:    xsi_set_current_line(133, ng0);
    t10 = (t0 + 3112);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB123;
    goto LAB1;

LAB123:    t2 = (t0 + 5400);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB120;

LAB124:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5404);
    *((int *)t8) = t7;

LAB125:    t9 = (t0 + 5404);
    if (*((int *)t9) > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB129;
    goto LAB1;

LAB126:    xsi_set_current_line(136, ng0);
    t10 = (t0 + 3120);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB128;
    goto LAB1;

LAB128:    t2 = (t0 + 5404);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB125;

LAB129:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3128);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB130;
    goto LAB1;

LAB130:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB131:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5408);
    *((int *)t8) = t7;

LAB132:    t9 = (t0 + 5408);
    if (*((int *)t9) > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB136;
    goto LAB1;

LAB133:    xsi_set_current_line(142, ng0);
    t10 = (t0 + 3136);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB135;
    goto LAB1;

LAB135:    t2 = (t0 + 5408);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB132;

LAB136:    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5412);
    *((int *)t8) = t7;

LAB137:    t9 = (t0 + 5412);
    if (*((int *)t9) > 0)
        goto LAB138;

LAB139:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB138:    xsi_set_current_line(144, ng0);
    t10 = (t0 + 3144);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB140;
    goto LAB1;

LAB140:    t2 = (t0 + 5412);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB137;

LAB141:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5416);
    *((int *)t8) = t7;

LAB142:    t9 = (t0 + 5416);
    if (*((int *)t9) > 0)
        goto LAB143;

LAB144:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB146;
    goto LAB1;

LAB143:    xsi_set_current_line(147, ng0);
    t10 = (t0 + 3152);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB145;
    goto LAB1;

LAB145:    t2 = (t0 + 5416);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB142;

LAB146:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB147:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB148;
    goto LAB1;

LAB148:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5420);
    *((int *)t8) = t7;

LAB149:    t9 = (t0 + 5420);
    if (*((int *)t9) > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB153;
    goto LAB1;

LAB150:    xsi_set_current_line(153, ng0);
    t10 = (t0 + 3168);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB152;
    goto LAB1;

LAB152:    t2 = (t0 + 5420);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB149;

LAB153:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5424);
    *((int *)t8) = t7;

LAB154:    t9 = (t0 + 5424);
    if (*((int *)t9) > 0)
        goto LAB155;

LAB156:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB158;
    goto LAB1;

LAB155:    xsi_set_current_line(155, ng0);
    t10 = (t0 + 3176);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB157;
    goto LAB1;

LAB157:    t2 = (t0 + 5424);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB154;

LAB158:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5428);
    *((int *)t8) = t7;

LAB159:    t9 = (t0 + 5428);
    if (*((int *)t9) > 0)
        goto LAB160;

LAB161:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB163;
    goto LAB1;

LAB160:    xsi_set_current_line(158, ng0);
    t10 = (t0 + 3184);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB162;
    goto LAB1;

LAB162:    t2 = (t0 + 5428);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB159;

LAB163:    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3192);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB164;
    goto LAB1;

LAB164:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB165;
    goto LAB1;

LAB165:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5432);
    *((int *)t8) = t7;

LAB166:    t9 = (t0 + 5432);
    if (*((int *)t9) > 0)
        goto LAB167;

LAB168:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB170;
    goto LAB1;

LAB167:    xsi_set_current_line(165, ng0);
    t10 = (t0 + 3200);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB169;
    goto LAB1;

LAB169:    t2 = (t0 + 5432);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB166;

LAB170:    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5436);
    *((int *)t8) = t7;

LAB171:    t9 = (t0 + 5436);
    if (*((int *)t9) > 0)
        goto LAB172;

LAB173:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB175;
    goto LAB1;

LAB172:    xsi_set_current_line(167, ng0);
    t10 = (t0 + 3208);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB174;
    goto LAB1;

LAB174:    t2 = (t0 + 5436);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB171;

LAB175:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5440);
    *((int *)t8) = t7;

LAB176:    t9 = (t0 + 5440);
    if (*((int *)t9) > 0)
        goto LAB177;

LAB178:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB180;
    goto LAB1;

LAB177:    xsi_set_current_line(170, ng0);
    t10 = (t0 + 3216);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB179;
    goto LAB1;

LAB179:    t2 = (t0 + 5440);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB176;

LAB180:    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 3224);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB181;
    goto LAB1;

LAB181:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB182;
    goto LAB1;

LAB182:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5444);
    *((int *)t8) = t7;

LAB183:    t9 = (t0 + 5444);
    if (*((int *)t9) > 0)
        goto LAB184;

LAB185:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB187;
    goto LAB1;

LAB184:    xsi_set_current_line(176, ng0);
    t10 = (t0 + 3232);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB186;
    goto LAB1;

LAB186:    t2 = (t0 + 5444);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB183;

LAB187:    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5448);
    *((int *)t8) = t7;

LAB188:    t9 = (t0 + 5448);
    if (*((int *)t9) > 0)
        goto LAB189;

LAB190:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB192;
    goto LAB1;

LAB189:    xsi_set_current_line(178, ng0);
    t10 = (t0 + 3240);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB191;
    goto LAB1;

LAB191:    t2 = (t0 + 5448);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB188;

LAB192:    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5452);
    *((int *)t8) = t7;

LAB193:    t9 = (t0 + 5452);
    if (*((int *)t9) > 0)
        goto LAB194;

LAB195:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB197;
    goto LAB1;

LAB194:    xsi_set_current_line(181, ng0);
    t10 = (t0 + 3248);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB196;
    goto LAB1;

LAB196:    t2 = (t0 + 5452);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB193;

LAB197:    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB198;
    goto LAB1;

LAB198:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB199;
    goto LAB1;

LAB199:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5456);
    *((int *)t8) = t7;

LAB200:    t9 = (t0 + 5456);
    if (*((int *)t9) > 0)
        goto LAB201;

LAB202:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB204;
    goto LAB1;

LAB201:    xsi_set_current_line(187, ng0);
    t10 = (t0 + 3264);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB203;
    goto LAB1;

LAB203:    t2 = (t0 + 5456);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB200;

LAB204:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5460);
    *((int *)t8) = t7;

LAB205:    t9 = (t0 + 5460);
    if (*((int *)t9) > 0)
        goto LAB206;

LAB207:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB209;
    goto LAB1;

LAB206:    xsi_set_current_line(189, ng0);
    t10 = (t0 + 3272);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB208;
    goto LAB1;

LAB208:    t2 = (t0 + 5460);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB205;

LAB209:    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5464);
    *((int *)t8) = t7;

LAB210:    t9 = (t0 + 5464);
    if (*((int *)t9) > 0)
        goto LAB211;

LAB212:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB214;
    goto LAB1;

LAB211:    xsi_set_current_line(192, ng0);
    t10 = (t0 + 3280);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB213;
    goto LAB1;

LAB213:    t2 = (t0 + 5464);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB210;

LAB214:    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 3288);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB215;
    goto LAB1;

LAB215:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB216;
    goto LAB1;

LAB216:    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5468);
    *((int *)t8) = t7;

LAB217:    t9 = (t0 + 5468);
    if (*((int *)t9) > 0)
        goto LAB218;

LAB219:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB221;
    goto LAB1;

LAB218:    xsi_set_current_line(199, ng0);
    t10 = (t0 + 3296);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB220;
    goto LAB1;

LAB220:    t2 = (t0 + 5468);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB217;

LAB221:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5472);
    *((int *)t8) = t7;

LAB222:    t9 = (t0 + 5472);
    if (*((int *)t9) > 0)
        goto LAB223;

LAB224:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB226;
    goto LAB1;

LAB223:    xsi_set_current_line(201, ng0);
    t10 = (t0 + 3304);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB225;
    goto LAB1;

LAB225:    t2 = (t0 + 5472);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB222;

LAB226:    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5476);
    *((int *)t8) = t7;

LAB227:    t9 = (t0 + 5476);
    if (*((int *)t9) > 0)
        goto LAB228;

LAB229:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB231;
    goto LAB1;

LAB228:    xsi_set_current_line(204, ng0);
    t10 = (t0 + 3312);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB230;
    goto LAB1;

LAB230:    t2 = (t0 + 5476);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB227;

LAB231:    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB232;
    goto LAB1;

LAB232:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB233;
    goto LAB1;

LAB233:    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5480);
    *((int *)t8) = t7;

LAB234:    t9 = (t0 + 5480);
    if (*((int *)t9) > 0)
        goto LAB235;

LAB236:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB238;
    goto LAB1;

LAB235:    xsi_set_current_line(211, ng0);
    t10 = (t0 + 3328);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB237;
    goto LAB1;

LAB237:    t2 = (t0 + 5480);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB234;

LAB238:    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5484);
    *((int *)t8) = t7;

LAB239:    t9 = (t0 + 5484);
    if (*((int *)t9) > 0)
        goto LAB240;

LAB241:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB243;
    goto LAB1;

LAB240:    xsi_set_current_line(213, ng0);
    t10 = (t0 + 3336);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB242;
    goto LAB1;

LAB242:    t2 = (t0 + 5484);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB239;

LAB243:    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5488);
    *((int *)t8) = t7;

LAB244:    t9 = (t0 + 5488);
    if (*((int *)t9) > 0)
        goto LAB245;

LAB246:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB248;
    goto LAB1;

LAB245:    xsi_set_current_line(216, ng0);
    t10 = (t0 + 3344);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB247;
    goto LAB1;

LAB247:    t2 = (t0 + 5488);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB244;

LAB248:    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 3352);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB249;
    goto LAB1;

LAB249:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB250;
    goto LAB1;

LAB250:    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5492);
    *((int *)t8) = t7;

LAB251:    t9 = (t0 + 5492);
    if (*((int *)t9) > 0)
        goto LAB252;

LAB253:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB255;
    goto LAB1;

LAB252:    xsi_set_current_line(222, ng0);
    t10 = (t0 + 3360);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB254;
    goto LAB1;

LAB254:    t2 = (t0 + 5492);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB251;

LAB255:    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5496);
    *((int *)t8) = t7;

LAB256:    t9 = (t0 + 5496);
    if (*((int *)t9) > 0)
        goto LAB257;

LAB258:    xsi_set_current_line(224, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB260;
    goto LAB1;

LAB257:    xsi_set_current_line(224, ng0);
    t10 = (t0 + 3368);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB259;
    goto LAB1;

LAB259:    t2 = (t0 + 5496);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB256;

LAB260:    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5500);
    *((int *)t8) = t7;

LAB261:    t9 = (t0 + 5500);
    if (*((int *)t9) > 0)
        goto LAB262;

LAB263:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB265;
    goto LAB1;

LAB262:    xsi_set_current_line(227, ng0);
    t10 = (t0 + 3376);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB264;
    goto LAB1;

LAB264:    t2 = (t0 + 5500);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB261;

LAB265:    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 3384);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB266;
    goto LAB1;

LAB266:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB267;
    goto LAB1;

LAB267:    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5504);
    *((int *)t8) = t7;

LAB268:    t9 = (t0 + 5504);
    if (*((int *)t9) > 0)
        goto LAB269;

LAB270:    xsi_set_current_line(233, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB269:    xsi_set_current_line(232, ng0);
    t10 = (t0 + 3392);
    *((int *)t10) = 1;
    t11 = (t0 + 2720);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB271;
    goto LAB1;

LAB271:    t2 = (t0 + 5504);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB268;

}


extern void work_m_00000000002252681058_0521550836_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Initial_45_1};
	xsi_register_didat("work_m_00000000002252681058_0521550836", "isim/scorer_tb_isim_beh.exe.sim/work/m_00000000002252681058_0521550836.didat");
	xsi_register_executes(pe);
}
