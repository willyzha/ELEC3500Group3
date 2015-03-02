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
static const char *ng0 = "//ugradfs/willyzhang/win/ELEC3500/TugOfWar/ELEC3500Group3/TugOfWar/top_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {10, 0};
static int ng4[] = {6, 0};
static int ng5[] = {20, 0};



static void Always_30_0(char *t0)
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

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1804);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1380);
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
    t24 = (t0 + 1380);
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

static void Initial_32_1(char *t0)
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

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);

LAB4:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2244);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2252);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 3620);
    *((int *)t8) = t7;

LAB9:    t9 = (t0 + 3620);
    if (*((int *)t9) > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:    xsi_set_current_line(49, ng0);
    t10 = (t0 + 2260);
    *((int *)t10) = 1;
    t11 = (t0 + 2076);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    t2 = (t0 + 3620);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB9;

LAB13:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 3624);
    *((int *)t8) = t7;

LAB14:    t9 = (t0 + 3624);
    if (*((int *)t9) > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB15:    xsi_set_current_line(51, ng0);
    t10 = (t0 + 2268);
    *((int *)t10) = 1;
    t11 = (t0 + 2076);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    t2 = (t0 + 3624);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB14;

LAB18:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2276);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2284);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 3628);
    *((int *)t8) = t7;

LAB23:    t9 = (t0 + 3628);
    if (*((int *)t9) > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB24:    xsi_set_current_line(60, ng0);
    t10 = (t0 + 2292);
    *((int *)t10) = 1;
    t11 = (t0 + 2076);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    t2 = (t0 + 3628);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB23;

LAB27:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 3632);
    *((int *)t8) = t7;

LAB28:    t9 = (t0 + 3632);
    if (*((int *)t9) > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB29:    xsi_set_current_line(62, ng0);
    t10 = (t0 + 2300);
    *((int *)t10) = 1;
    t11 = (t0 + 2076);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    t2 = (t0 + 3632);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB28;

LAB32:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2308);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2316);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 3636);
    *((int *)t8) = t7;

LAB37:    t9 = (t0 + 3636);
    if (*((int *)t9) > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB38:    xsi_set_current_line(71, ng0);
    t10 = (t0 + 2324);
    *((int *)t10) = 1;
    t11 = (t0 + 2076);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    t2 = (t0 + 3636);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB37;

LAB41:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 3640);
    *((int *)t8) = t7;

LAB42:    t9 = (t0 + 3640);
    if (*((int *)t9) > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB43:    xsi_set_current_line(74, ng0);
    t10 = (t0 + 2332);
    *((int *)t10) = 1;
    t11 = (t0 + 2076);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    t2 = (t0 + 3640);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB42;

LAB46:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2340);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB48:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2348);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB49:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1948);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 3644);
    *((int *)t8) = t7;

LAB51:    t9 = (t0 + 3644);
    if (*((int *)t9) > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(85, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB52:    xsi_set_current_line(84, ng0);
    t10 = (t0 + 2356);
    *((int *)t10) = 1;
    t11 = (t0 + 2076);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    t2 = (t0 + 3644);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB51;

}


extern void work_m_00000000003222428145_3115858369_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Initial_32_1};
	xsi_register_didat("work_m_00000000003222428145_3115858369", "isim/top_tb_isim_beh.exe.sim/work/m_00000000003222428145_3115858369.didat");
	xsi_register_executes(pe);
}
