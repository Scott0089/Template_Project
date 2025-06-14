#ifndef XPARAMETERS_H   /* prevent circular inclusions */
#define XPARAMETERS_H   /* by using protection macros */

//Note this file is modified from the Microblaze to work on Linux with our custom build. 
//All configurations save for address are updated, all MCU based defines are removed

/******************************************************************/

// No longer need STDIN and STOUT, trace compile errors from here/
//#define STDIN_BASEADDRESS 0x40600000
//#define STDOUT_BASEADDRESS 0x40600000

/******************************************************************/

/* Platform specific definitions */
//#define PLATFORM_RISCV
 
/* Definitions for sleep timer configuration */
//#define XSLEEP_TIMER_IS_DEFAULT_TIMER

/******************************************************************/

#define XPAR_XGPIO_NUM_INSTANCES 7

/* Definitions for peripheral CLKGEN_RST */
#define XPAR_CLKGEN_RST_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_CLKGEN_RST_BASEADDR 0x40080000
#define XPAR_CLKGEN_RST_HIGHADDR 0x4008ffff
#define XPAR_CLKGEN_RST_INTERRUPT_PRESENT 0x0
#define XPAR_CLKGEN_RST_IS_DUAL 0x0
#define XPAR_CLKGEN_RST_GPIO_WIDTH 0x1

/* Canonical definitions for peripheral CLKGEN_RST */
#define XPAR_XGPIO_0_BASEADDR 0x40080000
#define XPAR_XGPIO_0_HIGHADDR 0x4008ffff
#define XPAR_XGPIO_0_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_XGPIO_0_GPIO_WIDTH 0x1
#define XPAR_XGPIO_0_INTERRUPT_PRESENT 0x0
#define XPAR_XGPIO_0_IS_DUAL 0x0

/* Definitions for peripheral CT_CTRL_GPIO */
#define XPAR_CT_CTRL_GPIO_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_CT_CTRL_GPIO_BASEADDR 0x40040000
#define XPAR_CT_CTRL_GPIO_HIGHADDR 0x4004ffff
#define XPAR_CT_CTRL_GPIO_INTERRUPT_PRESENT 0x0
#define XPAR_CT_CTRL_GPIO_IS_DUAL 0x0
#define XPAR_CT_CTRL_GPIO_GPIO_WIDTH 0x2

/* Canonical definitions for peripheral CT_CTRL_GPIO */
#define XPAR_XGPIO_1_BASEADDR 0x40040000
#define XPAR_XGPIO_1_HIGHADDR 0x4004ffff
#define XPAR_XGPIO_1_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_XGPIO_1_GPIO_WIDTH 0x2
#define XPAR_XGPIO_1_INTERRUPT_PRESENT 0x0
#define XPAR_XGPIO_1_IS_DUAL 0x0

/* Definitions for peripheral RED_LED */
#define XPAR_RED_LED_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_RED_LED_BASEADDR 0x40000000
#define XPAR_RED_LED_HIGHADDR 0x4000ffff
#define XPAR_RED_LED_INTERRUPT_PRESENT 0x0
#define XPAR_RED_LED_IS_DUAL 0x0
#define XPAR_RED_LED_GPIO_WIDTH 0x4

/* Canonical definitions for peripheral RED_LED */
#define XPAR_XGPIO_2_BASEADDR 0x40000000
#define XPAR_XGPIO_2_HIGHADDR 0x4000ffff
#define XPAR_XGPIO_2_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_XGPIO_2_GPIO_WIDTH 0x4
#define XPAR_XGPIO_2_INTERRUPT_PRESENT 0x0
#define XPAR_XGPIO_2_IS_DUAL 0x0

/* Definitions for peripheral RGB_LEDS */
#define XPAR_RGB_LEDS_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_RGB_LEDS_BASEADDR 0x40010000
#define XPAR_RGB_LEDS_HIGHADDR 0x4001ffff
#define XPAR_RGB_LEDS_INTERRUPT_PRESENT 0x0
#define XPAR_RGB_LEDS_IS_DUAL 0x1
#define XPAR_RGB_LEDS_GPIO_WIDTH 0x3

/* Canonical definitions for peripheral RGB_LEDS */
#define XPAR_XGPIO_3_BASEADDR 0x40010000
#define XPAR_XGPIO_3_HIGHADDR 0x4001ffff
#define XPAR_XGPIO_3_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_XGPIO_3_GPIO_WIDTH 0x3
#define XPAR_XGPIO_3_INTERRUPT_PRESENT 0x0
#define XPAR_XGPIO_3_IS_DUAL 0x1

