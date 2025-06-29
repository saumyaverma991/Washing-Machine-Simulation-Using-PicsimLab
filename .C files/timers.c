#include <xc.h>

void init_timer2(void)
{
    
    
    //no of ticks in PR2
    PR2 = 250;
    
    // the timer interrupt is enabled
    TMR2IE=1;
    
    //Switching on the timer2
    TMR2ON=0;
    
    
}
