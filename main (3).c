#include <kipr/botball.h>

int main()
    
{
    int straight = 1000;
   
    enable_servos();
    set_servo_position(1,1419);
    
    
    set_servo_position(1,540);
    wait_for_milliseconds(500);
    set_servo_position(0,0);
    wait_for_milliseconds(500);
    set_servo_position(1,1341);
    return 0;
}
