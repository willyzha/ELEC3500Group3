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
static const char *ng0 = "//ugradfs/willyzhang/win/ELEC3500/TugOfWar/ELEC3500Group3/TugOfWar/scorer.v";
static int ng1[] = {5, 0};
static int ng2[] = {4, 0};
static int ng3[] = {6, 0};
static int ng4[] = {7, 0};
static int ng5[] = {8, 0};
static int ng6[] = {9, 0};
static int ng7[] = {3, 0};
static int ng8[] = {2, 0};
static int ng9[] = {1, 0};
static int ng10[] = {0, 0};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {16U, 0U};
static unsigned int ng14[] = {18U, 0U};
static unsigned int ng15[] = {32U, 0U};
static unsigned int ng16[] = {24U, 0U};
static unsigned int ng17[] = {64U, 0U};
static unsigned int ng18[] = {3U, 0U};
static unsigned int ng19[] = {4U, 0U};
static unsigned int ng20[] = {5U, 0U};
static unsigned int ng21[] = {2U, 0U};
static unsigned int ng22[] = {34U, 0U};
static unsigned int ng23[] = {1U, 0U};
static unsigned int ng24[] = {112U, 0U};
static unsigned int ng25[] = {66U, 0U};
static unsigned int ng26[] = {7U, 0U};
static unsigned int ng27[] = {17U, 0U};
static unsigned int ng28[] = {85U, 0U};



static void Always_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 2548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3176);
    *((int *)t2) = 1;
    t3 = (t0 + 2576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Cont_55_1(char *t0)
{
    char t5[8];
    char t36[8];
    char t55[8];
    char t87[8];
    char t106[8];
    char t125[8];
    char t157[8];
    char t187[8];
    char t205[8];
    char t239[8];
    char t270[8];
    char t300[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    int t149;
    int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    char *t209;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    int t229;
    int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    char *t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    char *t252;
    char *t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    int t262;
    int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    char *t274;
    char *t275;
    char *t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    char *t284;
    char *t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t298;
    char *t299;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    char *t304;
    char *t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    char *t313;
    char *t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    int t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    char *t327;
    char *t328;
    char *t329;
    char *t330;
    char *t331;
    unsigned int t332;
    unsigned int t333;
    char *t334;
    unsigned int t335;
    unsigned int t336;
    char *t337;
    unsigned int t338;
    unsigned int t339;
    char *t340;

LAB0:    t1 = (t0 + 2692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t37 = (t0 + 1152U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t38 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (~(t39));
    t41 = *((unsigned int *)t38);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t37) == 0)
        goto LAB7;

LAB9:    t44 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t44) = 1;

LAB10:    t45 = (t36 + 4);
    t46 = (t38 + 4);
    t47 = *((unsigned int *)t38);
    t48 = (~(t47));
    *((unsigned int *)t36) = t48;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB12;

LAB11:    t53 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t53 & 1U);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & 1U);
    t56 = *((unsigned int *)t5);
    t57 = *((unsigned int *)t36);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t5 + 4);
    t60 = (t36 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB13;

LAB14:
LAB15:    t88 = (t0 + 784U);
    t89 = *((char **)t88);
    memset(t87, 0, 8);
    t88 = (t89 + 4);
    t90 = *((unsigned int *)t88);
    t91 = (~(t90));
    t92 = *((unsigned int *)t89);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t88) == 0)
        goto LAB16;

LAB18:    t95 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t95) = 1;

LAB19:    t96 = (t87 + 4);
    t97 = (t89 + 4);
    t98 = *((unsigned int *)t89);
    t99 = (~(t98));
    *((unsigned int *)t87) = t99;
    *((unsigned int *)t96) = 0;
    if (*((unsigned int *)t97) != 0)
        goto LAB21;

LAB20:    t104 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t104 & 1U);
    t105 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t105 & 1U);
    t107 = (t0 + 876U);
    t108 = *((char **)t107);
    memset(t106, 0, 8);
    t107 = (t108 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (~(t109));
    t111 = *((unsigned int *)t108);
    t112 = (t111 & t110);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t107) == 0)
        goto LAB22;

LAB24:    t114 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t114) = 1;

LAB25:    t115 = (t106 + 4);
    t116 = (t108 + 4);
    t117 = *((unsigned int *)t108);
    t118 = (~(t117));
    *((unsigned int *)t106) = t118;
    *((unsigned int *)t115) = 0;
    if (*((unsigned int *)t116) != 0)
        goto LAB27;

