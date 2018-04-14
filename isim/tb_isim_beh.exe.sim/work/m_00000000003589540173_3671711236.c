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
static const char *ng0 = "C:/Users/olaolu-Goke/Desktop/RGB2BW/RGB_2_BW_Final/tb.v";
static int ng1[] = {0, 0};
static const char *ng2 = "RGBData23.txt";
static const char *ng3 = "r";
static const char *ng4 = "ConvertedWins.txt";
static int ng5[] = {16384, 0};
static const char *ng6 = "%d %d %d";
static const char *ng7 = "%d\n";
static int ng8[] = {1, 0};



static void Initial_44_0(char *t0)
{
    char t4[8];
    char t16[8];
    char t20[8];
    char t24[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);

LAB4:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(54, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname(ng4);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    goto LAB1;

LAB7:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    t13 = (t0 + 2248);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 1448);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t16, 0, t19, 0, 8);
    t21 = (t0 + 1608);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_bit_copy(t20, 0, t23, 0, 8);
    t25 = (t0 + 1768);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_bit_copy(t24, 0, t27, 0, 8);
    *((int *)t28) = xsi_vlogfile_fscanf(*((unsigned int *)t15), ng6, 4, t0, (char)118, t16, 8, (char)118, t20, 8, (char)118, t24, 8);
    t29 = (t28 + 4);
    *((int *)t29) = 0;
    t30 = (t0 + 1448);
    xsi_vlogvar_assign_value(t30, t16, 0, 0, 8);
    t31 = (t0 + 1608);
    xsi_vlogvar_assign_value(t31, t20, 0, 0, 8);
    t32 = (t0 + 1768);
    xsi_vlogvar_assign_value(t32, t24, 0, 0, 8);
    t33 = (t0 + 1928);
    xsi_vlogvar_assign_value(t33, t28, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t13 = (t7 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 32767U);
    t34 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t34 & 32767U);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng7, 2, t0, (char)118, t4, 15);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB6;

}


extern void work_m_00000000003589540173_3671711236_init()
{
	static char *pe[] = {(void *)Initial_44_0};
	xsi_register_didat("work_m_00000000003589540173_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000003589540173_3671711236.didat");
	xsi_register_executes(pe);
}
