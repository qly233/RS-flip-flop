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
static const char *ng0 = "D:/szdl/RS/RS.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_25_0(char *t0)
{
    char t6[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t4) == 0)
        goto LAB6;

LAB8:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t6);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t5 + 4);
    t29 = (t6 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB12;

LAB13:
LAB14:    t56 = (t24 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t2) == 0)
        goto LAB19;

LAB21:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB22:    t5 = (t6 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB24;

LAB23:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 1U);
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t13 = (t6 + 4);
    t15 = (t14 + 4);
    t28 = (t24 + 4);
    t31 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t15);
    t33 = (t31 | t32);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t28);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB25;

LAB26:
LAB27:    t38 = (t24 + 4);
    t57 = *((unsigned int *)t38);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 & t9);
    *((unsigned int *)t6) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t5);
    t16 = (t11 | t12);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB32;

LAB33:
LAB34:    t15 = (t6 + 4);
    t41 = *((unsigned int *)t15);
    t42 = (~(t41));
    t43 = *((unsigned int *)t6);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(43, ng0);

LAB39:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB37:
LAB30:
LAB17:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

LAB12:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t5 + 4);
    t39 = (t6 + 4);
    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t6);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB14;

LAB15:    xsi_set_current_line(28, ng0);

LAB18:    xsi_set_current_line(29, ng0);
    t62 = ((char*)((ng1)));
    t63 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t63, t62, 0, 0, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB19:    *((unsigned int *)t6) = 1;
    goto LAB22;

LAB24:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t20 | t21);
    goto LAB23;

LAB25:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t24) = (t36 | t37);
    t29 = (t6 + 4);
    t30 = (t14 + 4);
    t40 = *((unsigned int *)t6);
    t41 = (~(t40));
    t42 = *((unsigned int *)t29);
    t43 = (~(t42));
    t44 = *((unsigned int *)t14);
    t45 = (~(t44));
    t46 = *((unsigned int *)t30);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t52 & t50);
    t53 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB27;

LAB28:    xsi_set_current_line(33, ng0);

LAB31:    xsi_set_current_line(34, ng0);
    t39 = ((char*)((ng2)));
    t56 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t56, t39, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB30;

LAB32:    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t19 | t20);
    t13 = (t3 + 4);
    t14 = (t4 + 4);
    t21 = *((unsigned int *)t3);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t25 = (~(t23));
    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t31 = *((unsigned int *)t14);
    t32 = (~(t31));
    t48 = (t22 & t25);
    t49 = (t27 & t32);
    t33 = (~(t48));
    t34 = (~(t49));
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t34);
    goto LAB34;

LAB35:    xsi_set_current_line(38, ng0);

LAB38:    xsi_set_current_line(39, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB37;

}


extern void work_m_00000000002958789327_1222204698_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000002958789327_1222204698", "isim/test_isim_beh.exe.sim/work/m_00000000002958789327_1222204698.didat");
	xsi_register_executes(pe);
}