LAB26:    t123 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t123 & 1U);
    t124 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t124 & 1U);
    t126 = *((unsigned int *)t87);
    t127 = *((unsigned int *)t106);
    t128 = (t126 & t127);
    *((unsigned int *)t125) = t128;
    t129 = (t87 + 4);
    t130 = (t106 + 4);
    t131 = (t125 + 4);
    t132 = *((unsigned int *)t129);
    t133 = *((unsigned int *)t130);
    t134 = (t132 | t133);
    *((unsigned int *)t131) = t134;
    t135 = *((unsigned int *)t131);
    t136 = (t135 != 0);
    if (t136 == 1)
        goto LAB28;

LAB29:
LAB30:    t158 = *((unsigned int *)t55);
    t159 = *((unsigned int *)t125);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = (t55 + 4);
    t162 = (t125 + 4);
    t163 = (t157 + 4);
    t164 = *((unsigned int *)t161);
    t165 = *((unsigned int *)t162);
    t166 = (t164 | t165);
    *((unsigned int *)t163) = t166;
    t167 = *((unsigned int *)t163);
    t168 = (t167 != 0);
    if (t168 == 1)
        goto LAB31;

LAB32:
LAB33:    t185 = (t0 + 876U);
    t186 = *((char **)t185);
    t185 = (t0 + 784U);
    t188 = *((char **)t185);
    memset(t187, 0, 8);
    t185 = (t188 + 4);
    t189 = *((unsigned int *)t185);
    t190 = (~(t189));
    t191 = *((unsigned int *)t188);
    t192 = (t191 & t190);
    t193 = (t192 & 1U);
    if (t193 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t185) == 0)
        goto LAB34;

LAB36:    t194 = (t187 + 4);
    *((unsigned int *)t187) = 1;
    *((unsigned int *)t194) = 1;

LAB37:    t195 = (t187 + 4);
    t196 = (t188 + 4);
    t197 = *((unsigned int *)t188);
    t198 = (~(t197));
    *((unsigned int *)t187) = t198;
    *((unsigned int *)t195) = 0;
    if (*((unsigned int *)t196) != 0)
        goto LAB39;

LAB38:    t203 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t203 & 1U);
    t204 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t204 & 1U);
    t206 = *((unsigned int *)t186);
    t207 = *((unsigned int *)t187);
    t208 = (t206 & t207);
    *((unsigned int *)t205) = t208;
    t209 = (t186 + 4);
    t210 = (t187 + 4);
    t211 = (t205 + 4);
    t212 = *((unsigned int *)t209);
    t213 = *((unsigned int *)t210);
    t214 = (t212 | t213);
    *((unsigned int *)t211) = t214;
    t215 = *((unsigned int *)t211);
    t216 = (t215 != 0);
    if (t216 == 1)
        goto LAB40;

LAB41:
LAB42:    t237 = (t0 + 1152U);
    t238 = *((char **)t237);
    t240 = *((unsigned int *)t205);
    t241 = *((unsigned int *)t238);
    t242 = (t240 & t241);
    *((unsigned int *)t239) = t242;
    t237 = (t205 + 4);
    t243 = (t238 + 4);
    t244 = (t239 + 4);
    t245 = *((unsigned int *)t237);
    t246 = *((unsigned int *)t243);
    t247 = (t245 | t246);
    *((unsigned int *)t244) = t247;
    t248 = *((unsigned int *)t244);
    t249 = (t248 != 0);
    if (t249 == 1)
        goto LAB43;

LAB44:
LAB45:    t271 = *((unsigned int *)t157);
    t272 = *((unsigned int *)t239);
    t273 = (t271 | t272);
    *((unsigned int *)t270) = t273;
    t274 = (t157 + 4);
    t275 = (t239 + 4);
    t276 = (t270 + 4);
    t277 = *((unsigned int *)t274);
    t278 = *((unsigned int *)t275);
    t279 = (t277 | t278);
    *((unsigned int *)t276) = t279;
    t280 = *((unsigned int *)t276);
    t281 = (t280 != 0);
    if (t281 == 1)
        goto LAB46;

