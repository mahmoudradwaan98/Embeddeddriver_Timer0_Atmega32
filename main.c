/*
 *  Application : main.c
 *
 *  Created on : April 23, 2023
 *  Author     : Mahmoud Radwan
 *	version    : 1.0
 */

#include "STD_TYPES.h"
#include "BIT_MATHS.h"

#include"PORT_interface.h"
#include "DIO_interface.h"
#include "timer1_interface.h"
#include "GIE_interface.h"

#include <util/delay.h>

void main(void){

	/* Fast PWM example using Timer 1 for led intensity , set pin OC1A output direction (Port D5) */  
	PORT_voidInit();

	TIMER1_voidInit();
	
	void TIMER1_voidSetTopValue(20000);

	u8 Local_u8counter;

	while(1){
		
		for(Local_u8counter=750;Local_u8counter<2500;Local_u8counter++){
			
			TIMER1_voidSetCompareMatchValueChannel_1A(Local_u8counter);
			_delay_ms(10);
		}
	
	}

}