#ifndef RTE_APPLICATION1_SWC_BUTTONSTATEREADING_H_
#define RTE_APPLICATION1_SWC_BUTTONSTATEREADING_H_


#include "Rte.h"


extern void DIO_ReadChannel_Runnable(Port_NumID* CS_1_Operation_1_Argument_PortNum,Dio_ChannelType* CS_1_Operation_1_Argument_ChannelType);


#define    Rte_Write_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(data)     (Rte_Write_TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(data))
#define    Rte_Write_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(data)     (Rte_Write_TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(data))
#define    Rte_Call_R_Port_CS_ReadChannel_App1_CS_1_ReadChannel_Operation1(CS_1_Operation_1_Argument_PortNum,CS_1_Operation_1_Argument_ChannelType)     (DIO_ReadChannel_Runnable(CS_1_Operation_1_Argument_PortNum,CS_1_Operation_1_Argument_ChannelType))



#endif