LAB47:
LAB48:    t298 = (t0 + 1336U);
    t299 = *((char **)t298);
    t301 = *((unsigned int *)t270);
    t302 = *((unsigned int *)t299);
    t303 = (t301 | t302);
    *((unsigned int *)t300) = t303;
    t298 = (t270 + 4);
    t304 = (t299 + 4);
    t305 = (t300 + 4);
    t306 = *((unsigned int *)t298);
    t307 = *((unsigned int *)t304);
    t308 = (t306 | t307);
    *((unsigned int *)t305) = t308;
    t309 = *((unsigned int *)t305);
    t310 = (t309 != 0);
    if (t310 == 1)
        goto LAB49;

LAB50:
LAB51:    t327 = (t0 + 3244);
    t328 = (t327 + 32U);
    t329 = *((char **)t328);
    t330 = (t329 + 40U);
    t331 = *((char **)t330);
    memset(t331, 0, 8);
    t332 = 1U;
    t333 = t332;
    t334 = (t300 + 4);
    t335 = *((unsigned int *)t300);
    t332 = (t332 & t335);
    t336 = *((unsigned int *)t334);
    t333 = (t333 & t336);
    t337 = (t331 + 4);
    t338 = *((unsigned int *)t331);
    *((unsigned int *)t331) = (t338 | t332);
    t339 = *((unsigned int *)t337);
    *((unsigned int *)t337) = (t339 | t333);
    xsi_driver_vfirst_trans(t327, 0, 0);
    t340 = (t0 + 3184);
    *((int *)t340) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

LAB7:    *((unsigned int *)t36) = 1;
    goto LAB10;

LAB12:    t49 = *((unsigned int *)t36);
    t50 = *((unsigned int *)t46);
    *((unsigned int *)t36) = (t49 | t50);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t45) = (t51 | t52);
    goto LAB11;

LAB13:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t5 + 4);
    t70 = (t36 + 4);
    t71 = *((unsigned int *)t5);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t36);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB15;

LAB16:    *((unsigned int *)t87) = 1;
    goto LAB19;

LAB21:    t100 = *((unsigned int *)t87);
    t101 = *((unsigned int *)t97);
    *((unsigned int *)t87) = (t100 | t101);
    t102 = *((unsigned int *)t96);
    t103 = *((unsigned int *)t97);
    *((unsigned int *)t96) = (t102 | t103);
    goto LAB20;

LAB22:    *((unsigned int *)t106) = 1;
    goto LAB25;

LAB27:    t119 = *((unsigned int *)t106);
    t120 = *((unsigned int *)t116);
    *((unsigned int *)t106) = (t119 | t120);
    t121 = *((unsigned int *)t115);
    t122 = *((unsigned int *)t116);
    *((unsigned int *)t115) = (t121 | t122);
    goto LAB26;

LAB28:    t137 = *((unsigned int *)t125);
    t138 = *((unsigned int *)t131);
    *((unsigned int *)t125) = (t137 | t138);
    t139 = (t87 + 4);
    t140 = (t106 + 4);
    t141 = *((unsigned int *)t87);
    t142 = (~(t141));
    t143 = *((unsigned int *)t139);
    t144 = (~(t143));
    t145 = *((unsigned int *)t106);
    t146 = (~(t145));
    t147 = *((unsigned int *)t140);
    t148 = (~(t147));
    t149 = (t142 & t144);
    t150 = (t146 & t148);
    t151 = (~(t149));
    t152 = (~(t150));
    t153 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t153 & t151);
    t154 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t154 & t152);
    t155 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t155 & t151);
    t156 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t156 & t152);
    goto LAB30;

LAB31:    t169 = *((unsigned int *)t157);
    t170 = *((unsigned int *)t163);
    *((unsigned int *)t157) = (t169 | t170);
    t171 = (t55 + 4);
    t172 = (t125 + 4);
    t173 = *((unsigned int *)t171);
    t174 = (~(t173));
    t175 = *((unsigned int *)t55);
    t176 = (t175 & t174);
    t177 = *((unsigned int *)t172);
    t178 = (~(t177));
    t179 = *((unsigned int *)t125);
    t180 = (t179 & t178);
    t181 = (~(t176));
    t182 = (~(t180));
    t183 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t183 & t181);
    t184 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t184 & t182);
    goto LAB33;

LAB34:    *((unsigned int *)t187) = 1;
    goto LAB37;

