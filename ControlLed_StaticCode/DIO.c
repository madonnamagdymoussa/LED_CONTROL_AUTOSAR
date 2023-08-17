/*************************************************************************/
/*                                  INCLUDES                             */
/*************************************************************************/
#include "DIO.h"
#include "PORT_DIO_Config.h"
#include "PORT_Reg.h"
 /**************************************************************************************************************/
  /* creating an array of pointers to registers
   * the user (or the application layer) will not be allowed to have access to the hardware registers
   * because it's not his/her concern
   * he/she will only be allowed to call the interfacing functions in the GPIO.h file
   * for that reason a keyword static will be added
   *
   * A constant keyword is added because the location of the register never changes
   * so for safety no one can change the location of the pointer the only value that can be changed is the value INSIDE
   * the register ---> the value that the pointer is pointing to*/
 /**************************************************************************************************************/
 volatile GPIO_Data_Reg static * const GPIO_Data_Registers[Port_Indices]={

       (GPIO_Data_Reg*) &GPIO_PortA_Data,
       (GPIO_Data_Reg*) &GPIO_PortB_Data,
       (GPIO_Data_Reg*) &GPIO_PortC_Data,
       (GPIO_Data_Reg*) &GPIO_PortD_Data,
       (GPIO_Data_Reg*) &GPIO_PortE_Data,
       (GPIO_Data_Reg*) &GPIO_PortF_Data

 };

 /**************************************************************************************************************/
  /* creating an array of pointers to registers
   * the user (or the application layer) will not be allowed to have access to the hardware registers
   * because it's not his/her concern
   * he/she will only be allowed to call the interfacing functions in the GPIO.h file
   * for that reason a keyword static will be added
   *
   * A constant keyword is added because the location of the register never changes
   * so for safety no one can change the location of the pointer the only value that can be changed is the value INSIDE
   * the register ---> the value that the pointer is pointing to*/
 /**************************************************************************************************************/

 volatile unsigned long GPIO_BIT_BAND_Registers[Port_Indices]={

       GPIO_PORTA_BIT_BAND_R,
       GPIO_PORTB_BIT_BAND_R,
       GPIO_PORTC_BIT_BAND_R,
       GPIO_PORTD_BIT_BAND_R,
       GPIO_PORTE_BIT_BAND_R,
       GPIO_PORTF_BIT_BAND_R
 };

void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level, Port_NumID PortNum ){

    switch (Level){

     case STD_LOW:
         (*GPIO_Data_Registers[PortNum]).bits.Data &= ~(1<<ChannelId);
       break;

    case STD_HIGH:
        (*GPIO_Data_Registers[PortNum]).bits.Data |= (1<<ChannelId);
       break;
    }

}

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId, Port_NumID PortNum){

    /*Dio_LevelType LevelTypeVar;

    LevelTypeVar=(((*GPIO_Data_Registers[PortNum]).bits.Data));
    return LevelTypeVar;*/

    return *((unsigned long volatile *)(GPIO_BIT_BAND_Registers[PortNum]+ (1<<(2+ChannelId)) ));

}

