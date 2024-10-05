/***********************************************************************
*
*  FILE        : sample.c
*  DATE        : 2024-10-02
*  DESCRIPTION : Main Program
*
*  NOTE:THIS IS A TYPICAL EXAMPLE.
*
***********************************************************************/
#include "r_smc_entry.h"

void main(void);

void main(void)
{
	PORTD.PODR.BIT.B6 = 1;
	PORTD.PODR.BIT.B7 = 1;

	R_Config_CMT0_Start();
	while(1)
	{
		; /* Blink LED0, LED1 Alternately by Interrupt */
	}
}
