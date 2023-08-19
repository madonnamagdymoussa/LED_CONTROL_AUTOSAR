#ifndef RTE_IOA_SWC_1_H_
#define RTE_IOA_SWC_1_H_


#include "Rte_Type.h"




void IOA_SWC_Dio_WriteChannel_Runnable(Port_NumID CS_2_WriteChannel_Operation_1_Argument_1_PortNum,Dio_ChannelType CS_2_WriteChannel_Operation_1_Argument_2_ChannelType,Dio_LevelType CS_2_WriteChannel_Operation_1_Argument_3_LevelType);

Dio_LevelType IOA_SWC_DIO_ReadChannel_Runnable(Port_NumID CS_1_Operation_1_Argument_PortNum,Dio_ChannelType CS_1_Operation_1_Argument_ChannelType);


#endif
