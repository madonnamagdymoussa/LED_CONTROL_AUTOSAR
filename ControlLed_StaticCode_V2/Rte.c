#include "Rte_Type.h"
#include "Rte_IOA_SWC_1.h"
#include "Rte.h"
Value_1_ButtonState1  TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1;
Value_2_ButtonState2  TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1;

Std_ReturnType Rte_Write_TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(Value_1_ButtonState1 data)
{
   TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1=  data;
   //IOA_SWC_Dio_WriteChannel_Runnable(Port_NumID CS_2_WriteChannel_Operation_1_Argument_1_PortNum,Dio_ChannelType CS_2_WriteChannel_Operation_1_Argument_2_ChannelType,Dio_LevelType CS_2_WriteChannel_Operation_1_Argument_3_LevelType){

   return RTE_E_UNCONNECTED;
}

Std_ReturnType Rte_Write_TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(Value_2_ButtonState2 data)
{
   TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1=  data;
   return RTE_E_UNCONNECTED;
}

Std_ReturnType Rte_Read_TopLevelComposition_Prototype_2_R_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(Value_1_ButtonState1* data)
{
   * data= TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1; 
   return RTE_E_UNCONNECTED;
}

Std_ReturnType Rte_Read_TopLevelComposition_Prototype_2_R_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(Value_2_ButtonState2* data)
{
   * data=  TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1;
   return RTE_E_UNCONNECTED;
}

void RTE_IOA_SWC_Dio_WriteChannel_Runnable(Port_NumID CS_2_WriteChannel_Operation_1_Argument_1_PortNum,Dio_ChannelType CS_2_WriteChannel_Operation_1_Argument_2_ChannelType,Dio_LevelType CS_2_WriteChannel_Operation_1_Argument_3_LevelType){
  
  IOA_SWC_Dio_WriteChannel_Runnable(CS_2_WriteChannel_Operation_1_Argument_1_PortNum,  CS_2_WriteChannel_Operation_1_Argument_2_ChannelType, CS_2_WriteChannel_Operation_1_Argument_3_LevelType);

}


Dio_LevelType RTE_IOA_SWC_DIO_ReadChannel_Runnable(Port_NumID CS_1_Operation_1_Argument_PortNum,Dio_ChannelType CS_1_Operation_1_Argument_ChannelType){
  
  return  IOA_SWC_DIO_ReadChannel_Runnable(CS_1_Operation_1_Argument_PortNum, CS_1_Operation_1_Argument_ChannelType);
}






