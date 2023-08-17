
#ifndef SCHEDULER_H_
#define SCHEDULER_H_



enum CPUAccessLevel{
    priviledged,
    Unpriviledged
};


#define TaskA_Stack_Size  (5000)
#define TaskB_Stack_Size  (5000)

#define OS_SET_PSP(add)         __asm volatile("        mov r0,%0 \n\t msr PSP,r0"  :: "r" (add) )
#define OS_SWITCH_SP_to_PSP     __asm volatile("        mrs r0, CONTROL \n\t mov r1,#0x02 \n\t orr r0,r0,r1 \n\t msr CONTROL,r0")
#define OS_SWITCH_SP_to_MSP     __asm volatile("        mrs r0, CONTROL \n\t mov r1,#0x05 \n\t and r0,r0,r1 \n\t msr CONTROL,r0")

#define OS_Generate_Exception   __asm volatile("        SVC #0X3")


void SwitchAccessLevel(enum CPUAccessLevel level);
void MainOs(void);


#endif /* SCHEDULER_H_ */