LAB39:    t199 = *((unsigned int *)t187);
    t200 = *((unsigned int *)t196);
    *((unsigned int *)t187) = (t199 | t200);
    t201 = *((unsigned int *)t195);
    t202 = *((unsigned int *)t196);
    *((unsigned int *)t195) = (t201 | t202);
    goto LAB38;

LAB40:    t217 = *((unsigned int *)t205);
    t218 = *((unsigned int *)t211);
    *((unsigned int *)t205) = (t217 | t218);
    t219 = (t186 + 4);
    t220 = (t187 + 4);
    t221 = *((unsigned int *)t186);
    t222 = (~(t221));
    t223 = *((unsigned int *)t219);
    t224 = (~(t223));
    t225 = *((unsigned int *)t187);
    t226 = (~(t225));
    t227 = *((unsigned int *)t220);
    t228 = (~(t227));
    t229 = (t222 & t224);
    t230 = (t226 & t228);
    t231 = (~(t229));
    t232 = (~(t230));
    t233 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t233 & t231);
    t234 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t234 & t232);
    t235 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t235 & t231);
    t236 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t236 & t232);
    goto LAB42;

LAB43:    t250 = *((unsigned int *)t239);
    t251 = *((unsigned int *)t244);
    *((unsigned int *)t239) = (t250 | t251);
    t252 = (t205 + 4);
    t253 = (t238 + 4);
    t254 = *((unsigned int *)t205);
    t255 = (~(t254));
    t256 = *((unsigned int *)t252);
    t257 = (~(t256));
    t258 = *((unsigned int *)t238);
    t259 = (~(t258));
    t260 = *((unsigned int *)t253);
    t261 = (~(t260));
    t262 = (t255 & t257);
    t263 = (t259 & t261);
    t264 = (~(t262));
    t265 = (~(t263));
    t266 = *((unsigned int *)t244);
    *((unsigned int *)t244) = (t266 & t264);
    t267 = *((unsigned int *)t244);
    *((unsigned int *)t244) = (t267 & t265);
    t268 = *((unsigned int *)t239);
    *((unsigned int *)t239) = (t268 & t264);
    t269 = *((unsigned int *)t239);
    *((unsigned int *)t239) = (t269 & t265);
    goto LAB45;

LAB46:    t282 = *((unsigned int *)t270);
    t283 = *((unsigned int *)t276);
    *((unsigned int *)t270) = (t282 | t283);
    t284 = (t157 + 4);
    t285 = (t239 + 4);
    t286 = *((unsigned int *)t284);
    t287 = (~(t286));
    t288 = *((unsigned int *)t157);
    t289 = (t288 & t287);
    t290 = *((unsigned int *)t285);
    t291 = (~(t290));
    t292 = *((unsigned int *)t239);
    t293 = (t292 & t291);
    t294 = (~(t289));
    t295 = (~(t293));
    t296 = *((unsigned int *)t276);
    *((unsigned int *)t276) = (t296 & t294);
    t297 = *((unsigned int *)t276);
    *((unsigned int *)t276) = (t297 & t295);
    goto LAB48;

LAB49:    t311 = *((unsigned int *)t300);
    t312 = *((unsigned int *)t305);
    *((unsigned int *)t300) = (t311 | t312);
    t313 = (t270 + 4);
    t314 = (t299 + 4);
    t315 = *((unsigned int *)t313);
    t316 = (~(t315));
    t317 = *((unsigned int *)t270);
    t318 = (t317 & t316);
    t319 = *((unsigned int *)t314);
    t320 = (~(t319));
    t321 = *((unsigned int *)t299);
    t322 = (t321 & t320);
    t323 = (~(t318));
    t324 = (~(t322));
    t325 = *((unsigned int *)t305);
    *((unsigned int *)t305) = (t325 & t323);
    t326 = *((unsigned int *)t305);
    *((unsigned int *)t305) = (t326 & t324);
    goto LAB51;

}

static void Always_57_2(char *t0)
{
    char t8[8];
    char t22[8];
    char t56[8];
    char t74[8];
    char t106[8];
    char t142[8];
    char t160[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    int t184;
    int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    char *t200;
    char *t201;
    int t202;
    char *t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;

LAB0:    t1 = (t0 + 2836U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3192);
    *((int *)t2) = 1;
    t3 = (t0 + 2864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1932);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t4 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t2) == 0)
        goto LAB6;

LAB8:    t5 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t5) = 1;

LAB9:    t6 = (t8 + 4);
    t7 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t8) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB11;

