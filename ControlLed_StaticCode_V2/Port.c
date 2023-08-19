#include "Port_LCfg.h"
#include "Port_Cfg.h"
#include "Port_Reg.h"
#include "Port_Config.h"

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
 volatile GPIO_DigitalEnable_Reg static * const GPIO_DigitalEnable_Registers[Port_Indices]={
        GPIO_PortA_DigitalEnable,
        GPIO_PortB_DigitalEnable,
        GPIO_PortC_DigitalEnable,
        GPIO_PortD_DigitalEnable,
        GPIO_PortE_DigitalEnable,
        GPIO_PortF_DigitalEnable

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
 volatile u32_t static * const GPIO_PortControl_Registers[Port_Indices]={

      GPIO_PortA_PortControl,
      GPIO_PortB_PortControl,
      GPIO_PortC_PortControl,
      GPIO_PortD_PortControl,
      GPIO_PortE_PortControl,
      GPIO_PortF_PortControl

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
 volatile GPIO_Direction_Reg static * const GPIO_Direction_Registers[Port_Indices]={

      (GPIO_Direction_Reg*) &GPIO_PortA_Direction,
      (GPIO_Direction_Reg*) &GPIO_PortB_Direction,
      (GPIO_Direction_Reg*) &GPIO_PortC_Direction,
      (GPIO_Direction_Reg*) &GPIO_PortD_Direction,
      (GPIO_Direction_Reg*) &GPIO_PortE_Direction,
      (GPIO_Direction_Reg*) &GPIO_PortF_Direction

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
volatile u32_t static * const GPIO_LOCK_Registers[Port_Indices]={

       GPIO_PortA_LOCK,
       GPIO_PortB_LOCK,
       GPIO_PortC_LOCK,
       GPIO_PortD_LOCK,
       GPIO_PortE_LOCK,
       GPIO_PortF_LOCK

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
volatile GPIO_CR_Reg static *const GPIO_Port_Commit[Port_Indices]={

      GPIO_PortA_Commit,
      GPIO_PortB_Commit,
      GPIO_PortC_Commit,
      GPIO_PortD_Commit,
      GPIO_PortE_Commit,
      GPIO_PortF_Commit

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

volatile GPIOPUR_Reg static* const GPIO_PullUp_Registers[Port_Indices]={
        GPIO_PortA_PullUp_R,
        GPIO_PortB_PullUp_R,
        GPIO_PortC_PullUp_R,
        GPIO_PortD_PullUp_R,
        GPIO_PortE_PullUp_R,
        GPIO_PortF_PullUp_R

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
 volatile GPIO_AFSEL_Reg static *const GPIO_AlternateFunctionSelect_Registers[Port_Indices]={

       GPIO_PortA_AlternateFunctionSelect,
       GPIO_PortB_AlternateFunctionSelect,
       GPIO_PortC_AlternateFunctionSelect,
       GPIO_PortD_AlternateFunctionSelect,
       GPIO_PortE_AlternateFunctionSelect,
       GPIO_PortF_AlternateFunctionSelect
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
 volatile GPIO_InterruptMask_Reg static* const GPIO_InterruptMask_Registers[Port_Indices] ={

      (GPIOIM_PortA_R),
      (GPIOIM_PortB_R),
      (GPIOIM_PortC_R),
      (GPIOIM_PortD_R),
      (GPIOIM_PortE_R),
      (GPIOIM_PortF_R)

 };

/*******************************************************************************************************/
 /*                                     STATIC INLINE                                                  */
/******************************************************************************************************/

 void static inline PORT_EnableRunModeClockGateControl(PortType PortNum){

      GPIO_RunModeClockGatingControl->Bits.GPIOPortRunModeClockGatingControl |= (1<<PortNum);

      while( (GPIO_RunModeClockGatingControl->Bits.GPIOPortRunModeClockGatingControl & (1<<PortNum)) == 0);

 }
/*=======================================*/

 void static inline GPIO_ConfigureCommit(GPIO_PortNumIndexArr_t PortNumIndexArr, GPIO_ConfigureChannelNum_t ConfigureChannelNum, GPIO_LockMode_t LockMode){

    switch (LockMode){

    case EnableLock:
        *GPIO_LOCK_Registers[PortNumIndexArr] = 0;
        break;

    case DisableLock:
        *GPIO_LOCK_Registers[PortNumIndexArr] = 0x4C4F434B;
        (*GPIO_Port_Commit[PortNumIndexArr]).bits.commit |=(1<<ConfigureChannelNum);
        break;

    }
}
/*=======================================*/

 void static inline Port_SetPinDirection (Port_PinType Pin, PortPinDirection_e Direction, PortType PortNum){


    switch (Direction){

    case PORT_PIN_IN:
    (*GPIO_Direction_Registers[PortNum]).bits.Direction &= ~(1<<Pin);
    break;

    case PORT_PIN_OUT:
    (*GPIO_Direction_Registers[PortNum]).bits.Direction |=(1<<Pin);
    break;

    }

}
 /*=======================================*/
 void static inline GPIO_ConfigureDigitalEnable(GPIO_PortNumIndexArr_t PortNumIndexArr, GPIO_ConfigureChannelNum_t ConfigureChannelNum, GPIO_DigitalMode_t DigitalMode){


    switch (DigitalMode){

    case DisableDigitalFunction:
        (*GPIO_DigitalEnable_Registers[PortNumIndexArr]).bits.DigitalEnable &= ~(1<<ConfigureChannelNum);
        break;

    case EnableDigitalFunction:
        (*GPIO_DigitalEnable_Registers[PortNumIndexArr]).bits.DigitalEnable |=(1<<ConfigureChannelNum);
        break;

    }

}
 /*=======================================*/

void static inline PORT_ConfigureInputPin(const Port_ConfigType* ConfigPtr){

    u8_t Pin_ID=ConfigPtr->PortPinId-1;

    if( (PortF == (ConfigPtr->PortNum)) && (Pin_ID == Channel_0)){

    GPIO_ConfigureCommit(PortF, Channel_0 ,DisableLock);
    }

    Port_SetPinDirection (Pin_ID, ConfigPtr->PortPinDirection, ConfigPtr->PortNum);

    GPIO_PullUp_Registers[ConfigPtr->PortNum]->Bits.PullUpEnable |=(1<<Pin_ID);

    GPIO_ConfigureDigitalEnable(ConfigPtr->PortNum, Pin_ID, EnableDigitalFunction);

}
/*=======================================*/

void static inline PORT_ConfigureOutputPin(const Port_ConfigType* ConfigPtr){
    u8_t Pin_ID=ConfigPtr->PortPinId-1;

    Port_SetPinDirection (Pin_ID, ConfigPtr->PortPinDirection, ConfigPtr->PortNum);

    GPIO_ConfigureDigitalEnable(ConfigPtr->PortNum, Pin_ID, EnableDigitalFunction);

    GPIO_ConfigureCommit(ConfigPtr->PortNum, Pin_ID ,DisableLock);
}
/*=======================================*/




/********************************************************************************************************/
/*                                               AUTOSAR FUNCTIONS                                     */
/********************************************************************************************************/

void Port_Init (const Port_ConfigType* ConfigPtr){

    PORT_EnableRunModeClockGateControl(ConfigPtr->PortNum);

    if( PORT_PIN_IN ==ConfigPtr->PortPinDirection){

        PORT_ConfigureInputPin(ConfigPtr);
    }

    else if(PORT_PIN_OUT ==ConfigPtr->PortPinDirection){

        PORT_ConfigureOutputPin(ConfigPtr);
    }

}


void GPIO_ConfigureAlternateFunctionSelect(GPIO_PortNumIndexArr_t PortNumIndexArr, GPIO_ConfigureChannelNum_t ConfigureChannelNum , GPIO_AFSELMode_t AFSELMode){

    switch(AFSELMode){

    case Disable_AFSEL:
        (*GPIO_AlternateFunctionSelect_Registers[PortNumIndexArr]).bits.AlternateFunctionSelect &= ~(1<<ConfigureChannelNum);
        break;

    case Enable_AFSEL:
       (*GPIO_AlternateFunctionSelect_Registers[PortNumIndexArr]).bits.AlternateFunctionSelect |= (1<<ConfigureChannelNum);
        break;
    }

}


void GPIO_ConfigurePortControl(GPIO_PortNumIndexArr_t PortNumIndexArr, GPIO_ConfigureChannelNum_t ConfigureChannelNum, GPIO_ConfigureMuxValue_t ConfigureMuxValue ){

/****************************************************************************************************************/
    *GPIO_PortControl_Registers[PortNumIndexArr] &= ~( (u32_t)0xF << (ConfigureChannelNum*4) );

    /* IMPORTANT NOTE:
     * that  Operation was performed because
     *
     * IF the bit in that register was already set
     * with a value 1 before and IF you initialize it
     * with a value zero,
     * the value inserted in the register will be not be zero
     * it will be one because it is an OR operation in the line below
     */
/****************************************************************************************************************/

    *GPIO_PortControl_Registers[PortNumIndexArr] |= ( (u32_t)ConfigureMuxValue << ConfigureChannelNum*4);

    //to remove that warning --> implicit conversion changes signedness 'int' to 'unsigned long'
    //    casting was performed


}


void GPIO_ConfigureInterruptMask(GPIO_PortNumIndexArr_t PortNumIndexArr, GPIO_ConfigureChannelNum_t ConfigureChannelNum, GPIO_InterruptMaskMode_t InterruptMaskMode){

    switch(InterruptMaskMode){

    case Enable_InterruptMask:
        (*GPIO_InterruptMask_Registers[PortNumIndexArr]).Bits.InterruptMaskEnable |= (1<<ConfigureChannelNum);
    break;

    case Disable_InterruptMask:
        (*GPIO_InterruptMask_Registers[PortNumIndexArr]).Bits.InterruptMaskEnable &= ~(1<<ConfigureChannelNum);
    break;

    }

}


void GPIO_EnableAFSEL_GPTM(GPIO_TimerConfigChannel_t * pt_TimerConfigChannel){

    PORT_EnableRunModeClockGateControl(pt_TimerConfigChannel->PortNumIndexArr);

    //GPIO_SetPinStatus(TimerPWMConfigChannel->PortNumIndexArr, TimerPWMConfigChannel->ConfigureChannelNum, Output );

    //GPIO_SetData(TimerPWMConfigChannel->PortNumIndexArr , TimerPWMConfigChannel->ConfigureChannelNum, OutputHigh);

    GPIO_ConfigureAlternateFunctionSelect(pt_TimerConfigChannel->PortNumIndexArr, pt_TimerConfigChannel->ConfigureChannelNum , Enable_AFSEL);
    GPIO_ConfigurePortControl(pt_TimerConfigChannel->PortNumIndexArr, pt_TimerConfigChannel->ConfigureChannelNum, MuxValue_7 );
    GPIO_ConfigureInterruptMask(pt_TimerConfigChannel->PortNumIndexArr, pt_TimerConfigChannel->ConfigureChannelNum, Disable_InterruptMask);


    GPIO_ConfigureDigitalEnable(pt_TimerConfigChannel->PortNumIndexArr, pt_TimerConfigChannel->ConfigureChannelNum, EnableDigitalFunction);

}
