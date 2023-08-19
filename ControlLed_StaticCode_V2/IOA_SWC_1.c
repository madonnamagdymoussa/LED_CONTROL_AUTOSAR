#include "Rte_IOA_SWC_1.h"
#include "DIO.h"



/*
*Runnable:DIO_ReadChannel_Runnable
*Event Type:operation invoked event
*DATA ACCESS:
*/
Dio_LevelType IOA_SWC_DIO_ReadChannel_Runnable(Port_NumID CS_1_Operation_1_Argument_PortNum,Dio_ChannelType CS_1_Operation_1_Argument_ChannelType){

  return  Dio_ReadChannel(CS_1_Operation_1_Argument_ChannelType, CS_1_Operation_1_Argument_PortNum);

}



/*
*Runnable:Dio_WriteChannel_Runnable
*Event Type:operation invoked event
*DATA ACCESS:
*/
void IOA_SWC_Dio_WriteChannel_Runnable(Port_NumID CS_2_WriteChannel_Operation_1_Argument_1_PortNum,Dio_ChannelType CS_2_WriteChannel_Operation_1_Argument_2_ChannelType,Dio_LevelType CS_2_WriteChannel_Operation_1_Argument_3_LevelType){

Dio_WriteChannel(CS_2_WriteChannel_Operation_1_Argument_2_ChannelType, CS_2_WriteChannel_Operation_1_Argument_3_LevelType, CS_2_WriteChannel_Operation_1_Argument_1_PortNum );
}

