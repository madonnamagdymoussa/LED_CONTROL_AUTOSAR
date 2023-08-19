#include "Scheduler.h"
#include "lstd.h"
#include "Task.h"
/*==========================================================================*/
/*                           GLOBAL DATA                                    */
/*==========================================================================*/

unsigned int _S_MSP=0x20007fff;
unsigned int _E_MSP;

unsigned int _S_PSP_TA;
unsigned int _E_PSP_TA;

unsigned int _S_PSP_TB;
unsigned int _E_PSP_TB;

 u8_t TASKA_flag=1;
 u8_t TASKB_flag=0;

/*==========================================================================*/
/*                           OS FUNCTIONS                                   */
/*==========================================================================*/

void SwitchAccessLevel(enum CPUAccessLevel level){

    switch(level){

    /*clear bit 0*/
    case priviledged:
        __asm("     mrs r3, CONTROL");
        __asm("     lsr r3,r3,#0x1");
        __asm("     lsl r3,r3,#0x1");
        __asm("     msr CONTROL, r3");
        break;
   /*set bit 0*/
    case Unpriviledged:
        __asm("     mrs r3, CONTROL");
        __asm("     orr r3,r3,#0x1");
        __asm("     msr CONTROL,r3");
        break;
    }
}

 //SwitchAccessLevel(Unpriviledged);
//OS_Generate_Exception;
void MainOs(void){

   /*0x2000'4448*/
    _E_MSP = _S_MSP -3000; 

     /*0x2000'4438*/
    _S_PSP_TA = (_E_MSP - (16));
    
    /*0x2000'30b0*/
    _E_PSP_TA = _S_PSP_TA - TaskA_Stack_Size;

    /*0x2000'30a0*/
    _S_PSP_TB = _E_PSP_TA -16;
    
    /*0x2000'1d18*/
    _E_PSP_TB = _S_PSP_TB - TaskB_Stack_Size;

    while(1){

        if(1 == TASKA_flag){

            
            OS_SET_PSP(_S_PSP_TA);
            OS_SWITCH_SP_to_PSP;
           // SwitchAccessLevel(Unpriviledged);
           __asm("  CPSID  I");
             TaskA_ReadButtonState();
           __asm("  CPSIE  I");
            // OS_Generate_Exception;
            OS_SWITCH_SP_to_MSP;
        }
        
        
           if(1 == TASKB_flag){

            OS_SET_PSP(_S_PSP_TB);

            OS_SWITCH_SP_to_PSP;

            __asm("  CPSID  I");
                       
            TaskB_SwitchStates();
           __asm("  CPSIE  I");
             
            OS_SWITCH_SP_to_MSP;
        }

    }

}

void SVCHandler(void){

    SwitchAccessLevel(priviledged);
}

