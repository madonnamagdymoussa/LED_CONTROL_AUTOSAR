#ifndef DIO_H_
#define DIO_H_

#include "Dio_Types.h"
#include "lstd.h"
#include "Dio_Config.h"
#include "PORT_DIO_Config.h"

void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level, Port_NumID PortNum );

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId, Port_NumID PortNum);

#endif /* DIO_H_ */
