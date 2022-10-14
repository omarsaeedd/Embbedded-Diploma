/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "Projects.h"


void A_EXT_INT0_Execution(void);
void A_Timer0_Execution(void);

int main()
{

H_Servo_Void_ServoInit();
	while(1)
	{

H_Servo_Void_ServoSetAngel(180);
H_Servo_Void_ServoSetStart();



	}
	return 0;
}
/**********************************************************************************************************************/
/* FUNCTION OBJECTIVE -> EXTERNAL INTERRUPT 0 EXCUTION FUNCTION                                                       */
/**********************************************************************************************************************/
void A_EXT_INT0_Execution(void)
{
	H_LED_Void_LedTog(LED0);
}
/**********************************************************************************************************************/
/* FUNCTION OBJECTIVE -> TIMER 0 EXCUTION FUNCTION                                                                    */
/**********************************************************************************************************************/
void A_Timer0_Execution(void)
{
	H_LED_Void_LedTog(LED0);
}
/**********************************************************************************************************************/
/* FUNCTION OBJECTIVE -> TIMER 1 EXCUTION FUNCTION                                                                    */
/**********************************************************************************************************************/
void A_Timer1_Execution(void)
{
	H_LED_Void_LedTog(LED0);
}
