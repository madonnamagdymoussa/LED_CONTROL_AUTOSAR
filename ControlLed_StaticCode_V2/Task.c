
#include "GPTM_config.h"
#include "lstd.h"
#include "GPTM.h"
#include "Task.h"
#include "Rte.h"
#include "Rte_Type.h"
#include "Std_Types.h"
#include "Rte.h"

Value_1_ButtonState1 Button1_PressedFlag=0;
Value_1_ButtonState1 Button2_PressedFlag=0;

Value_1_ButtonState1* pt_Button1_PressedFlag=&Button1_PressedFlag;
Value_1_ButtonState1* pt_Button2_PressedFlag=&Button2_PressedFlag;

u32_t counter; 
States_t Button1State;
States_t Button2State;
//RTE_IOA_SWC_DIO_ReadChannel_Runnable(Port_NumID CS_1_Operation_1_Argument_PortNum,Dio_ChannelType CS_1_Operation_1_Argument_ChannelType)
void TaskA_ReadButtonState(void){

        /**********************Check for button 1**********************/
            if( STD_LOW == RTE_IOA_SWC_DIO_ReadChannel_Runnable(PortF,Channel_4) ){

                 GPTM_GenerateDelay(GPTM_Config_ArrPtrStruct[0], 10, milli_Sec);

                     if(STD_LOW == RTE_IOA_SWC_DIO_ReadChannel_Runnable(PortF,Channel_4)){
                     //Button1_PressedFlag=1;
                     Rte_Write_TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(1);
                     //GPTM_GenerateDelay(GPTM_Config_ArrPtrStruct[0], 10, milli_Sec);
                 }

            }

            else{
                //Button1_PressedFlag=0;
                Rte_Write_TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(0);
            }

            /**********************Check for button 2**********************/
            if( STD_LOW == RTE_IOA_SWC_DIO_ReadChannel_Runnable(PortF,Channel_0) ){

                 GPTM_GenerateDelay(GPTM_Config_ArrPtrStruct[1], 1600, milli_Sec);
                    //for(counter=0;counter<5000;counter++);

                 if(STD_LOW == RTE_IOA_SWC_DIO_ReadChannel_Runnable(PortF,Channel_0) ){
                     //Button2_PressedFlag=1;
                     Rte_Write_TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(1);

                     GPTM_GenerateDelay(GPTM_Config_ArrPtrStruct[1], 900, milli_Sec);
                 }

             }
            else{
                 //sButton2_PressedFlag=0;
                 Rte_Write_TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(0);
             }

            GPTM_GenerateDelay(GPTM_Config_ArrPtrStruct[0], 5, milli_Sec);
}

void InitializeTasks(void){
    /*GPIO_ConfigureInputPin(&GPIO_ConfigurePin_PF4);
    GPIO_ConfigureInputPin(&GPIO_ConfigurePin_PF0);
    GPIO_ConfigureOutputPin(&GPIO_ConfigurePin_PF1);
    GPIO_ConfigureOutputPin(&GPIO_ConfigurePin_PF2);
    GPIO_ConfigureOutputPin(&GPIO_ConfigurePin_PF3);*/
  
    Port_Init (&PortPin[0]);
    Port_Init (&PortPin[4]);

    Port_Init (&PortPin[1]);
    Port_Init (&PortPin[2]);
    Port_Init (&PortPin[3]);


    GPTM_InitializeDelayMode(GPIO_TimerAFSELConfig_ArrPtrStruct[0], GPTM_Config_ArrPtrStruct[0]);
    GPTM_InitializeDelayMode(GPIO_TimerAFSELConfig_ArrPtrStruct[1], GPTM_Config_ArrPtrStruct[1]);
}

//RTE_IOA_SWC_Dio_WriteChannel_Runnable(Port_NumID CS_2_WriteChannel_Operation_1_Argument_1_PortNum,Dio_ChannelType CS_2_WriteChannel_Operation_1_Argument_2_ChannelType,Dio_LevelType CS_2_WriteChannel_Operation_1_Argument_3_LevelType){


void TaskB_SwitchStates(void){

  

  Rte_Read_TopLevelComposition_Prototype_2_R_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(pt_Button1_PressedFlag);
  Rte_Read_TopLevelComposition_Prototype_2_R_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(pt_Button2_PressedFlag);
  
    if(1 == * pt_Button1_PressedFlag){

        switch(Button1State){

        case WhiteLed_State:
            
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_1 , STD_HIGH);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_2, STD_HIGH);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_3, STD_HIGH);
          Button1State=RedLed_State;
            break;

        case RedLed_State:
          
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_1 , STD_HIGH);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_2, STD_LOW);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_3, STD_LOW);
          Button1State=GreenLed_State;
            break;

        case GreenLed_State:
          
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_1 , STD_LOW);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_2, STD_LOW);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_3, STD_HIGH);
          Button1State=BlueLed_State;
            break;

        case BlueLed_State:
          
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_1 , STD_LOW);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_2, STD_HIGH);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_3, STD_LOW);

          Button1State=WhiteLed_State;
            break;

        }
    }


    if(1 == * pt_Button2_PressedFlag){

        switch(Button2State){

        case WhiteLed_State:
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_1 , STD_HIGH);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_2, STD_HIGH);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_3, STD_HIGH);
          Button2State=BlueLed_State;
            break;

        case BlueLed_State:
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_1 , STD_LOW);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_2, STD_HIGH);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_3, STD_LOW);
          Button2State=GreenLed_State;
            break;

        case GreenLed_State:
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_1 , STD_LOW);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_2, STD_LOW);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_3, STD_HIGH);
          Button2State=RedLed_State;
            break;

        case RedLed_State:
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_1 , STD_HIGH);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_2, STD_LOW);
          RTE_IOA_SWC_Dio_WriteChannel_Runnable(PortF,Channel_3, STD_LOW);
            Button2State=WhiteLed_State;
            break;

        }
    }


}
