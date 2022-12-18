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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Study/2019-2020/Second Semester/CPE433 - Advanced Digital/Home Work 2/JK-FF/jk_ff.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_26_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t44[8];
    char t58[8];
    char t74[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
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
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;

LAB16:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t6) = 1;

LAB23:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB26:
LAB19:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2248);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB12;

LAB15:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(37, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2248);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB19;

LAB22:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(40, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t21);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t28);
    t39 = *((unsigned int *)t29);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB30;

LAB27:    if (t40 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t30) = 1;

LAB30:    memset(t44, 0, 8);
    t45 = (t30 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t30);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t45) != 0)
        goto LAB33;

LAB34:    t52 = (t44 + 4);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t52);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB35;

LAB36:    memcpy(t82, t44, 8);

LAB37:    t114 = (t82 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t82);
    t118 = (t117 & t116);
    t119 = (t118 != 0);
    if (t119 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB55;

LAB52:    if (t18 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;

LAB55:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t8) != 0)
        goto LAB58;

LAB59:    t22 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB60;

LAB61:    memcpy(t74, t30, 8);

LAB62:    t81 = (t74 + 4);
    t93 = *((unsigned int *)t81);
    t94 = (~(t93));
    t95 = *((unsigned int *)t74);
    t98 = (t95 & t94);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB80;

LAB77:    if (t18 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t6) = 1;

LAB80:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t8) != 0)
        goto LAB83;

LAB84:    t22 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB85;

LAB86:    memcpy(t74, t30, 8);

LAB87:    t81 = (t74 + 4);
    t93 = *((unsigned int *)t81);
    t94 = (~(t93));
    t95 = *((unsigned int *)t74);
    t98 = (t95 & t94);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB105;

LAB103:    if (*((unsigned int *)t5) == 0)
        goto LAB102;

LAB104:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB105:    t8 = (t6 + 4);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB107;

LAB106:    t20 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t20 & 1U);
    t23 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t23 & 1U);
    t22 = (t0 + 2248);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 1);

LAB101:
LAB76:
LAB51:    goto LAB26;

LAB29:    t43 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t44) = 1;
    goto LAB34;

LAB33:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB34;

LAB35:    t56 = (t0 + 1208U);
    t57 = *((char **)t56);
    t56 = ((char*)((ng1)));
    memset(t58, 0, 8);
    t59 = (t57 + 4);
    t60 = (t56 + 4);
    t61 = *((unsigned int *)t57);
    t62 = *((unsigned int *)t56);
    t63 = (t61 ^ t62);
    t64 = *((unsigned int *)t59);
    t65 = *((unsigned int *)t60);
    t66 = (t64 ^ t65);
    t67 = (t63 | t66);
    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t60);
    t70 = (t68 | t69);
    t71 = (~(t70));
    t72 = (t67 & t71);
    if (t72 != 0)
        goto LAB41;

LAB38:    if (t70 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t58) = 1;

LAB41:    memset(t74, 0, 8);
    t75 = (t58 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t58);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t75) != 0)
        goto LAB44;

LAB45:    t83 = *((unsigned int *)t44);
    t84 = *((unsigned int *)t74);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t44 + 4);
    t87 = (t74 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB37;

LAB40:    t73 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t74) = 1;
    goto LAB45;

LAB44:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB45;

LAB46:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t44 + 4);
    t97 = (t74 + 4);
    t98 = *((unsigned int *)t44);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t74);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB48;

LAB49:    xsi_set_current_line(41, ng0);
    t120 = (t0 + 2248);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t123 = (t0 + 2248);
    xsi_vlogvar_assign_value(t123, t122, 0, 0, 1);
    goto LAB51;

LAB54:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t30) = 1;
    goto LAB59;

LAB58:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB59;

LAB60:    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t44, 0, 8);
    t43 = (t29 + 4);
    t45 = (t28 + 4);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t28);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t45);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t43);
    t42 = *((unsigned int *)t45);
    t46 = (t41 | t42);
    t47 = (~(t46));
    t48 = (t40 & t47);
    if (t48 != 0)
        goto LAB66;

LAB63:    if (t46 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t44) = 1;

LAB66:    memset(t58, 0, 8);
    t52 = (t44 + 4);
    t49 = *((unsigned int *)t52);
    t50 = (~(t49));
    t53 = *((unsigned int *)t44);
    t54 = (t53 & t50);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t52) != 0)
        goto LAB69;

