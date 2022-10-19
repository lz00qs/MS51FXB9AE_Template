//#include "MS51_16K.h"
#include "UserMacro.h"

void main(void)
{
	uint8_t i = 0;
	/* UART0 initial setting
	 * include sys.c in Library for modify HIRC value to 24MHz
	 * include uart.c in Library for UART initial setting
	 */
	MODIFY_HIRC(HIRC_24);
	P06_PUSHPULL_MODE; // for uart0 TX
	P04_PUSHPULL_MODE;
	UART0Tim3Open(115200);
	ENABLE_UART0_PRINTF;

	while (1)
	{
		printf("\n Hello world!");
		i = ~i;
		P04 = i;
		Timer2Delay1ms(1000);
	}
}