/* Definitions for peripheral SDI_TX_RST */
#define XPAR_SDI_TX_RST_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_SDI_TX_RST_BASEADDR 0x40070000
#define XPAR_SDI_TX_RST_HIGHADDR 0x4007ffff
#define XPAR_SDI_TX_RST_INTERRUPT_PRESENT 0x0
#define XPAR_SDI_TX_RST_IS_DUAL 0x0
#define XPAR_SDI_TX_RST_GPIO_WIDTH 0x1

/* Canonical definitions for peripheral SDI_TX_RST */
#define XPAR_XGPIO_4_BASEADDR 0x40070000
#define XPAR_XGPIO_4_HIGHADDR 0x4007ffff
#define XPAR_XGPIO_4_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_XGPIO_4_GPIO_WIDTH 0x1
#define XPAR_XGPIO_4_INTERRUPT_PRESENT 0x0
#define XPAR_XGPIO_4_IS_DUAL 0x0

/* Definitions for peripheral SFP1_TDIS */
#define XPAR_SFP1_TDIS_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_SFP1_TDIS_BASEADDR 0x40090000
#define XPAR_SFP1_TDIS_HIGHADDR 0x4009ffff
#define XPAR_SFP1_TDIS_INTERRUPT_PRESENT 0x0
#define XPAR_SFP1_TDIS_IS_DUAL 0x0
#define XPAR_SFP1_TDIS_GPIO_WIDTH 0x1

/* Canonical definitions for peripheral SFP1_TDIS */
#define XPAR_XGPIO_5_BASEADDR 0x40090000
#define XPAR_XGPIO_5_HIGHADDR 0x4009ffff
#define XPAR_XGPIO_5_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_XGPIO_5_GPIO_WIDTH 0x1
#define XPAR_XGPIO_5_INTERRUPT_PRESENT 0x0
#define XPAR_XGPIO_5_IS_DUAL 0x0

/* Definitions for peripheral TPG_RST */
#define XPAR_TPG_RST_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_TPG_RST_BASEADDR 0x40050000
#define XPAR_TPG_RST_HIGHADDR 0x4005ffff
#define XPAR_TPG_RST_INTERRUPT_PRESENT 0x0
#define XPAR_TPG_RST_IS_DUAL 0x0
#define XPAR_TPG_RST_GPIO_WIDTH 0x1

/* Canonical definitions for peripheral TPG_RST */
#define XPAR_XGPIO_6_BASEADDR 0x40050000
#define XPAR_XGPIO_6_HIGHADDR 0x4005ffff
#define XPAR_XGPIO_6_COMPATIBLE "xlnx,axi-gpio-2.0"
#define XPAR_XGPIO_6_GPIO_WIDTH 0x1
#define XPAR_XGPIO_6_INTERRUPT_PRESENT 0x0
#define XPAR_XGPIO_6_IS_DUAL 0x0

#define XPAR_XIIC_NUM_INSTANCES 2

/* Definitions for peripheral CLKGEN_IIC */
#define XPAR_CLKGEN_IIC_COMPATIBLE "xlnx,axi-iic-2.1"
#define XPAR_CLKGEN_IIC_BASEADDR 0x400a0000
#define XPAR_CLKGEN_IIC_HIGHADDR 0x400affff
#define XPAR_CLKGEN_IIC_TEN_BIT_ADR 0x0
#define XPAR_CLKGEN_IIC_GPO_WIDTH 0x1

/* Canonical definitions for peripheral CLKGEN_IIC */
#define XPAR_XIIC_0_BASEADDR 0x400a0000
#define XPAR_XIIC_0_HIGHADDR 0x400affff
#define XPAR_XIIC_0_COMPATIBLE "xlnx,axi-iic-2.1"
#define XPAR_XIIC_0_GPO_WIDTH 0x1
#define XPAR_XIIC_0_TEN_BIT_ADR 0x0

/* Definitions for peripheral SFP1_IIC */
#define XPAR_SFP1_IIC_COMPATIBLE "xlnx,axi-iic-2.1"
#define XPAR_SFP1_IIC_BASEADDR 0x400b0000
#define XPAR_SFP1_IIC_HIGHADDR 0x400bffff
#define XPAR_SFP1_IIC_TEN_BIT_ADR 0x0
#define XPAR_SFP1_IIC_GPO_WIDTH 0x1

