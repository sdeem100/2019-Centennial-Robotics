#include <kipr/botball.h>

int main()
{
    printf("comp create\n");    //start on the left
    create_connect();
   //wait_for_light(5);     //light senser
    //shut_down_in(15);      //shuts down in 15 seconds
    //msleep(5000);          //stop for 5 seconds
    set_create_distance(0);
    while(get_create_distance () < 250)    //goes forward
    {
        create_drive_direct (100,100);
    }
    printf("first loop\n");
    
    
	set_create_total_angle(0);
    while(get_create_total_angle () < 100)  //turn
    {
        create_drive_direct (100,-100);
        printf("inside 2nd loop\n");
    }
    
    
    
    printf("outside 2nd loop\n");
    set_create_distance(0);
    while(get_create_distance () < 500); //foward
    {
        create_drive_direct (400,400);
        printf("3rd loop\n");
    }
    create_stop();
    create_disconnect();
               
    
    return 0;
          }