LAB70:    t61 = *((unsigned int *)t30);
    t62 = *((unsigned int *)t58);
    t63 = (t61 & t62);
    *((unsigned int *)t74) = t63;
    t57 = (t30 + 4);
    t59 = (t58 + 4);
    t60 = (t74 + 4);
    t64 = *((unsigned int *)t57);
    t65 = *((unsigned int *)t59);
    t66 = (t64 | t65);
    *((unsigned int *)t60) = t66;
    t67 = *((unsigned int *)t60);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB62;

LAB65:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB66;

LAB67:    *((unsigned int *)t58) = 1;
    goto LAB70;

LAB69:    t56 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB70;

LAB71:    t69 = *((unsigned int *)t74);
    t70 = *((unsigned int *)t60);
    *((unsigned int *)t74) = (t69 | t70);
    t73 = (t30 + 4);
    t75 = (t58 + 4);
    t71 = *((unsigned int *)t30);
    t72 = (~(t71));
    t76 = *((unsigned int *)t73);
    t77 = (~(t76));
    t78 = *((unsigned int *)t58);
    t79 = (~(t78));
    t80 = *((unsigned int *)t75);
    t83 = (~(t80));
    t106 = (t72 & t77);
    t107 = (t79 & t83);
    t84 = (~(t106));
    t85 = (~(t107));
    t89 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t89 & t84);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t85);
    t91 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t91 & t84);
    t92 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t92 & t85);
    goto LAB73;

LAB74:    xsi_set_current_line(43, ng0);
    t86 = ((char*)((ng1)));
    t87 = (t0 + 2248);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 1);
    goto LAB76;

LAB79:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t30) = 1;
    goto LAB84;

LAB83:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB84;

LAB85:    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng1)));
    memset(t44, 0, 8);
    t43 = (t29 + 4);
    t45 = (t28 + 4);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t28);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t45);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t43);
    t42 = *((unsigned int *)t45);
    t46 = (t41 | t42);
    t47 = (~(t46));
    t48 = (t40 & t47);
    if (t48 != 0)
        goto LAB91;

LAB88:    if (t46 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t44) = 1;

LAB91:    memset(t58, 0, 8);
    t52 = (t44 + 4);
    t49 = *((unsigned int *)t52);
    t50 = (~(t49));
    t53 = *((unsigned int *)t44);
    t54 = (t53 & t50);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t52) != 0)
        goto LAB94;

LAB95:    t61 = *((unsigned int *)t30);
    t62 = *((unsigned int *)t58);
    t63 = (t61 & t62);
    *((unsigned int *)t74) = t63;
    t57 = (t30 + 4);
    t59 = (t58 + 4);
    t60 = (t74 + 4);
    t64 = *((unsigned int *)t57);
    t65 = *((unsigned int *)t59);
    t66 = (t64 | t65);
    *((unsigned int *)t60) = t66;
    t67 = *((unsigned int *)t60);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB87;

LAB90:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t58) = 1;
    goto LAB95;

LAB94:    t56 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB95;

LAB96:    t69 = *((unsigned int *)t74);
    t70 = *((unsigned int *)t60);
    *((unsigned int *)t74) = (t69 | t70);
    t73 = (t30 + 4);
    t75 = (t58 + 4);
    t71 = *((unsigned int *)t30);
    t72 = (~(t71));
    t76 = *((unsigned int *)t73);
    t77 = (~(t76));
    t78 = *((unsigned int *)t58);
    t79 = (~(t78));
    t80 = *((unsigned int *)t75);
    t83 = (~(t80));
    t106 = (t72 & t77);
    t107 = (t79 & t83);
    t84 = (~(t106));
    t85 = (~(t107));
    t89 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t89 & t84);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t85);
    t91 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t91 & t84);
    t92 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t92 & t85);
    goto LAB98;

LAB99:    xsi_set_current_line(45, ng0);
    t86 = ((char*)((ng2)));
    t87 = (t0 + 2248);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 1);
    goto LAB101;

LAB102:    *((unsigned int *)t6) = 1;
    goto LAB105;

LAB107:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t16 | t17);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t8) = (t18 | t19);
    goto LAB106;

}


extern void work_m_00000000000901843502_0131330399_init()
{
	static char *pe[] = {(void *)Initial_26_0,(void *)Always_31_1};
	xsi_register_didat("work_m_00000000000901843502_0131330399", "isim/JK_TB_isim_beh.exe.sim/work/m_00000000000901843502_0131330399.didat");
	xsi_register_executes(pe);
}
