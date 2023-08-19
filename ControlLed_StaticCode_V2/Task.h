#ifndef TASK_H_
#define TASK_H_

#include "Port.h"
#include "DIO.h"
#include "lstd.h"


void TaskA_ReadButtonState(void);
void InitializeTasks(void);
void TaskB_SwitchStates(void);

typedef enum{

    WhiteLed_State,
    RedLed_State,
    GreenLed_State,
    BlueLed_State
}States_t;
#endif /* TASK_H_ */