LAB10:    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 1U);
    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t8);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t3 + 4);
    t27 = (t8 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB12;

LAB13:
LAB14:    t54 = (t0 + 1428U);
    t55 = *((char **)t54);
    t54 = (t0 + 1244U);
    t57 = *((char **)t54);
    memset(t56, 0, 8);
    t54 = (t57 + 4);
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t57);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t54) == 0)
        goto LAB15;

LAB17:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;

LAB18:    t64 = (t56 + 4);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t57);
    t67 = (~(t66));
    *((unsigned int *)t56) = t67;
    *((unsigned int *)t64) = 0;
    if (*((unsigned int *)t65) != 0)
        goto LAB20;

LAB19:    t72 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t72 & 1U);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t73 & 1U);
    t75 = *((unsigned int *)t55);
    t76 = *((unsigned int *)t56);
    t77 = (t75 & t76);
    *((unsigned int *)t74) = t77;
    t78 = (t55 + 4);
    t79 = (t56 + 4);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t78);
    t82 = *((unsigned int *)t79);
    t83 = (t81 | t82);
    *((unsigned int *)t80) = t83;
    t84 = *((unsigned int *)t80);
    t85 = (t84 != 0);
    if (t85 == 1)
        goto LAB21;

LAB22:
LAB23:    t107 = *((unsigned int *)t22);
    t108 = *((unsigned int *)t74);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = (t22 + 4);
    t111 = (t74 + 4);
    t112 = (t106 + 4);
    t113 = *((unsigned int *)t110);
    t114 = *((unsigned int *)t111);
    t115 = (t113 | t114);
    *((unsigned int *)t112) = t115;
    t116 = *((unsigned int *)t112);
    t117 = (t116 != 0);
    if (t117 == 1)
        goto LAB24;

LAB25:
LAB26:    t134 = (t106 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t106);
    t138 = (t137 & t136);
    t139 = (t138 != 0);
    if (t139 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 2024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);

LAB29:    goto LAB2;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t8) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t18 | t19);
    goto LAB10;

LAB12:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t8 + 4);
    t38 = *((unsigned int *)t3);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t8);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB14;

LAB15:    *((unsigned int *)t56) = 1;
    goto LAB18;

LAB20:    t68 = *((unsigned int *)t56);
    t69 = *((unsigned int *)t65);
    *((unsigned int *)t56) = (t68 | t69);
    t70 = *((unsigned int *)t64);
    t71 = *((unsigned int *)t65);
    *((unsigned int *)t64) = (t70 | t71);
    goto LAB19;

LAB21:    t86 = *((unsigned int *)t74);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t74) = (t86 | t87);
    t88 = (t55 + 4);
    t89 = (t56 + 4);
    t90 = *((unsigned int *)t55);
    t91 = (~(t90));
    t92 = *((unsigned int *)t88);
    t93 = (~(t92));
    t94 = *((unsigned int *)t56);
    t95 = (~(t94));
    t96 = *((unsigned int *)t89);
    t97 = (~(t96));
    t98 = (t91 & t93);
    t99 = (t95 & t97);
    t100 = (~(t98));
    t101 = (~(t99));
    t102 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t102 & t100);
    t103 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t103 & t101);
    t104 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t104 & t100);
    t105 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t105 & t101);
    goto LAB23;

LAB24:    t118 = *((unsigned int *)t106);
    t119 = *((unsigned int *)t112);
    *((unsigned int *)t106) = (t118 | t119);
    t120 = (t22 + 4);
    t121 = (t74 + 4);
    t122 = *((unsigned int *)t120);
    t123 = (~(t122));
    t124 = *((unsigned int *)t22);
    t125 = (t124 & t123);
    t126 = *((unsigned int *)t121);
    t127 = (~(t126));
    t128 = *((unsigned int *)t74);
    t129 = (t128 & t127);
    t130 = (~(t125));
    t131 = (~(t129));
    t132 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t132 & t130);
    t133 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t133 & t131);
    goto LAB26;

LAB27:    xsi_set_current_line(60, ng0);

LAB30:    xsi_set_current_line(62, ng0);
    t140 = (t0 + 876U);
    t141 = *((char **)t140);
    t140 = (t0 + 1152U);
    t143 = *((char **)t140);
    memset(t142, 0, 8);
    t140 = (t143 + 4);
    t144 = *((unsigned int *)t140);
    t145 = (~(t144));
    t146 = *((unsigned int *)t143);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t140) == 0)
        goto LAB31;

