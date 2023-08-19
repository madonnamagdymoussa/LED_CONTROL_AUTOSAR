#ifndef RTE_H_
#define RTE_H_


#include "Rte_Type.h"

#define RTE_APPLICATION1_SWC_BUTTONSTATEREADING_H_
#define RTE_APPLICATION2_SWC_LEDSWITCHING_H_
#define RTE_IOA_SWC_1_H_

#ifdef RTE_APPLICATION1_SWC_BUTTONSTATEREADING_H_
Std_ReturnType Rte_Write_TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(Value_1_ButtonState1 data);
Std_ReturnType Rte_Write_TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(Value_2_ButtonState2 data);

#endif


#ifdef RTE_APPLICATION2_SWC_LEDSWITCHING_H_
Std_ReturnType Rte_Read_TopLevelComposition_Prototype_2_R_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(Value_1_ButtonState1* data);
Std_ReturnType Rte_Read_TopLevelComposition_Prototype_2_R_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(Value_2_ButtonState2* data);

#endif


#ifdef RTE_IOA_SWC_1_H_
void RTE_IOA_SWC_Dio_WriteChannel_Runnable(Port_NumID CS_2_WriteChannel_Operation_1_Argument_1_PortNum,Dio_ChannelType CS_2_WriteChannel_Operation_1_Argument_2_ChannelType,Dio_LevelType CS_2_WriteChannel_Operation_1_Argument_3_LevelType);
  
Dio_LevelType RTE_IOA_SWC_DIO_ReadChannel_Runnable(Port_NumID CS_1_Operation_1_Argument_PortNum,Dio_ChannelType CS_1_Operation_1_Argument_ChannelType);

#endif


#ifdef RTE_TOPLEVELCOMPOSITION_H_

#endif





#endif
