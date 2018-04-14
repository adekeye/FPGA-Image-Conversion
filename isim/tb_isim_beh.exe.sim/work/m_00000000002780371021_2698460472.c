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
static const char *ng0 = "C:/Users/olaolu-Goke/Desktop/RGB2BW/RGB_2_BW_Final/RGB_2_BW_Final.v";
static int ng1[] = {3, 0};
static int ng2[] = {4, 0};
static int ng3[] = {5, 0};
static int ng4[] = {1, 0};



static void Cont_36_0(char *t0)
{
    char t4[8];
    char t7[8];
    char t8[8];
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 8, t3, 8, t2, 32);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_rshift(t7, 8, t6, 8, t5, 32);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t7, 8);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_rshift(t11, 8, t10, 8, t9, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 8, t8, 8, t11, 8);
    t13 = (t0 + 4360);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 255U;
    t19 = t18;
    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 7);
    t26 = (t0 + 4232);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_37_1(char *t0)
{
    char t4[8];
    char t7[8];
    char t8[8];
    char t11[8];
    char t12[8];
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 8, t3, 8, t2, 32);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_rshift(t7, 8, t6, 8, t5, 32);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t7, 8);
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_rshift(t11, 8, t10, 8, t9, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 8, t8, 8, t11, 8);
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_rshift(t15, 8, t14, 8, t13, 32);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 8, t12, 8, t15, 8);
    t17 = (t0 + 4424);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t16 + 4);
    t25 = *((unsigned int *)t16);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t17, 0, 7);
    t30 = (t0 + 4248);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_38_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 8, t3, 8, t2, 32);
    t5 = (t0 + 4488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 4264);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_39_3(char *t0)
{
    char t5[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 15, t3, 8, t4, 8);
    t2 = (t0 + 2008U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 15, t5, 15, t6, 8);
    t2 = (t0 + 4552);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 32767U;
    t13 = t12;
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t2, 0, 14);
    t20 = (t0 + 4280);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000002780371021_2698460472_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_37_1,(void *)Cont_38_2,(void *)Cont_39_3};
	xsi_register_didat("work_m_00000000002780371021_2698460472", "isim/tb_isim_beh.exe.sim/work/m_00000000002780371021_2698460472.didat");
	xsi_register_executes(pe);
}
