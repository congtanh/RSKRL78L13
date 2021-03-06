   
/************************************************************************/
/* Header file generated from device file:                              */
/*    DR5F10WMG.DVF                                                     */
/*    Copyright(C) 2012 Renesas                                         */
/*    File Version V1.00                                                */
/*    Tool Version 2.0.11                                               */
/*    Date Generated 07/02/2013                                         */
/************************************************************************/

#ifndef __IOREG_BIT_STRUCTURES
#define __IOREG_BIT_STRUCTURES
typedef struct {
	unsigned char no0 :1;
	unsigned char no1 :1;
	unsigned char no2 :1;
	unsigned char no3 :1;
	unsigned char no4 :1;
	unsigned char no5 :1;
	unsigned char no6 :1;
	unsigned char no7 :1;
} __BITS8;

typedef struct {
	unsigned short no0 :1;
	unsigned short no1 :1;
	unsigned short no2 :1;
	unsigned short no3 :1;
	unsigned short no4 :1;
	unsigned short no5 :1;
	unsigned short no6 :1;
	unsigned short no7 :1;
	unsigned short no8 :1;
	unsigned short no9 :1;
	unsigned short no10 :1;
	unsigned short no11 :1;
	unsigned short no12 :1;
	unsigned short no13 :1;
	unsigned short no14 :1;
	unsigned short no15 :1;
} __BITS16;

#endif

#ifndef IODEFINE_EXT_H
#define IODEFINE_EXT_H

/*
 IO Registers
 */
union un_adm2 {
	unsigned char adm2;
	__BITS8 BIT;
};
union un_pu0 {
	unsigned char pu0;
	__BITS8 BIT;
};
union un_pu1 {
	unsigned char pu1;
	__BITS8 BIT;
};
union un_pu2 {
	unsigned char pu2;
	__BITS8 BIT;
};
union un_pu3 {
	unsigned char pu3;
	__BITS8 BIT;
};
union un_pu4 {
	unsigned char pu4;
	__BITS8 BIT;
};
union un_pu5 {
	unsigned char pu5;
	__BITS8 BIT;
};
union un_pu7 {
	unsigned char pu7;
	__BITS8 BIT;
};
union un_pu12 {
	unsigned char pu12;
	__BITS8 BIT;
};
union un_pu13 {
	unsigned char pu13;
	__BITS8 BIT;
};
union un_pim0 {
	unsigned char pim0;
	__BITS8 BIT;
};
union un_pim1 {
	unsigned char pim1;
	__BITS8 BIT;
};
union un_pim3 {
	unsigned char pim3;
	__BITS8 BIT;
};
union un_pim4 {
	unsigned char pim4;
	__BITS8 BIT;
};
union un_pim5 {
	unsigned char pim5;
	__BITS8 BIT;
};
union un_pom0 {
	unsigned char pom0;
	__BITS8 BIT;
};
union un_pom1 {
	unsigned char pom1;
	__BITS8 BIT;
};
union un_pom3 {
	unsigned char pom3;
	__BITS8 BIT;
};
union un_pom4 {
	unsigned char pom4;
	__BITS8 BIT;
};
union un_pom5 {
	unsigned char pom5;
	__BITS8 BIT;
};
union un_pom13 {
	unsigned char pom13;
	__BITS8 BIT;
};
union un_pmc1 {
	unsigned char pmc1;
	__BITS8 BIT;
};
union un_pmc2 {
	unsigned char pmc2;
	__BITS8 BIT;
};
union un_pmc4 {
	unsigned char pmc4;
	__BITS8 BIT;
};
union un_nfen0 {
	unsigned char nfen0;
	__BITS8 BIT;
};
union un_nfen1 {
	unsigned char nfen1;
	__BITS8 BIT;
};
union un_isc {
	unsigned char isc;
	__BITS8 BIT;
};
union un_tos {
	unsigned char tos;
	__BITS8 BIT;
};
union un_per1 {
	unsigned char per1;
	__BITS8 BIT;
};
union un_pms {
	unsigned char pms;
	__BITS8 BIT;
};
union un_dflctl {
	unsigned char dflctl;
	__BITS8 BIT;
};
union un_mduc {
	unsigned char mduc;
	__BITS8 BIT;
};
union un_per0 {
	unsigned char per0;
	__BITS8 BIT;
};
union un_rmc {
	unsigned char rmc;
	__BITS8 BIT;
};
union un_rpectl {
	unsigned char rpectl;
	__BITS8 BIT;
};
union un_porsr {
	unsigned char porsr;
	__BITS8 BIT;
};
union un_se0l {
	unsigned char se0l;
	__BITS8 BIT;
};
union un_ss0l {
	unsigned char ss0l;
	__BITS8 BIT;
};
union un_st0l {
	unsigned char st0l;
	__BITS8 BIT;
};
union un_soe0l {
	unsigned char soe0l;
	__BITS8 BIT;
};
union un_se1l {
	unsigned char se1l;
	__BITS8 BIT;
};
union un_ss1l {
	unsigned char ss1l;
	__BITS8 BIT;
};
union un_st1l {
	unsigned char st1l;
	__BITS8 BIT;
};
union un_soe1l {
	unsigned char soe1l;
	__BITS8 BIT;
};
union un_te0l {
	unsigned char te0l;
	__BITS8 BIT;
};
union un_ts0l {
	unsigned char ts0l;
	__BITS8 BIT;
};
union un_tt0l {
	unsigned char tt0l;
	__BITS8 BIT;
};
union un_toe0l {
	unsigned char toe0l;
	__BITS8 BIT;
};
union un_dmc2 {
	unsigned char dmc2;
	__BITS8 BIT;
};
union un_dmc3 {
	unsigned char dmc3;
	__BITS8 BIT;
};
union un_drc2 {
	unsigned char drc2;
	__BITS8 BIT;
};
union un_drc3 {
	unsigned char drc3;
	__BITS8 BIT;
};
union un_iicctl00 {
	unsigned char iicctl00;
	__BITS8 BIT;
};
union un_iicctl01 {
	unsigned char iicctl01;
	__BITS8 BIT;
};
union un_crc0ctl {
	unsigned char crc0ctl;
	__BITS8 BIT;
};
union un_pfseg0 {
	unsigned char pfseg0;
	__BITS8 BIT;
};
union un_pfseg1 {
	unsigned char pfseg1;
	__BITS8 BIT;
};
union un_pfseg2 {
	unsigned char pfseg2;
	__BITS8 BIT;
};
union un_pfseg3 {
	unsigned char pfseg3;
	__BITS8 BIT;
};
union un_pfseg4 {
	unsigned char pfseg4;
	__BITS8 BIT;
};
union un_pfseg5 {
	unsigned char pfseg5;
	__BITS8 BIT;
};
union un_pfseg6 {
	unsigned char pfseg6;
	__BITS8 BIT;
};
union un_isclcd {
	unsigned char isclcd;
	__BITS8 BIT;
};
union un_compmdr {
	unsigned char compmdr;
	__BITS8 BIT;
};
union un_compfir {
	unsigned char compfir;
	__BITS8 BIT;
};
union un_compocr {
	unsigned char compocr;
	__BITS8 BIT;
};
union un_tkbtrg0 {
	unsigned char tkbtrg0;
	__BITS8 BIT;
};
union un_tkbflg0 {
	unsigned char tkbflg0;
	__BITS8 BIT;
};
union un_tkbioc00 {
	unsigned char tkbioc00;
	__BITS8 BIT;
};
union un_tkbclr0 {
	unsigned char tkbclr0;
	__BITS8 BIT;
};
union un_tkbioc01 {
	unsigned char tkbioc01;
	__BITS8 BIT;
};
union un_tkbctl01 {
	unsigned char tkbctl01;
	__BITS8 BIT;
};
union un_tkbpahfs0 {
	unsigned char tkbpahfs0;
	__BITS8 BIT;
};
union un_tkbpahft0 {
	unsigned char tkbpahft0;
	__BITS8 BIT;
};
union un_tkbpaflg0 {
	unsigned char tkbpaflg0;
	__BITS8 BIT;
};
union un_tkbpactl02 {
	unsigned char tkbpactl02;
	__BITS8 BIT;
};

