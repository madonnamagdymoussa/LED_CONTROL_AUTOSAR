
#include "CortexM.h"
#include "SystickTimer.h"
#include "Scheduler.h"
#include "Scheduler.h"
#include "Task.h"

int main(void)
{


   // __asm("  CPSIE  I");

    //GPIO_ConfigureInputPin(&GPIO_ConfigurePin_PF0);

    //GPIO_ConfigureInterruptSource(FallingEdge,PortF,  Channel_0 );
    //InitializeTasks();
    //Systick_Initialization();

    //SysTickGenerateDelay_Interrupt(100, milli_Sec);

    //RegisterCallbackFunction(PortF,ApplicationCallBackFunc);
    //Systick_RegisterCallbackFunction(Application_SystickCallback);

     //SwitchAccessLevel(Unpriviledged);
    InitializeTasks();
    
    Systick_Initialization();

    SysTickGenerateDelay_Interrupt(1000, milli_Sec);
   __asm("  CPSIE  I");
     MainOs();
     for(;;){
        // __asm("    wfi");
         //SchedulerFunction();
        // TaskA_ReadButtonState();
        // TaskB_SwitchStates();
     }
//	return 0;
}