LAB33:    t149 = (t142 + 4);
    *((unsigned int *)t142) = 1;
    *((unsigned int *)t149) = 1;

LAB34:    t150 = (t142 + 4);
    t151 = (t143 + 4);
    t152 = *((unsigned int *)t143);
    t153 = (~(t152));
    *((unsigned int *)t142) = t153;
    *((unsigned int *)t150) = 0;
    if (*((unsigned int *)t151) != 0)
        goto LAB36;

LAB35:    t158 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t158 & 1U);
    t159 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t159 & 1U);
    t161 = *((unsigned int *)t141);
    t162 = *((unsigned int *)t142);
    t163 = (t161 & t162);
    *((unsigned int *)t160) = t163;
    t164 = (t141 + 4);
    t165 = (t142 + 4);
    t166 = (t160 + 4);
    t167 = *((unsigned int *)t164);
    t168 = *((unsigned int *)t165);
    t169 = (t167 | t168);
    *((unsigned int *)t166) = t169;
    t170 = *((unsigned int *)t166);
    t171 = (t170 != 0);
    if (t171 == 1)
        goto LAB37;

LAB38:
LAB39:    t192 = (t160 + 4);
    t193 = *((unsigned int *)t192);
    t194 = (~(t193));
    t195 = *((unsigned int *)t160);
    t196 = (t195 & t194);
    t197 = (t196 != 0);
    if (t197 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(77, ng0);

LAB87:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB88:    t5 = ((char*)((ng1)));
    t46 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 32);
    if (t46 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng3)));
    t46 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t46 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng4)));
    t46 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t46 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng5)));
    t46 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t46 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng2)));
    t46 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t46 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng7)));
    t46 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t46 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng8)));
    t46 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t46 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng6)));
    t46 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t46 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng9)));
    t46 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t46 == 1)
        goto LAB105;

LAB106:
LAB108:
LAB107:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB109:
LAB42:    goto LAB29;

LAB31:    *((unsigned int *)t142) = 1;
    goto LAB34;

LAB36:    t154 = *((unsigned int *)t142);
    t155 = *((unsigned int *)t151);
    *((unsigned int *)t142) = (t154 | t155);
    t156 = *((unsigned int *)t150);
    t157 = *((unsigned int *)t151);
    *((unsigned int *)t150) = (t156 | t157);
    goto LAB35;

LAB37:    t172 = *((unsigned int *)t160);
    t173 = *((unsigned int *)t166);
    *((unsigned int *)t160) = (t172 | t173);
    t174 = (t141 + 4);
    t175 = (t142 + 4);
    t176 = *((unsigned int *)t141);
    t177 = (~(t176));
    t178 = *((unsigned int *)t174);
    t179 = (~(t178));
    t180 = *((unsigned int *)t142);
    t181 = (~(t180));
    t182 = *((unsigned int *)t175);
    t183 = (~(t182));
    t184 = (t177 & t179);
    t185 = (t181 & t183);
    t186 = (~(t184));
    t187 = (~(t185));
    t188 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t188 & t186);
    t189 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t189 & t187);
    t190 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t190 & t186);
    t191 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t191 & t187);
    goto LAB39;

LAB40:    xsi_set_current_line(62, ng0);

LAB43:    xsi_set_current_line(65, ng0);
    t198 = (t0 + 1932);
    t199 = (t198 + 36U);
    t200 = *((char **)t199);

LAB44:    t201 = ((char*)((ng1)));
    t202 = xsi_vlog_unsigned_case_compare(t200, 4, t201, 32);
    if (t202 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng3)));
    t46 = xsi_vlog_unsigned_case_compare(t200, 4, t2, 32);
    if (t46 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng4)));
    t46 = xsi_vlog_unsigned_case_compare(t200, 4, t2, 32);
    if (t46 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng5)));
    t46 = xsi_vlog_unsigned_case_compare(t200, 4, t2, 32);
    if (t46 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng2)));
    t46 = xsi_vlog_unsigned_case_compare(t200, 4, t2, 32);
    if (t46 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng7)));
    t46 = xsi_vlog_unsigned_case_compare(t200, 4, t2, 32);
    if (t46 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng8)));
    t46 = xsi_vlog_unsigned_case_compare(t200, 4, t2, 32);
    if (t46 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng6)));
    t46 = xsi_vlog_unsigned_case_compare(t200, 4, t2, 32);
    if (t46 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng9)));
    t46 = xsi_vlog_unsigned_case_compare(t200, 4, t2, 32);
    if (t46 == 1)
        goto LAB61;

