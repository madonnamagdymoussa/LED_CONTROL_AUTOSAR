
#ifndef PORT_TYPES_H_
#define PORT_TYPES_H_

#include "lstd.h"
#include "PORT_DIO_Config.h"
/******************************************************************************************
***************************************Port Module's***************************************
***************************************Enumerations***************************************
******************************************************************************************/

#if 1

/*
* Type Definition
*   Enumeration: PortPinDirection
*/
typedef enum
{

    PORT_PIN_IN,
    PORT_PIN_OUT

}PortPinDirection_e;


/*
* Type Definition
*   Enumeration: PortPinInitialMode
*/
typedef enum
{

    PORT_PIN_MODE_ADC_Initial,
    PORT_PIN_MODE_CAN_Initial,
    PORT_PIN_MODE_DIO_Initial,
    PORT_PIN_MODE_DIO_GPT_Initial,
    PORT_PIN_MODE_DIO_WDG_Initial,
    PORT_PIN_MODE_FLEXRAY_Initial,
    PORT_PIN_MODE_ICU_Initial,
    PORT_PIN_MODE_LIN_Initial,
    PORT_PIN_MODE_MEM_Initial,
    PORT_PIN_MODE_PWM_Initial,
    PORT_PIN_MODE_SPI_Initial

}PortPinInitialMode_e;


/*
* Type Definition
*   Enumeration: PortPinLevelValue
*/
typedef enum
{

    PORT_PIN_LEVEL_HIGH,
    PORT_PIN_LEVEL_LOW,
    PORT_DEFAULT_PARAMETER_ENUM_VALUE_LevelVal
}PortPinLevelValue_e;


/*
* Type Definition
*   Enumeration: PortPinMode
*/
typedef enum
{

    PORT_PIN_MODE_ADC,
    PORT_PIN_MODE_CAN,
    PORT_PIN_MODE_DIO,
    PORT_PIN_MODE_DIO_GPT,
    PORT_PIN_MODE_DIO_WDG,
    PORT_PIN_MODE_FLEXRAY,
    PORT_PIN_MODE_ICU,
    PORT_PIN_MODE_LIN,
    PORT_PIN_MODE_MEM,
    PORT_PIN_MODE_PWM,
    PORT_PIN_MODE_SPI

}PortPinMode_e;


/*
* Type Definition
*   Enumeration: PortPinInputPullResistor
*/
typedef enum
{

    PORT_PIN_IN_NO_PULL,
    PORT_PIN_IN_PULL_DOWN,
    PORT_PIN_IN_PULL_UP,
    PORT_DEFAULT_PARAMETER_ENUM_VALUE_PullResis
}PortPinInputPullResistor_e;


#endif



typedef struct{

    u32_t PortNumberOfPortPins;
    u32_t PortPin_startingIndex;
    u32_t PortPin_numberOfInstances;
}PortContainer_s;


typedef struct{

    u32_t PortContainer_startingIndex;
    u32_t PortContainer_numberOfInstances;
}PortConfigSet_s;

typedef struct{

    PortPinDirection_e PortPinDirection;
    u8_t PortPinDirectionChangeable;
    u32_t PortPinId;
    PortPinInitialMode_e PortPinInitialMode;
    PortPinLevelValue_e PortPinLevelValue;
    PortPinMode_e PortPinMode;
    u8_t PortPinModeChangeable;
    PortPinInputPullResistor_e PortPinInputPullResistor;
    GPIO_PortNumIndexArr_t PortNum;
}PortPin_s;

#endif /* PORT_TYPES_H_ */
