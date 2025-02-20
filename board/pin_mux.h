/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define IOCON_PIO_DIGITAL_EN 0x0100u    /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC0 0x00u           /*!<@brief Selects pin function 0 */
#define IOCON_PIO_FUNC1 0x01u           /*!<@brief Selects pin function 1 */
#define IOCON_PIO_FUNC6 0x06u           /*!<@brief Selects pin function 6 */
#define IOCON_PIO_I2CDRIVE_HIGH 0x0400u /*!<@brief High drive: 20 mA */
#define IOCON_PIO_I2CFILTER_EN 0x00u    /*!<@brief I2C 50 ns glitch filter enabled */
#define IOCON_PIO_I2CSLEW_I2C 0x00u     /*!<@brief I2C mode */
#define IOCON_PIO_INPFILT_OFF 0x0200u   /*!<@brief Input filter disabled */
#define IOCON_PIO_INV_DI 0x00u          /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u      /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLUP 0x20u     /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u    /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_FAST 0x0400u     /*!<@brief Fast mode, slew rate control is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u   /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name FC0_TXD_SCL_MISO (coord A2), U24[12]/P0_30-ISP_FC0_TXD
  @{ */
/* @} */

/*! @name FC0_RXD_SDA_MOSI (coord B13), U24[13]/P0_29-ISP_FC0_RXD
  @{ */
/* @} */

/*! @name EMC_D(5) (coord H12), U28[D9]/RP5[3]/P0_7-EMC_D5
  @{ */
/* @} */

/*! @name EMC_D(6) (coord H10), U28[D8]/RP5[2]/P0_8-EMC_D6
  @{ */
/* @} */

/*! @name EMC_D(7) (coord G12), U28[E9]/RP5[1]/P0_9-EMC_D7
  @{ */
/* @} */

/*! @name EMC_WEN (coord L4), U28[F9]/P0_15-EMC_WEn
  @{ */
/* @} */

/*! @name EMC_A(0) (coord C14), U28[H7]/P0_18-EMC_A0
  @{ */
/* @} */

/*! @name EMC_A(1) (coord C6), U28[H8]/P0_19-EMC_A1
  @{ */
/* @} */

/*! @name EMC_A(2) (coord D13), U28[J8]/P0_20-EMC_A2
  @{ */
/* @} */

/*! @name EMC_A(3) (coord C13), U28[J7]/P0_21-EMC_A3
  @{ */
/* @} */

/*! @name EMC_D(11) (coord D4), U28[C2]/RP4[1]/P1_4-EMC_D11
  @{ */
/* @} */

/*! @name EMC_A(4) (coord E4), U28[J3]/P1_5-EMC_A4
  @{ */
/* @} */

/*! @name EMC_A(5) (coord G4), U28[J2]/P1_6-EMC_A5
  @{ */
/* @} */

/*! @name EMC_A(6) (coord N1), U28[H3]/P1_7-EMC_A6
  @{ */
/* @} */

/*! @name EMC_A(7) (coord P8), U28[H2]/P1_8-EMC_A7
  @{ */
/* @} */

/*! @name EMC_CASN (coord K6), U28[F7]/P1_9-EMC_CASn
  @{ */
/* @} */

/*! @name EMC_D(8) (coord L1), U28[E1]/RP4[4]/P1_19-EMC_D8
  @{ */
/* @} */

/*! @name EMC_D(9) (coord M1), U28[D2]/RP4[3]/P1_20-EMC_D9
  @{ */
/* @} */

/*! @name EMC_D(10) (coord N8), U28[D1]/RP4[2]/P1_21-EMC_D10
  @{ */
/* @} */

/*! @name EMC_RASN (coord N9), U28[F8]/P1_10-EMC_RASn
  @{ */
/* @} */

/*! @name EMC_CLK(0) (coord B4), U28[F2]/P1_11-EMC_CLK0
  @{ */
/* @} */

/*! @name EMC_DYCSN(0) (coord K9), U28[G9]/P1_12-EMC_DYCSn0
  @{ */
/* @} */

/*! @name EMC_DQM(0) (coord G10), U28[E8]/P1_13-EMC_DQM0
  @{ */
/* @} */

/*! @name EMC_DQM(1) (coord C12), U28[F1]/P1_14-EMC_DQM1
  @{ */
/* @} */

/*! @name EMC_CKE(0) (coord A11), U28[F3]/P1_15-EMC_CKE0
  @{ */
/* @} */

/*! @name EMC_A(10) (coord B7), U28[H9]/P1_16-EMC_A10
  @{ */
/* @} */

/*! @name EMC_A(11) (coord M10), U28[G2]/P1_23-EMC_A11
  @{ */
/* @} */

/*! @name EMC_A(12) (coord N14), U28[G1]/P1_24-EMC_A12
  @{ */
/* @} */

/*! @name EMC_A(13) (coord M12), U28[G7]/P1_25-EMC_A13
  @{ */
/* @} */

/*! @name EMC_D(12) (coord E12), U28[C1]/RP2[4]/P1_28-EMC_D12
  @{ */
/* @} */

/*! @name EMC_D(13) (coord C11), U28[B2]/RP2[3]/P1_29-EMC_D13
  @{ */
/* @} */

/*! @name EMC_D(14) (coord A8), U28[B1]/RP2[2]/P1_30-EMC_D14
  @{ */
/* @} */

/*! @name EMC_D(15) (coord C5), U28[A2]/RP2[1]/P1_31-EMC_D15
  @{ */
/* @} */

/*! @name EMC_A(8) (coord J10), U28[H1]/P1_26-EMC_A8
  @{ */
/* @} */

/*! @name EMC_A(9) (coord F10), U28[G3]/P1_27-EMC_A9
  @{ */
/* @} */

/*! @name EMC_A(14) (coord P9), U28[G8]/P3_25-EMC_A14
  @{ */
/* @} */

/*! @name LCD_PWR (coord K3), J16[31]/P2_11-LCD_PWR
  @{ */
/* @} */

/*! @name LCD_DCLK (coord P7), J16[30]/P2_13-LCD_DCLK
  @{ */
/* @} */

/*! @name LCD_FP (coord L7), J16[33]/P2_14-LCD_FP
  @{ */
/* @} */

/*! @name LCD_AC (coord M8), J16[34]/P2_15-LCD_AC_ENAB_M
  @{ */
/* @} */

/*! @name LCD_LP (coord L8), J16[32]/P2_16-LCD_LP
  @{ */
/* @} */

/*! @name LCD_VD(3) (coord L10), J16[8]/P2_21-LCD_VD3
  @{ */
/* @} */

/*! @name LCD_VD(4) (coord K10), J16[9]/P2_22-LCD_VD4
  @{ */
/* @} */

/*! @name LCD_VD(5) (coord M14), J16[10]/P2_23-LCD_VD5
  @{ */
/* @} */

/*! @name LCD_VD(6) (coord K14), J16[11]/P2_24-LCD_VD6
  @{ */
/* @} */

/*! @name LCD_VD(7) (coord J11), J16[12]/P2_25-LCD_VD7
  @{ */
/* @} */

/*! @name LCD_VD(10) (coord G13), J16[15]/P2_28-LCD_VD10
  @{ */
/* @} */

/*! @name LCD_VD(11) (coord G11), J16[16]/P2_29-LCD_VD11
  @{ */
/* @} */

/*! @name LCD_VD(12) (coord F12), J16[17]/P2_30-LCD_VD12
  @{ */
/* @} */

/*! @name LCD_VD(13) (coord D14), J16[18]/P2_31-LCD_VD13
  @{ */
/* @} */

/*! @name LCD_VD(14) (coord D12), J16[19]/JS36[1]/P3_0-LCD_VD14
  @{ */
/* @} */

/*! @name LCD_VD(15) (coord D11), J16[20]/JS33[1]/P3_1-LCD_VD15
  @{ */
/* @} */

/*! @name LCD_VD(19) (coord B10), J16[24]/P3_5-LCD_VD19
  @{ */
/* @} */

/*! @name LCD_VD(20) (coord C9), J16[25]/P3_6-LCD_VD20
  @{ */
/* @} */

/*! @name LCD_VD(21) (coord B8), J16[26]/P3_7-LCD_VD21
  @{ */
/* @} */

/*! @name LCD_VD(22) (coord A7), J16[27]/P3_8-LCD_VD22
  @{ */
/* @} */

/*! @name LCD_VD(23) (coord C7), J16[28]/P3_9-LCD_VD23
  @{ */
/* @} */

/*! @name FC2_CTS_SDA_SSEL0 (coord C2), J11[10]/J9[3]/U10[3]/J17[5]/U19[10]/P3_23-FC2_SDAX
  @{ */
/* @} */

/*! @name FC2_RTS_SCL_SSEL1 (coord E2), J11[9]/J9[1]/U10[2]/J17[4]/U19[2]/P3_24-FC2_SCLX
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M4F */

#define PIO331_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO331_FUNC_ALT2 0x02u        /*!<@brief Selects pin function.: Alternative connection 2. */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_UserPins(void); /* Function assigned for the Cortex-M4F */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
