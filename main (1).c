#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    wait_for_light(1);
    
    motor(0,1000);
    motor(3,1000);
    msleep(1200);
    
    motor(0,1500);
    motor(3,0);
    msleep(1067);
    
    
    motor(0,1500);
    motor(3,1500);
    msleep(1500);
    
 
    
    return 0;
}
