#include <stdio.h>
#include <string.h>
#include "board.h"
#include "board_init.h"

#include "emwin_support.h"
#include "GUI.h"
#include "BUTTON.h"

static void cbBackgroundWin(WM_MESSAGE *pMsg)
{
    switch (pMsg->MsgId) {
    case WM_PAINT:
    	GUI_SetBkColor(GUI_LIGHTBLUE);
    	GUI_Clear();
    default:
            WM_DefaultProc(pMsg);
    }
}

int main(void)
{
	/* Board initialization */
	BOARD_Init();
    /* Set the backlight PWM. */
    BOARD_InitPWM();

    /* emWin start */
    GUI_Init();

    /* Set size and default color for the background window */
    WM_SetSize(WM_HBKWIN, LCD_WIDTH, LCD_HEIGHT);
    WM_SetDesktopColor(GUI_WHITE);

    /* Set callback for the backgroung window */
    WM_SetCallback(WM_HBKWIN, cbBackgroundWin);

    WM_Exec();

    while (1) {
        /* Poll touch controller for update */
        if (BOARD_Touch_Poll()) {
            GUI_MULTIBUF_Begin();
            WM_Exec();
            GUI_MULTIBUF_End();
        }
    }
}