/* Canonical definitions for peripheral SFP1_IIC */
#define XPAR_XIIC_1_BASEADDR 0x400b0000
#define XPAR_XIIC_1_HIGHADDR 0x400bffff
#define XPAR_XIIC_1_COMPATIBLE "xlnx,axi-iic-2.1"
#define XPAR_XIIC_1_GPO_WIDTH 0x1
#define XPAR_XIIC_1_TEN_BIT_ADR 0x0

#define XPAR_XSYSMON_NUM_INSTANCES 1

/* Definitions for peripheral SYSTEM_MANAGEMENT_WIZ_0 */
#define XPAR_SYSTEM_MANAGEMENT_WIZ_0_COMPATIBLE "xlnx,system-management-wiz-1.3"
#define XPAR_SYSTEM_MANAGEMENT_WIZ_0_BASEADDR 0x40030000
#define XPAR_SYSTEM_MANAGEMENT_WIZ_0_HIGHADDR 0x4003ffff
#define XPAR_SYSTEM_MANAGEMENT_WIZ_0_INCLUDE_INTR 0x1
#define XPAR_SYSTEM_MANAGEMENT_WIZ_0_IP_TYPE 0x1

/* Canonical definitions for peripheral SYSTEM_MANAGEMENT_WIZ_0 */
#define XPAR_XSYSMON_0_BASEADDR 0x40030000
#define XPAR_XSYSMON_0_HIGHADDR 0x4003ffff
#define XPAR_XSYSMON_0_COMPATIBLE "xlnx,system-management-wiz-1.3"
#define XPAR_XSYSMON_0_INCLUDE_INTR 0x1
#define XPAR_XSYSMON_0_IP_TYPE 0x1

#define XPAR_XTMRCTR_NUM_INSTANCES 1

/* Definitions for peripheral AXI_TIMER_0 */
#define XPAR_AXI_TIMER_0_COMPATIBLE "xlnx,axi-timer-2.0"
#define XPAR_AXI_TIMER_0_BASEADDR 0x40020000
#define XPAR_AXI_TIMER_0_HIGHADDR 0x4002ffff
#define XPAR_AXI_TIMER_0_CLOCK_FREQUENCY 0x5f5e100

/* Canonical definitions for peripheral AXI_TIMER_0 */
#define XPAR_XTMRCTR_0_BASEADDR 0x40020000
#define XPAR_XTMRCTR_0_HIGHADDR 0x4002ffff
#define XPAR_XTMRCTR_0_COMPATIBLE "xlnx,axi-timer-2.0"
#define XPAR_XTMRCTR_0_CLOCK_FREQUENCY 0x5f5e100

#define XPAR_XV_SDITX_NUM_INSTANCES 1

/* Definitions for peripheral V_SMPTE_UHDSDI_TX_SS_0_V_SMPTE_UHDSDI_TX */
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_V_SMPTE_UHDSDI_TX_COMPATIBLE "xlnx,v-smpte-uhdsdi-tx-1.0"
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_V_SMPTE_UHDSDI_TX_BASEADDR 0x0
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_V_SMPTE_UHDSDI_TX_HIGHADDR 0xffff
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_V_SMPTE_UHDSDI_TX_INCLUDE_EDH 0x0
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_V_SMPTE_UHDSDI_TX_SDILINE_RATE 0x2
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_V_SMPTE_UHDSDI_TX_C_STR_ST352 0x0

/* Canonical definitions for peripheral V_SMPTE_UHDSDI_TX_SS_0_V_SMPTE_UHDSDI_TX */
#define XPAR_XV_SDITX_0_BASEADDR 0x0
#define XPAR_XV_SDITX_0_HIGHADDR 0xffff
#define XPAR_XV_SDITX_0_COMPATIBLE "xlnx,v-smpte-uhdsdi-tx-1.0"
#define XPAR_XV_SDITX_0_C_STR_ST352 0x0
#define XPAR_XV_SDITX_0_INCLUDE_EDH 0x0
#define XPAR_XV_SDITX_0_SDILINE_RATE 0x2

#define XPAR_XV_SDITXSS_NUM_INSTANCES 1

/* Definitions for peripheral V_SMPTE_UHDSDI_TX_SS_0 */
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_COMPATIBLE "xlnx,v-smpte-uhdsdi-tx-ss-2.0"
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_BASEADDR 0x400c0000
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_HIGHADDR 0x400dffff
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_PIXELS_PER_CLOCK 0x2
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_SDILINE_RATE 0x2
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_ISSTD_352 0x1
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_BPP 0xa
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_SDITX_PRESENT 0x1
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_SDITX_CONNECTED 0x0
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_SDIVTC_PRESENT 0x1
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_SDIVTC_CONNECTED 0x10000

