#ifndef __USER_MACRO_H
#define __USER_MACRO_H
#include "MS51_16K.h"
// all for 24MHz
#define Timer2Delay1ms(x) Timer2_Delay(24000000, 128, x, 1000)
#define UART0Tim3Open(x) UART_Open(24000000, UART0_Timer3, x)
#endif