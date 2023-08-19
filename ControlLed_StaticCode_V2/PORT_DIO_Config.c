/* =====================================================================================*/
/*                                  INCLUDES                                            */
/* =====================================================================================*/
#include "PORT_DIO_Config.h"

/* =====================================================================================*/
/*                                   INSTANCE OF STRUCT                                 */
/* =====================================================================================*/


/*==================================================*/
/*     Config for  AFSEL_PWM                        */
/*==================================================*/
GPIO_TimerConfigChannel_t Timer0A_32_64Bit ={
     PortC,
     Channel_4,
     PWM_32_64BitTimer0A_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer0B_32_64Bit={
     PortC,
     Channel_5,
     PWM_32_64BitTimer0B_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer1A_32_64Bit={
     PortC,
     Channel_6,
     PWM_32_64BitTimer1A_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer1B_32_64Bit={
    PortC,
    Channel_7,
    PWM_32_64BitTimer1B_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer2A_32_64Bit={
   PortD,
   Channel_0,
  PWM_32_64BitTimer2A_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer2B_32_64Bit={
   PortD,
   Channel_1,
   PWM_32_64BitTimer2B_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer3A_32_64Bit={
   PortD,
   Channel_2,
   PWM_32_64BitTimer3A_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer3B_32_64Bit={
   PortD,
   Channel_3,
   PWM_32_64BitTimer3B_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer4A_32_64Bit={
   PortD,
   Channel_4,
   PWM_32_64BitTimer4A_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer4B_32_64Bit={
  PortD,
  Channel_5,
  PWM_32_64BitTimer4B_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer5A_32_64Bit ={
   PortD,
   Channel_6,
   PWM_32_64BitTimer5A_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t Timer5B_32_64Bit={
   PortD,
   Channel_7,
   PWM_32_64BitTimer5B_IndexArr
};/*************************************************/

GPIO_TimerConfigChannel_t * const GPIO_TimerAFSELConfig_ArrPtrStruct[12]={
      &Timer0A_32_64Bit,
      &Timer0B_32_64Bit,
      &Timer1A_32_64Bit,
      &Timer1B_32_64Bit,
      &Timer2A_32_64Bit,
      &Timer2B_32_64Bit,
      &Timer3A_32_64Bit,
      &Timer3B_32_64Bit,
      &Timer4A_32_64Bit,
      &Timer4B_32_64Bit,
      &Timer5A_32_64Bit,
      &Timer5B_32_64Bit,
};