/* Canonical definitions for peripheral V_SMPTE_UHDSDI_TX_SS_0 */
#define XPAR_XV_SDITXSS_0_BASEADDR 0x400c0000
#define XPAR_XV_SDITXSS_0_HIGHADDR 0x400dffff
#define XPAR_XV_SDITXSS_0_ISSTD_352 0x1
#define XPAR_XV_SDITXSS_0_BPP 0xa
#define XPAR_XV_SDITXSS_0_COMPATIBLE "xlnx,v-smpte-uhdsdi-tx-ss-2.0"
#define XPAR_XV_SDITXSS_0_PIXELS_PER_CLOCK 0x2
#define XPAR_XV_SDITXSS_0_SDILINE_RATE 0x2
#define XPAR_XV_SDITXSS_0_SDITX_PRESENT 0x1
#define XPAR_XV_SDITXSS_0_SDITX_CONNECTED 0x0
#define XPAR_XV_SDITXSS_0_SDIVTC_PRESENT 0x1
#define XPAR_XV_SDITXSS_0_SDIVTC_CONNECTED 0x10000

#define XPAR_XV_TPG_NUM_INSTANCES 1

/* Definitions for peripheral V_TPG_0 */
#define XPAR_V_TPG_0_COMPATIBLE "xlnx,v-tpg-8.2"
#define XPAR_V_TPG_0_BASEADDR 0x40060000
#define XPAR_V_TPG_0_HIGHADDR 0x4006ffff
#define XPAR_V_TPG_0_AXI4S_SLAVE 0x0
#define XPAR_V_TPG_0_SAMPLES_PER_CLOCK 0x1
#define XPAR_V_TPG_0_NUM_VIDEO_COMPONENTS 0x3
#define XPAR_V_TPG_0_MAX_COLS 0x1000
#define XPAR_V_TPG_0_MAX_ROWS 0x870
#define XPAR_V_TPG_0_MAX_DATA_WIDTH 0x8
#define XPAR_V_TPG_0_SOLID_COLOR 0x1
#define XPAR_V_TPG_0_RAMP 0x1
#define XPAR_V_TPG_0_COLOR_BAR 0x1
#define XPAR_V_TPG_0_DISPLAY_PORT 0x1
#define XPAR_V_TPG_0_COLOR_SWEEP 0x1
#define XPAR_V_TPG_0_ZONE_PLATE 0x1
#define XPAR_V_TPG_0_FOREGROUND 0x1

/* Canonical definitions for peripheral V_TPG_0 */
#define XPAR_XV_TPG_0_BASEADDR 0x40060000
#define XPAR_XV_TPG_0_HIGHADDR 0x4006ffff
#define XPAR_XV_TPG_0_AXI4S_SLAVE 0x0
#define XPAR_XV_TPG_0_COMPATIBLE "xlnx,v-tpg-8.2"
#define XPAR_XV_TPG_0_COLOR_BAR 0x1
#define XPAR_XV_TPG_0_COLOR_SWEEP 0x1
#define XPAR_XV_TPG_0_DISPLAY_PORT 0x1
#define XPAR_XV_TPG_0_FOREGROUND 0x1
#define XPAR_XV_TPG_0_MAX_COLS 0x1000
#define XPAR_XV_TPG_0_MAX_ROWS 0x870
#define XPAR_XV_TPG_0_MAX_DATA_WIDTH 0x8
#define XPAR_XV_TPG_0_NUM_VIDEO_COMPONENTS 0x3
#define XPAR_XV_TPG_0_RAMP 0x1
#define XPAR_XV_TPG_0_SAMPLES_PER_CLOCK 0x1
#define XPAR_XV_TPG_0_SOLID_COLOR 0x1
#define XPAR_XV_TPG_0_ZONE_PLATE 0x1

#define XPAR_XVTC_NUM_INSTANCES 1

/* Definitions for peripheral V_SMPTE_UHDSDI_TX_SS_0_V_TC */
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_V_TC_COMPATIBLE "xlnx,v-tc-6.2"
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_V_TC_BASEADDR 0x10000
#define XPAR_V_SMPTE_UHDSDI_TX_SS_0_V_TC_HIGHADDR 0x1ffff

/* Canonical definitions for peripheral V_SMPTE_UHDSDI_TX_SS_0_V_TC */
#define XPAR_XVTC_0_BASEADDR 0x10000
#define XPAR_XVTC_0_HIGHADDR 0x1ffff
#define XPAR_XVTC_0_COMPATIBLE "xlnx,v-tc-6.2"

#endif  /* end of protection macro */