LAB62:
LAB64:
LAB63:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB65:    goto LAB42;

LAB45:    xsi_set_current_line(66, ng0);
    t203 = (t0 + 1520U);
    t204 = *((char **)t203);
    t203 = (t204 + 4);
    t205 = *((unsigned int *)t203);
    t206 = (~(t205));
    t207 = *((unsigned int *)t204);
    t208 = (t207 & t206);
    t209 = (t208 != 0);
    if (t209 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB68:    goto LAB65;

LAB47:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1520U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB71:    goto LAB65;

LAB49:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1520U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB74:    goto LAB65;

LAB51:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1520U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB77:    goto LAB65;

LAB53:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1520U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB80:    goto LAB65;

LAB55:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1520U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB83:    goto LAB65;

LAB57:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1520U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB86:    goto LAB65;

LAB59:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB65;

LAB61:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB65;

LAB66:    xsi_set_current_line(66, ng0);
    t210 = ((char*)((ng2)));
    t211 = (t0 + 2024);
    xsi_vlogvar_assign_value(t211, t210, 0, 0, 4);
    goto LAB68;

LAB69:    xsi_set_current_line(67, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB71;

LAB72:    xsi_set_current_line(68, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 2024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB74;

LAB75:    xsi_set_current_line(69, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 2024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB77;

LAB78:    xsi_set_current_line(70, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 2024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB80;

LAB81:    xsi_set_current_line(71, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 2024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB83;

LAB84:    xsi_set_current_line(72, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 2024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB86;

LAB89:    xsi_set_current_line(79, ng0);
    t6 = (t0 + 1520U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB112:    goto LAB109;

LAB91:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1520U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB115:    goto LAB109;

LAB93:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 1520U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB118:    goto LAB109;

LAB95:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1520U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB121:    goto LAB109;

LAB97:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1520U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB124:    goto LAB109;

LAB99:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1520U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB127:    goto LAB109;

LAB101:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1520U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB130:    goto LAB109;

LAB103:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2024);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB109;

LAB105:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 2024);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB109;

LAB110:    xsi_set_current_line(79, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 2024);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 4);
    goto LAB112;

LAB113:    xsi_set_current_line(80, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB115;

LAB116:    xsi_set_current_line(81, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB118;

LAB119:    xsi_set_current_line(82, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB121;

LAB122:    xsi_set_current_line(83, ng0);
    t6 = ((char*)((ng7)));
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB124;

LAB125:    xsi_set_current_line(84, ng0);
    t6 = ((char*)((ng8)));
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB127;

LAB128:    xsi_set_current_line(85, ng0);
    t6 = ((char*)((ng9)));
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB130;

}

static void Always_98_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2980U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3200);
    *((int *)t2) = 1;
    t3 = (t0 + 3008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 1932);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 32);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(109, ng0);

LAB36:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB26:    goto LAB2;

LAB6:    xsi_set_current_line(100, ng0);

LAB27:    xsi_set_current_line(100, ng0);
    t9 = ((char*)((ng11)));
    t10 = (t0 + 1748);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 7);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB26;

LAB8:    xsi_set_current_line(101, ng0);

LAB28:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB26;

LAB10:    xsi_set_current_line(102, ng0);

LAB29:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB26;

LAB12:    xsi_set_current_line(103, ng0);

LAB30:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB26;

LAB14:    xsi_set_current_line(104, ng0);

LAB31:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB26;

LAB16:    xsi_set_current_line(105, ng0);

LAB32:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB26;

LAB18:    xsi_set_current_line(106, ng0);

LAB33:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB26;

LAB20:    xsi_set_current_line(107, ng0);

LAB34:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB26;

LAB22:    xsi_set_current_line(108, ng0);

LAB35:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB26;

}


extern void work_m_00000000001993063117_0399263094_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Cont_55_1,(void *)Always_57_2,(void *)Always_98_3};
	xsi_register_didat("work_m_00000000001993063117_0399263094", "isim/scorer_isim_beh.exe.sim/work/m_00000000001993063117_0399263094.didat");
	xsi_register_executes(pe);
}
