#include "board_init.h"

#include "board.h"
#include "pin_mux.h"
#include "fsl_sctimer.h"

/* ----------------------------------------------------------------------------- */
/* -------------------------------- API FUNCTIONS ------------------------------ */
/* ----------------------------------------------------------------------------- */

void BOARD_InitPWM(void)
{
    sctimer_config_t config;
    sctimer_pwm_signal_param_t pwmParam;
    uint32_t event;

    CLOCK_AttachClk(kMAIN_CLK_to_SCT_CLK);
    CLOCK_SetClkDiv(kCLOCK_DivSctClk, 2, true);
    SCTIMER_GetDefaultConfig(&config);
    SCTIMER_Init(SCT0, &config);

    pwmParam.output = kSCTIMER_Out_5;
    pwmParam.level = kSCTIMER_HighTrue;
    pwmParam.dutyCyclePercent = LCD_BACKLIGHT_PWM_PERCENT;

    SCTIMER_SetupPwm(SCT0, &pwmParam, kSCTIMER_CenterAlignedPwm, 1000U, CLOCK_GetFreq(kCLOCK_Sct), &event);
    SCTIMER_StartTimer(SCT0, kSCTIMER_Counter_L);
}

void BOARD_Init(void)
{
	/* Debug console clock */
	CLOCK_AttachClk(BOARD_DEBUG_UART_CLK_ATTACH);

	/* Route main clock to LCD. */
	CLOCK_AttachClk(kMAIN_CLK_to_LCD_CLK);

	/* Attach 12 MHz clock to FLEXCOMM2 (I2C master for touch controller) */
	CLOCK_AttachClk(kFRO12M_to_FLEXCOMM2);

	CLOCK_EnableClock(kCLOCK_Gpio2);
	CLOCK_SetClkDiv(kCLOCK_DivLcdClk, 1, true);

	BOARD_InitBootPins();
	BOARD_BootClockPLL220M();
	BOARD_InitDebugConsole();
	BOARD_InitSDRAM();
}