#define ADM2 (*(volatile union un_adm2 *)0xF0010).adm2
#define ADM2_bit (*(volatile union un_adm2 *)0xF0010).BIT
#define ADUL (*(volatile unsigned char *)0xF0011)
#define ADLL (*(volatile unsigned char *)0xF0012)
#define ADTES (*(volatile unsigned char *)0xF0013)
#define PU0 (*(volatile union un_pu0 *)0xF0030).pu0
#define PU0_bit (*(volatile union un_pu0 *)0xF0030).BIT
#define PU1 (*(volatile union un_pu1 *)0xF0031).pu1
#define PU1_bit (*(volatile union un_pu1 *)0xF0031).BIT
#define PU2 (*(volatile union un_pu2 *)0xF0032).pu2
#define PU2_bit (*(volatile union un_pu2 *)0xF0032).BIT
#define PU3 (*(volatile union un_pu3 *)0xF0033).pu3
#define PU3_bit (*(volatile union un_pu3 *)0xF0033).BIT
#define PU4 (*(volatile union un_pu4 *)0xF0034).pu4
#define PU4_bit (*(volatile union un_pu4 *)0xF0034).BIT
#define PU5 (*(volatile union un_pu5 *)0xF0035).pu5
#define PU5_bit (*(volatile union un_pu5 *)0xF0035).BIT
#define PU7 (*(volatile union un_pu7 *)0xF0037).pu7
#define PU7_bit (*(volatile union un_pu7 *)0xF0037).BIT
#define PU12 (*(volatile union un_pu12 *)0xF003C).pu12
#define PU12_bit (*(volatile union un_pu12 *)0xF003C).BIT
#define PU13 (*(volatile union un_pu13 *)0xF003D).pu13
#define PU13_bit (*(volatile union un_pu13 *)0xF003D).BIT
#define PIM0 (*(volatile union un_pim0 *)0xF0040).pim0
#define PIM0_bit (*(volatile union un_pim0 *)0xF0040).BIT
#define PIM1 (*(volatile union un_pim1 *)0xF0041).pim1
#define PIM1_bit (*(volatile union un_pim1 *)0xF0041).BIT
#define PIM3 (*(volatile union un_pim3 *)0xF0043).pim3
#define PIM3_bit (*(volatile union un_pim3 *)0xF0043).BIT
#define PIM4 (*(volatile union un_pim4 *)0xF0044).pim4
#define PIM4_bit (*(volatile union un_pim4 *)0xF0044).BIT
#define PIM5 (*(volatile union un_pim5 *)0xF0045).pim5
#define PIM5_bit (*(volatile union un_pim5 *)0xF0045).BIT
#define POM0 (*(volatile union un_pom0 *)0xF0050).pom0
#define POM0_bit (*(volatile union un_pom0 *)0xF0050).BIT
#define POM1 (*(volatile union un_pom1 *)0xF0051).pom1
#define POM1_bit (*(volatile union un_pom1 *)0xF0051).BIT
#define POM3 (*(volatile union un_pom3 *)0xF0053).pom3
#define POM3_bit (*(volatile union un_pom3 *)0xF0053).BIT
#define POM4 (*(volatile union un_pom4 *)0xF0054).pom4
#define POM4_bit (*(volatile union un_pom4 *)0xF0054).BIT
#define POM5 (*(volatile union un_pom5 *)0xF0055).pom5
#define POM5_bit (*(volatile union un_pom5 *)0xF0055).BIT
#define POM13 (*(volatile union un_pom13 *)0xF005D).pom13
#define POM13_bit (*(volatile union un_pom13 *)0xF005D).BIT
#define PMC1 (*(volatile union un_pmc1 *)0xF0061).pmc1
#define PMC1_bit (*(volatile union un_pmc1 *)0xF0061).BIT
#define PMC2 (*(volatile union un_pmc2 *)0xF0062).pmc2
#define PMC2_bit (*(volatile union un_pmc2 *)0xF0062).BIT
#define PMC4 (*(volatile union un_pmc4 *)0xF0064).pmc4
#define PMC4_bit (*(volatile union un_pmc4 *)0xF0064).BIT
#define NFEN0 (*(volatile union un_nfen0 *)0xF0070).nfen0
#define NFEN0_bit (*(volatile union un_nfen0 *)0xF0070).BIT
#define NFEN1 (*(volatile union un_nfen1 *)0xF0071).nfen1
#define NFEN1_bit (*(volatile union un_nfen1 *)0xF0071).BIT
#define ISC (*(volatile union un_isc *)0xF0073).isc
#define ISC_bit (*(volatile union un_isc *)0xF0073).BIT
#define TIS0 (*(volatile unsigned char *)0xF0074)
#define ADPC (*(volatile unsigned char *)0xF0076)
#define PIOR (*(volatile unsigned char *)0xF0077)
#define IAWCTL (*(volatile unsigned char *)0xF0078)
#define TOS (*(volatile union un_tos *)0xF0079).tos
#define TOS_bit (*(volatile union un_tos *)0xF0079).BIT
#define PER1 (*(volatile union un_per1 *)0xF007A).per1
#define PER1_bit (*(volatile union un_per1 *)0xF007A).BIT
#define PMS (*(volatile union un_pms *)0xF007B).pms
#define PMS_bit (*(volatile union un_pms *)0xF007B).BIT
#define PWCTKB (*(volatile unsigned char *)0xF007C)
#define DFLCTL (*(volatile union un_dflctl *)0xF0090).dflctl
#define DFLCTL_bit (*(volatile union un_dflctl *)0xF0090).BIT
#define HOCODIV (*(volatile unsigned char *)0xF00A8)
#define TEMPCAL0 (*(volatile unsigned char *)0xF00AC)
#define TEMPCAL1 (*(volatile unsigned char *)0xF00AD)
#define TEMPCAL2 (*(volatile unsigned char *)0xF00AE)
#define TEMPCAL3 (*(volatile unsigned char *)0xF00AF)
#define MDCL (*(volatile unsigned short *)0xF00E0)
#define MDCH (*(volatile unsigned short *)0xF00E2)
#define MDUC (*(volatile union un_mduc *)0xF00E8).mduc
#define MDUC_bit (*(volatile union un_mduc *)0xF00E8).BIT
#define PER0 (*(volatile union un_per0 *)0xF00F0).per0
#define PER0_bit (*(volatile union un_per0 *)0xF00F0).BIT
#define OSMC (*(volatile unsigned char *)0xF00F3)
#define RMC (*(volatile union un_rmc *)0xF00F4).rmc
#define RMC_bit (*(volatile union un_rmc *)0xF00F4).BIT
#define RPECTL (*(volatile union un_rpectl *)0xF00F5).rpectl
#define RPECTL_bit (*(volatile union un_rpectl *)0xF00F5).BIT
#define PORSR (*(volatile union un_porsr *)0xF00F9).porsr
#define PORSR_bit (*(volatile union un_porsr *)0xF00F9).BIT
#define BCDADJ (*(volatile unsigned char *)0xF00FE)
#define SSR00 (*(volatile unsigned short *)0xF0100)
#define SSR00L (*(volatile unsigned char *)0xF0100)
#define SSR01 (*(volatile unsigned short *)0xF0102)
#define SSR01L (*(volatile unsigned char *)0xF0102)
#define SSR02 (*(volatile unsigned short *)0xF0104)
#define SSR02L (*(volatile unsigned char *)0xF0104)
#define SSR03 (*(volatile unsigned short *)0xF0106)
#define SSR03L (*(volatile unsigned char *)0xF0106)
#define SIR00 (*(volatile unsigned short *)0xF0108)
#define SIR00L (*(volatile unsigned char *)0xF0108)
#define SIR01 (*(volatile unsigned short *)0xF010A)
#define SIR01L (*(volatile unsigned char *)0xF010A)
#define SIR02 (*(volatile unsigned short *)0xF010C)
#define SIR02L (*(volatile unsigned char *)0xF010C)
#define SIR03 (*(volatile unsigned short *)0xF010E)
#define SIR03L (*(volatile unsigned char *)0xF010E)
#define SMR00 (*(volatile unsigned short *)0xF0110)
#define SMR01 (*(volatile unsigned short *)0xF0112)
#define SMR02 (*(volatile unsigned short *)0xF0114)
#define SMR03 (*(volatile unsigned short *)0xF0116)
#define SCR00 (*(volatile unsigned short *)0xF0118)
#define SCR01 (*(volatile unsigned short *)0xF011A)
#define SCR02 (*(volatile unsigned short *)0xF011C)
#define SCR03 (*(volatile unsigned short *)0xF011E)
#define SE0 (*(volatile unsigned short *)0xF0120)
#define SE0L (*(volatile union un_se0l *)0xF0120).se0l
#define SE0L_bit (*(volatile union un_se0l *)0xF0120).BIT
#define SS0 (*(volatile unsigned short *)0xF0122)
#define SS0L (*(volatile union un_ss0l *)0xF0122).ss0l
#define SS0L_bit (*(volatile union un_ss0l *)0xF0122).BIT
#define ST0 (*(volatile unsigned short *)0xF0124)
#define ST0L (*(volatile union un_st0l *)0xF0124).st0l
#define ST0L_bit (*(volatile union un_st0l *)0xF0124).BIT
#define SPS0 (*(volatile unsigned short *)0xF0126)
#define SPS0L (*(volatile unsigned char *)0xF0126)
#define SO0 (*(volatile unsigned short *)0xF0128)
#define SOE0 (*(volatile unsigned short *)0xF012A)
#define SOE0L (*(volatile union un_soe0l *)0xF012A).soe0l
#define SOE0L_bit (*(volatile union un_soe0l *)0xF012A).BIT
#define SOL0 (*(volatile unsigned short *)0xF0134)
#define SOL0L (*(volatile unsigned char *)0xF0134)
#define SSC0 (*(volatile unsigned short *)0xF0138)
#define SSC0L (*(volatile unsigned char *)0xF0138)
#define SSR10 (*(volatile unsigned short *)0xF0140)
#define SSR10L (*(volatile unsigned char *)0xF0140)
#define SSR11 (*(volatile unsigned short *)0xF0142)
#define SSR11L (*(volatile unsigned char *)0xF0142)
#define SSR12 (*(volatile unsigned short *)0xF0144)
#define SSR12L (*(volatile unsigned char *)0xF0144)
#define SSR13 (*(volatile unsigned short *)0xF0146)
#define SSR13L (*(volatile unsigned char *)0xF0146)
#define SIR10 (*(volatile unsigned short *)0xF0148)
#define SIR10L (*(volatile unsigned char *)0xF0148)
#define SIR11 (*(volatile unsigned short *)0xF014A)
#define SIR11L (*(volatile unsigned char *)0xF014A)
#define SIR12 (*(volatile unsigned short *)0xF014C)
#define SIR12L (*(volatile unsigned char *)0xF014C)
#define SIR13 (*(volatile unsigned short *)0xF014E)
#define SIR13L (*(volatile unsigned char *)0xF014E)
#define SMR10 (*(volatile unsigned short *)0xF0150)
#define SMR11 (*(volatile unsigned short *)0xF0152)
#define SMR12 (*(volatile unsigned short *)0xF0154)
#define SMR13 (*(volatile unsigned short *)0xF0156)
#define SCR10 (*(volatile unsigned short *)0xF0158)
#define SCR11 (*(volatile unsigned short *)0xF015A)
#define SCR12 (*(volatile unsigned short *)0xF015C)
#define SCR13 (*(volatile unsigned short *)0xF015E)
#define SE1 (*(volatile unsigned short *)0xF0160)
#define SE1L (*(volatile union un_se1l *)0xF0160).se1l
#define SE1L_bit (*(volatile union un_se1l *)0xF0160).BIT
#define SS1 (*(volatile unsigned short *)0xF0162)
#define SS1L (*(volatile union un_ss1l *)0xF0162).ss1l
#define SS1L_bit (*(volatile union un_ss1l *)0xF0162).BIT
#define ST1 (*(volatile unsigned short *)0xF0164)
#define ST1L (*(volatile union un_st1l *)0xF0164).st1l
#define ST1L_bit (*(volatile union un_st1l *)0xF0164).BIT
#define SPS1 (*(volatile unsigned short *)0xF0166)
#define SPS1L (*(volatile unsigned char *)0xF0166)
#define SO1 (*(volatile unsigned short *)0xF0168)
#define SOE1 (*(volatile unsigned short *)0xF016A)
#define SOE1L (*(volatile union un_soe1l *)0xF016A).soe1l
#define SOE1L_bit (*(volatile union un_soe1l *)0xF016A).BIT
#define SOL1 (*(volatile unsigned short *)0xF0174)
#define SOL1L (*(volatile unsigned char *)0xF0174)
#define SSC1 (*(volatile unsigned short *)0xF0178)
#define SSC1L (*(volatile unsigned char *)0xF0178)
#define TCR00 (*(volatile unsigned short *)0xF0180)
#define TCR01 (*(volatile unsigned short *)0xF0182)
#define TCR02 (*(volatile unsigned short *)0xF0184)
#define TCR03 (*(volatile unsigned short *)0xF0186)
#define TCR04 (*(volatile unsigned short *)0xF0188)
#define TCR05 (*(volatile unsigned short *)0xF018A)
#define TCR06 (*(volatile unsigned short *)0xF018C)
#define TCR07 (*(volatile unsigned short *)0xF018E)
#define TMR00 (*(volatile unsigned short *)0xF0190)
#define TMR01 (*(volatile unsigned short *)0xF0192)
#define TMR02 (*(volatile unsigned short *)0xF0194)
#define TMR03 (*(volatile unsigned short *)0xF0196)
#define TMR04 (*(volatile unsigned short *)0xF0198)
#define TMR05 (*(volatile unsigned short *)0xF019A)
#define TMR06 (*(volatile unsigned short *)0xF019C)
#define TMR07 (*(volatile unsigned short *)0xF019E)
#define TSR00 (*(volatile unsigned short *)0xF01A0)
#define TSR00L (*(volatile unsigned char *)0xF01A0)
#define TSR01 (*(volatile unsigned short *)0xF01A2)
#define TSR01L (*(volatile unsigned char *)0xF01A2)
#define TSR02 (*(volatile unsigned short *)0xF01A4)
#define TSR02L (*(volatile unsigned char *)0xF01A4)
#define TSR03 (*(volatile unsigned short *)0xF01A6)
#define TSR03L (*(volatile unsigned char *)0xF01A6)
#define TSR04 (*(volatile unsigned short *)0xF01A8)
#define TSR04L (*(volatile unsigned char *)0xF01A8)
#define TSR05 (*(volatile unsigned short *)0xF01AA)
#define TSR05L (*(volatile unsigned char *)0xF01AA)
#define TSR06 (*(volatile unsigned short *)0xF01AC)
#define TSR06L (*(volatile unsigned char *)0xF01AC)
#define TSR07 (*(volatile unsigned short *)0xF01AE)
#define TSR07L (*(volatile unsigned char *)0xF01AE)
#define TE0 (*(volatile unsigned short *)0xF01B0)
#define TE0L (*(volatile union un_te0l *)0xF01B0).te0l
#define TE0L_bit (*(volatile union un_te0l *)0xF01B0).BIT
#define TS0 (*(volatile unsigned short *)0xF01B2)
#define TS0L (*(volatile union un_ts0l *)0xF01B2).ts0l
#define TS0L_bit (*(volatile union un_ts0l *)0xF01B2).BIT
#define TT0 (*(volatile unsigned short *)0xF01B4)
#define TT0L (*(volatile union un_tt0l *)0xF01B4).tt0l
#define TT0L_bit (*(volatile union un_tt0l *)0xF01B4).BIT
#define TPS0 (*(volatile unsigned short *)0xF01B6)
#define TO0 (*(volatile unsigned short *)0xF01B8)
#define TO0L (*(volatile unsigned char *)0xF01B8)
#define TOE0 (*(volatile unsigned short *)0xF01BA)
#define TOE0L (*(volatile union un_toe0l *)0xF01BA).toe0l
#define TOE0L_bit (*(volatile union un_toe0l *)0xF01BA).BIT
#define TOL0 (*(volatile unsigned short *)0xF01BC)
#define TOL0L (*(volatile unsigned char *)0xF01BC)
#define TOM0 (*(volatile unsigned short *)0xF01BE)
#define TOM0L (*(volatile unsigned char *)0xF01BE)
#define DSA2 (*(volatile unsigned char *)0xF0200)
#define DSA3 (*(volatile unsigned char *)0xF0201)
#define DRA2 (*(volatile unsigned short *)0xF0202)
#define DRA2L (*(volatile unsigned char *)0xF0202)
#define DRA2H (*(volatile unsigned char *)0xF0203)
#define DRA3 (*(volatile unsigned short *)0xF0204)
#define DRA3L (*(volatile unsigned char *)0xF0204)
#define DRA3H (*(volatile unsigned char *)0xF0205)
#define DBC2 (*(volatile unsigned short *)0xF0206)
#define DBC2L (*(volatile unsigned char *)0xF0206)
#define DBC2H (*(volatile unsigned char *)0xF0207)
#define DBC3 (*(volatile unsigned short *)0xF0208)
#define DBC3L (*(volatile unsigned char *)0xF0208)
#define DBC3H (*(volatile unsigned char *)0xF0209)
#define DMC2 (*(volatile union un_dmc2 *)0xF020A).dmc2
#define DMC2_bit (*(volatile union un_dmc2 *)0xF020A).BIT
#define DMC3 (*(volatile union un_dmc3 *)0xF020B).dmc3
#define DMC3_bit (*(volatile union un_dmc3 *)0xF020B).BIT
#define DRC2 (*(volatile union un_drc2 *)0xF020C).drc2
#define DRC2_bit (*(volatile union un_drc2 *)0xF020C).BIT
#define DRC3 (*(volatile union un_drc3 *)0xF020D).drc3
#define DRC3_bit (*(volatile union un_drc3 *)0xF020D).BIT
#define IICCTL00 (*(volatile union un_iicctl00 *)0xF0230).iicctl00
#define IICCTL00_bit (*(volatile union un_iicctl00 *)0xF0230).BIT
#define IICCTL01 (*(volatile union un_iicctl01 *)0xF0231).iicctl01
#define IICCTL01_bit (*(volatile union un_iicctl01 *)0xF0231).BIT
#define IICWL0 (*(volatile unsigned char *)0xF0232)
#define IICWH0 (*(volatile unsigned char *)0xF0233)
#define SVA0 (*(volatile unsigned char *)0xF0234)
#define ELSELR00 (*(volatile unsigned char *)0xF0240)
#define ELSELR01 (*(volatile unsigned char *)0xF0241)
#define ELSELR02 (*(volatile unsigned char *)0xF0242)
#define ELSELR03 (*(volatile unsigned char *)0xF0243)
#define ELSELR04 (*(volatile unsigned char *)0xF0244)
#define ELSELR05 (*(volatile unsigned char *)0xF0245)
#define ELSELR06 (*(volatile unsigned char *)0xF0246)
#define ELSELR07 (*(volatile unsigned char *)0xF0247)
#define ELSELR08 (*(volatile unsigned char *)0xF0248)
#define ELSELR09 (*(volatile unsigned char *)0xF0249)
#define CRC0CTL (*(volatile union un_crc0ctl *)0xF02F0).crc0ctl
#define CRC0CTL_bit (*(volatile union un_crc0ctl *)0xF02F0).BIT
#define PGCRCL (*(volatile unsigned short *)0xF02F2)
#define CRCD (*(volatile unsigned short *)0xF02FA)
#define PFSEG0 (*(volatile union un_pfseg0 *)0xF0300).pfseg0
#define PFSEG0_bit (*(volatile union un_pfseg0 *)0xF0300).BIT
#define PFSEG1 (*(volatile union un_pfseg1 *)0xF0301).pfseg1
#define PFSEG1_bit (*(volatile union un_pfseg1 *)0xF0301).BIT
#define PFSEG2 (*(volatile union un_pfseg2 *)0xF0302).pfseg2
#define PFSEG2_bit (*(volatile union un_pfseg2 *)0xF0302).BIT
#define PFSEG3 (*(volatile union un_pfseg3 *)0xF0303).pfseg3
#define PFSEG3_bit (*(volatile union un_pfseg3 *)0xF0303).BIT
#define PFSEG4 (*(volatile union un_pfseg4 *)0xF0304).pfseg4
#define PFSEG4_bit (*(volatile union un_pfseg4 *)0xF0304).BIT
#define PFSEG5 (*(volatile union un_pfseg5 *)0xF0305).pfseg5
#define PFSEG5_bit (*(volatile union un_pfseg5 *)0xF0305).BIT
#define PFSEG6 (*(volatile union un_pfseg6 *)0xF0306).pfseg6
#define PFSEG6_bit (*(volatile union un_pfseg6 *)0xF0306).BIT
#define ISCLCD (*(volatile union un_isclcd *)0xF0308).isclcd
#define ISCLCD_bit (*(volatile union un_isclcd *)0xF0308).BIT
#define SUBCUD (*(volatile unsigned short *)0xF0310)
#define COMPMDR (*(volatile union un_compmdr *)0xF0340).compmdr
#define COMPMDR_bit (*(volatile union un_compmdr *)0xF0340).BIT
#define COMPFIR (*(volatile union un_compfir *)0xF0341).compfir
#define COMPFIR_bit (*(volatile union un_compfir *)0xF0341).BIT
#define COMPOCR (*(volatile union un_compocr *)0xF0342).compocr
#define COMPOCR_bit (*(volatile union un_compocr *)0xF0342).BIT
#define SEG0 (*(volatile unsigned char *)0xF0400)
#define SEG1 (*(volatile unsigned char *)0xF0401)
#define SEG2 (*(volatile unsigned char *)0xF0402)
#define SEG3 (*(volatile unsigned char *)0xF0403)
#define SEG4 (*(volatile unsigned char *)0xF0404)
#define SEG5 (*(volatile unsigned char *)0xF0405)
#define SEG6 (*(volatile unsigned char *)0xF0406)
#define SEG7 (*(volatile unsigned char *)0xF0407)
#define SEG8 (*(volatile unsigned char *)0xF0408)
#define SEG9 (*(volatile unsigned char *)0xF0409)
#define SEG10 (*(volatile unsigned char *)0xF040A)
#define SEG11 (*(volatile unsigned char *)0xF040B)
#define SEG12 (*(volatile unsigned char *)0xF040C)
#define SEG13 (*(volatile unsigned char *)0xF040D)
#define SEG14 (*(volatile unsigned char *)0xF040E)
#define SEG15 (*(volatile unsigned char *)0xF040F)
#define SEG16 (*(volatile unsigned char *)0xF0410)
#define SEG17 (*(volatile unsigned char *)0xF0411)
#define SEG18 (*(volatile unsigned char *)0xF0412)
#define SEG19 (*(volatile unsigned char *)0xF0413)
#define SEG20 (*(volatile unsigned char *)0xF0414)
#define SEG21 (*(volatile unsigned char *)0xF0415)
#define SEG22 (*(volatile unsigned char *)0xF0416)
#define SEG23 (*(volatile unsigned char *)0xF0417)
#define SEG24 (*(volatile unsigned char *)0xF0418)
#define SEG25 (*(volatile unsigned char *)0xF0419)
#define SEG26 (*(volatile unsigned char *)0xF041B)
#define SEG27 (*(volatile unsigned char *)0xF041C)
#define SEG28 (*(volatile unsigned char *)0xF041D)
#define SEG29 (*(volatile unsigned char *)0xF041E)
#define SEG30 (*(volatile unsigned char *)0xF041F)
#define SEG31 (*(volatile unsigned char *)0xF0420)
#define SEG32 (*(volatile unsigned char *)0xF0421)
#define SEG33 (*(volatile unsigned char *)0xF0422)
#define SEG34 (*(volatile unsigned char *)0xF0423)
#define SEG35 (*(volatile unsigned char *)0xF0424)
#define SEG36 (*(volatile unsigned char *)0xF0425)
#define SEG37 (*(volatile unsigned char *)0xF0426)
#define SEG38 (*(volatile unsigned char *)0xF0427)
#define SEG39 (*(volatile unsigned char *)0xF0428)
#define SEG40 (*(volatile unsigned char *)0xF0429)
#define SEG41 (*(volatile unsigned char *)0xF042A)
#define SEG42 (*(volatile unsigned char *)0xF042B)
#define SEG43 (*(volatile unsigned char *)0xF042C)
#define SEG44 (*(volatile unsigned char *)0xF042D)
#define SEG45 (*(volatile unsigned char *)0xF042E)
#define SEG46 (*(volatile unsigned char *)0xF042F)
#define SEG47 (*(volatile unsigned char *)0xF0430)
#define SEG48 (*(volatile unsigned char *)0xF0431)
#define SEG49 (*(volatile unsigned char *)0xF0432)
#define SEG50 (*(volatile unsigned char *)0xF0433)
#define TKBCR00 (*(volatile unsigned short *)0xF0500)
#define TKBCR01 (*(volatile unsigned short *)0xF0502)
#define TKBCR02 (*(volatile unsigned short *)0xF0504)
#define TKBCR03 (*(volatile unsigned short *)0xF0506)
#define TKBSIR00 (*(volatile unsigned short *)0xF050A)
#define TKBSIR01 (*(volatile unsigned short *)0xF050C)
#define TKBDNR00 (*(volatile unsigned char *)0xF050E)
#define TKBSSR00 (*(volatile unsigned char *)0xF050F)
#define TKBDNR01 (*(volatile unsigned char *)0xF0510)
#define TKBSSR01 (*(volatile unsigned char *)0xF0511)
#define TKBTRG0 (*(volatile union un_tkbtrg0 *)0xF0512).tkbtrg0
#define TKBTRG0_bit (*(volatile union un_tkbtrg0 *)0xF0512).BIT
#define TKBFLG0 (*(volatile union un_tkbflg0 *)0xF0513).tkbflg0
#define TKBFLG0_bit (*(volatile union un_tkbflg0 *)0xF0513).BIT
#define TKBCRLD00 (*(volatile unsigned short *)0xF0514)
#define TKBCRLD01 (*(volatile unsigned short *)0xF0516)
#define TKBCNT0 (*(volatile unsigned short *)0xF0520)
#define TKBCTL00 (*(volatile unsigned short *)0xF0522)
#define TKBMFR0 (*(volatile unsigned short *)0xF0524)
#define TKBIOC00 (*(volatile union un_tkbioc00 *)0xF0526).tkbioc00
#define TKBIOC00_bit (*(volatile union un_tkbioc00 *)0xF0526).BIT
#define TKBCLR0 (*(volatile union un_tkbclr0 *)0xF0527).tkbclr0
#define TKBCLR0_bit (*(volatile union un_tkbclr0 *)0xF0527).BIT
#define TKBIOC01 (*(volatile union un_tkbioc01 *)0xF0528).tkbioc01
#define TKBIOC01_bit (*(volatile union un_tkbioc01 *)0xF0528).BIT
#define TKBCTL01 (*(volatile union un_tkbctl01 *)0xF0529).tkbctl01
#define TKBCTL01_bit (*(volatile union un_tkbctl01 *)0xF0529).BIT
#define TKBPSCS0 (*(volatile unsigned char *)0xF052A)
#define TKBPACTL00 (*(volatile unsigned short *)0xF0530)
#define TKBPACTL01 (*(volatile unsigned short *)0xF0532)
#define TKBPAHFS0 (*(volatile union un_tkbpahfs0 *)0xF0534).tkbpahfs0
#define TKBPAHFS0_bit (*(volatile union un_tkbpahfs0 *)0xF0534).BIT
#define TKBPAHFT0 (*(volatile union un_tkbpahft0 *)0xF0535).tkbpahft0
#define TKBPAHFT0_bit (*(volatile union un_tkbpahft0 *)0xF0535).BIT
#define TKBPAFLG0 (*(volatile union un_tkbpaflg0 *)0xF0536).tkbpaflg0
#define TKBPAFLG0_bit (*(volatile union un_tkbpaflg0 *)0xF0536).BIT
#define TKBPACTL02 (*(volatile union un_tkbpactl02 *)0xF0537).tkbpactl02
#define TKBPACTL02_bit (*(volatile union un_tkbpactl02 *)0xF0537).BIT

