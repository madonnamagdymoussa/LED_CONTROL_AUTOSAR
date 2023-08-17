

/******************************************************************************************
****************************************Port Module****************************************
*********************************Link-Time Configurations*********************************
******************************************************************************************/





#include "Port_LCfg.h"



/******************************************************************************************
********************************** Linker Configurations **********************************
******************************************************************************************/




/******************************************************************************************
***************************** Port Containers Configurations  *****************************
******************************************************************************************/






/******************************************************************************************
**********************************PortConfigSet Container**********************************
*******************************Size And Array Of Structures*******************************
**********************************Linking Configurations **********************************
******************************************************************************************/

/* Size Variable Linking Configuration*/
u8_t lcfg_PortConfigSet_size = PORT_CONFIG_SET_SIZE;

/* Array Of Structures Linking Configurations*/
PortConfigSet_s PortConfigSet[PORT_CONFIG_SET_SIZE] =
{
    {   /*Instance_0*/
        .PortContainer_startingIndex = PORT_CONTAINER_0_STARTING_INDEX,
        .PortContainer_numberOfInstances = PORT_CONTAINER_0_NUMBER_INSTANCES
    }
};



/******************************************************************************************
**********************************PortContainer Container**********************************
*******************************Size And Array Of Structures*******************************
**********************************Linking Configurations **********************************
******************************************************************************************/

/* Size Variable Linking Configuration*/
u8_t lcfg_PortContainer_size = PORT_CONTAINER_SIZE;

/* Array Of Structures Linking Configurations*/
PortContainer_s PortContainer[PORT_CONTAINER_SIZE] =
{
    {   /*Instance_0*/
        .PortNumberOfPortPins = 5,
        .PortPin_startingIndex = PORT_PIN_0_STARTING_INDEX,
        .PortPin_numberOfInstances = PORT_PIN_0_NUMBER_INSTANCES
    }
};



/******************************************************************************************
*************************************PortPin Container*************************************
*******************************Size And Array Of Structures*******************************
**********************************Linking Configurations **********************************
******************************************************************************************/

/* Size Variable Linking Configuration*/
u8_t lcfg_PortPin_size = PORT_PIN_SIZE;

/* Array Of Structures Linking Configurations*/
PortPin_s PortPin[PORT_PIN_SIZE] =
{
    {   /*Instance_0*/
        .PortPinDirection = PORT_PIN_IN,
        .PortPinDirectionChangeable = FALSE,
        .PortPinId = 1,
        .PortPinInitialMode = PORT_PIN_MODE_DIO_Initial,
        .PortPinLevelValue = PORT_DEFAULT_PARAMETER_ENUM_VALUE_LevelVal,
        .PortPinMode = PORT_PIN_MODE_DIO,
        .PortPinModeChangeable = FALSE,
        .PortPinInputPullResistor = PORT_PIN_IN_PULL_UP,
        .PortNum=PortF
    },
    {   /*Instance_1*/
        .PortPinDirection = PORT_PIN_OUT,
        .PortPinDirectionChangeable = FALSE,
        .PortPinId = 2,
        .PortPinInitialMode = PORT_PIN_MODE_DIO_Initial,
        .PortPinLevelValue = PORT_PIN_LEVEL_LOW,
        .PortPinMode = PORT_PIN_MODE_DIO,
        .PortPinModeChangeable = FALSE,
        .PortPinInputPullResistor = PORT_DEFAULT_PARAMETER_ENUM_VALUE_PullResis,
        .PortNum=PortF
    },
    {   /*Instance_2*/
        .PortPinDirection = PORT_PIN_OUT,
        .PortPinDirectionChangeable = FALSE,
        .PortPinId = 3,
        .PortPinInitialMode = PORT_PIN_MODE_DIO_Initial,
        .PortPinLevelValue = PORT_PIN_LEVEL_LOW,
        .PortPinMode = PORT_PIN_MODE_DIO,
        .PortPinModeChangeable = FALSE,
        .PortPinInputPullResistor = PORT_DEFAULT_PARAMETER_ENUM_VALUE_PullResis,
        .PortNum=PortF
    },
    {   /*Instance_3*/
        .PortPinDirection = PORT_PIN_OUT,
        .PortPinDirectionChangeable = FALSE,
        .PortPinId = 4,
        .PortPinInitialMode = PORT_PIN_MODE_DIO_Initial,
        .PortPinLevelValue = PORT_PIN_LEVEL_LOW,
        .PortPinMode = PORT_PIN_MODE_DIO,
        .PortPinModeChangeable = FALSE,
        .PortPinInputPullResistor = PORT_DEFAULT_PARAMETER_ENUM_VALUE_PullResis,
        .PortNum=PortF
    },
    {   /*Instance_4*/
        .PortPinDirection = PORT_PIN_IN,
        .PortPinDirectionChangeable = FALSE,
        .PortPinId = 5,
        .PortPinInitialMode = PORT_PIN_MODE_DIO_Initial,
        .PortPinLevelValue = PORT_DEFAULT_PARAMETER_ENUM_VALUE_LevelVal,
        .PortPinMode = PORT_PIN_MODE_DIO,
        .PortPinModeChangeable = FALSE,
        .PortPinInputPullResistor = PORT_PIN_IN_PULL_UP,
        .PortNum=PortF
    }
};






