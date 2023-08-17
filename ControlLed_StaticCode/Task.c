
#include "GPTM_config.h"
#include "lstd.h"
#include "GPTM.h"
#include "Task.h"

u8_t Button1_PressedFlag=0;
u8_t Button2_PressedFlag=0;

States_t Button1State;
States_t Button2State;

void TaskA_ReadButtonState(void){

        /**********************Check for button 1**********************/
            if( STD_LOW == Dio_ReadChannel(Channel_4,PortF) ){

                 GPTM_GenerateDelay(GPTM_Config_ArrPtrStruct[0], 170, milli_Sec);

                     if(STD_LOW == Dio_ReadChannel(Channel_4,PortF) ){
                     Button1_PressedFlag=1;
                     //GPTM_GenerateDelay(GPTM_Config_ArrPtrStruct[0], 50, milli_Sec);
                 }

            }

            else{
                Button1_PressedFlag=0;
            }

            /**********************Check for button 2**********************/
            if( STD_LOW == Dio_ReadChannel(Channel_0,PortF) ){

                 GPTM_GenerateDelay(GPTM_Config_ArrPtrStruct[0], 170, milli_Sec);


                 if(STD_LOW == Dio_ReadChannel(Channel_0,PortF) ){
                     Button2_PressedFlag=1;

                     //GPTM_GenerateDelay(GPTM_Config_ArrPtrStruct[0], 50, milli_Sec);
                 }

             }
            else{
                 Button2_PressedFlag=0;
             }

            GPTM_GenerateDelay(GPTM_Config_ArrPtrStruct[0], 150, milli_Sec);
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

//Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level, Port_NumID PortNum ){


void TaskB_SwitchStates(void){


    if(1 == Button1_PressedFlag){

        switch(Button1State){

        case WhiteLed_State:
            Dio_WriteChannel(Channel_1, STD_HIGH, PortF);
            Dio_WriteChannel(Channel_2, STD_HIGH, PortF);
            Dio_WriteChannel(Channel_3, STD_HIGH, PortF);
            Button1State=RedLed_State;
            break;

        case RedLed_State:
            Dio_WriteChannel(Channel_3, STD_LOW, PortF);
            Dio_WriteChannel(Channel_1, STD_HIGH, PortF);
            Dio_WriteChannel(Channel_2, STD_LOW, PortF);
            Button1State=GreenLed_State;
            break;

        case GreenLed_State:
            Dio_WriteChannel(Channel_2 ,STD_LOW, PortF);
            Dio_WriteChannel(Channel_1 ,STD_LOW, PortF);
            Dio_WriteChannel(Channel_3 ,STD_HIGH, PortF);
            Button1State=BlueLed_State;
            break;

        case BlueLed_State:
            Dio_WriteChannel(Channel_1 ,STD_LOW, PortF);
            Dio_WriteChannel(Channel_2 ,STD_HIGH, PortF);
            Dio_WriteChannel(Channel_3,STD_LOW, PortF);
            Button1State=WhiteLed_State;
            break;

        }
    }


    if(1 == Button2_PressedFlag){

        switch(Button2State){

        case WhiteLed_State:
            Dio_WriteChannel(Channel_1, STD_HIGH, PortF);
            Dio_WriteChannel(Channel_2, STD_HIGH, PortF);
            Dio_WriteChannel(Channel_3, STD_HIGH, PortF);
            Button2State=BlueLed_State;
            break;

        case BlueLed_State:
            Dio_WriteChannel(Channel_1 ,STD_LOW, PortF);
            Dio_WriteChannel(Channel_2 ,STD_HIGH, PortF);
            Dio_WriteChannel(Channel_3,STD_LOW, PortF);
            Button2State=GreenLed_State;
            break;

        case GreenLed_State:
            Dio_WriteChannel(Channel_2 ,STD_LOW, PortF);
            Dio_WriteChannel(Channel_1 ,STD_LOW, PortF);
            Dio_WriteChannel(Channel_3 ,STD_HIGH, PortF);
            Button2State=RedLed_State;
            break;

        case RedLed_State:
            Dio_WriteChannel(Channel_3, STD_LOW, PortF);
            Dio_WriteChannel(Channel_1, STD_HIGH, PortF);
            Dio_WriteChannel(Channel_2, STD_LOW, PortF);
            Button2State=WhiteLed_State;
            break;

        }
    }


}