/*
 Sfr bits
 */
#define ADTYP ADM2_bit.no0
#define AWC ADM2_bit.no2
#define ADRCK ADM2_bit.no3
#define TOS0 TOS_bit.no0
#define TKB2EN PER1_bit.no4
#define CMPEN PER1_bit.no5
#define TMKAEN PER1_bit.no7
#define DFLEN DFLCTL_bit.no0
#define DIVST MDUC_bit.no0
#define MACSF MDUC_bit.no1
#define MACOF MDUC_bit.no2
#define MDSM MDUC_bit.no3
#define MACMODE MDUC_bit.no6
#define DIVMODE MDUC_bit.no7
#define TAU0EN PER0_bit.no0
#define SAU0EN PER0_bit.no2
#define SAU1EN PER0_bit.no3
#define IICA0EN PER0_bit.no4
#define ADCEN PER0_bit.no5
#define RTCWEN PER0_bit.no7
#define WDVOL RMC_bit.no7
#define RPEF RPECTL_bit.no0
#define RPERDIS RPECTL_bit.no7
#define DWAIT2 DMC2_bit.no4
#define DS2 DMC2_bit.no5
#define DRS2 DMC2_bit.no6
#define STG2 DMC2_bit.no7
#define DWAIT3 DMC3_bit.no4
#define DS3 DMC3_bit.no5
#define DRS3 DMC3_bit.no6
#define STG3 DMC3_bit.no7
#define DST2 DRC2_bit.no0
#define DEN2 DRC2_bit.no7
#define DST3 DRC3_bit.no0
#define DEN3 DRC3_bit.no7
#define SPT0 IICCTL00_bit.no0
#define STT0 IICCTL00_bit.no1
#define ACKE0 IICCTL00_bit.no2
#define WTIM0 IICCTL00_bit.no3
#define SPIE0 IICCTL00_bit.no4
#define WREL0 IICCTL00_bit.no5
#define LREL0 IICCTL00_bit.no6
#define IICE0 IICCTL00_bit.no7
#define PRS0 IICCTL01_bit.no0
#define DFC0 IICCTL01_bit.no2
#define SMC0 IICCTL01_bit.no3
#define DAD0 IICCTL01_bit.no4
#define CLD0 IICCTL01_bit.no5
#define WUP0 IICCTL01_bit.no7
#define CRC0EN CRC0CTL_bit.no7
#define C0ENB COMPMDR_bit.no0
#define C0MON COMPMDR_bit.no3
#define C1ENB COMPMDR_bit.no4
#define C1MON COMPMDR_bit.no7
#define C0IE COMPOCR_bit.no0
#define C0OE COMPOCR_bit.no1
#define C0OP COMPOCR_bit.no2
#define C1IE COMPOCR_bit.no4
#define C1OE COMPOCR_bit.no5
#define C1OP COMPOCR_bit.no6
#define SPDMD COMPOCR_bit.no7
#define TKBRDT0 TKBTRG0_bit.no0
#define TKBRSF0 TKBFLG0_bit.no0
#define TKBMFF0 TKBFLG0_bit.no1
#define TKBIEF0 TKBFLG0_bit.no2
#define TKBIRF0 TKBFLG0_bit.no3
#define TKBSEF00 TKBFLG0_bit.no4
#define TKBSEF01 TKBFLG0_bit.no5
#define TKBSSF00 TKBFLG0_bit.no6
#define TKBSSF01 TKBFLG0_bit.no7
#define TKBTOD00 TKBIOC00_bit.no0
#define TKBTOD01 TKBIOC00_bit.no1
#define TKBTOL00 TKBIOC00_bit.no2
#define TKBTOL01 TKBIOC00_bit.no3
#define TKBCLMF0 TKBCLR0_bit.no1
#define TKBCLIE0 TKBCLR0_bit.no2
#define TKBCLIR0 TKBCLR0_bit.no3
#define TKBCLSE00 TKBCLR0_bit.no4
#define TKBCLSE01 TKBCLR0_bit.no5
#define TKBTOE00 TKBIOC01_bit.no0
#define TKBTOE01 TKBIOC01_bit.no1
#define TKBCE0 TKBCTL01_bit.no7
#define TKBPAHTS00 TKBPAHFS0_bit.no0
#define TKBPAHTS01 TKBPAHFS0_bit.no1
#define TKBPAHTT00 TKBPAHFT0_bit.no0
#define TKBPAHTT01 TKBPAHFT0_bit.no1
#define TKBPAHIF00 TKBPAFLG0_bit.no0
#define TKBPAFIF00 TKBPAFLG0_bit.no1
#define TKBPAHIF01 TKBPAFLG0_bit.no2
#define TKBPAFIF01 TKBPAFLG0_bit.no3
#define TKBPAHSF00 TKBPAFLG0_bit.no4
#define TKBPAFSF00 TKBPAFLG0_bit.no5
#define TKBPAHSF01 TKBPAFLG0_bit.no6
#define TKBPAFSF01 TKBPAFLG0_bit.no7
#define TKBPACE00 TKBPACTL02_bit.no0
#define TKBPACE01 TKBPACTL02_bit.no1

/*
 Interrupt vector addresses
 */
#endif
