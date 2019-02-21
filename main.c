#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
     int closeC = 560; 
    int openC = 0;
	int downL = 1850;
	//int upL = 0;
    
    enable_servos();
    set_servo_position(0, downL);
    msleep(1000);
    set_servo_position(1, closeC);
    msleep(1000);
    disable_servos();
    
	cmpc(3);

	while (gmpc(3) < 830) { //turning to the right 
		motor(0, -100);
		motor(3, 100);
	}

    cmpc(0);
    
    while (gmpc(0) < 5400) { //getting out of the start-box
        motor(0, 95);
        motor(3, 100);
    }
    
    cmpc(0);
    
    while (gmpc(0) < 800) { //turning to the black and grey lines
        motor(0, 100);
        motor(3, -100);
    }
    
    ao();
    msleep(50);
    ao();
    
    enable_servos();
    set_servo_position(0, downL);
    msleep(1000);
    set_servo_position(1, openC);
    msleep(1000);
    disable_servos();
    
    while (gmpc(0) < 3400) { //getting to the black and grey lines
        motor(0, 95);
        motor(3, 100);
    }
    
    cmpc(0);
    
    while (gmpc(0) < 3800) {
        motor(0, 100);
        motor(3, 50);
    }
    
    cmpc(0);
    
    while (gmpc(0) < 2800) {
        motor(0, 100);
        motor(3, 100);
    }
    
    cmpc(0);
    
    while (gmpc(0) < 2300) {
        motor(0, 100);
        motor(3, 20);
    }
    
    cmpc(0);
    
    while (gmpc(0) < 900) {
        motor(0, 100);
        motor(3, 100);
    }
    
    //while((analog(1) < middle)||(analog(2) < middle)) { 
	//	if ((analog(1) < middle) && (analog(2) > middle)) {
	//		motor(3, -100);
	//	}
	
	//	else if ((analog(1) > middle) && (analog(2) < middle)) {
	//		motor(0, -100);
	//	}

	//	else {
	//		motor(0, 100);
	//		motor(3, 100);
	//	}
	//}

    //cmpc(0);
    
    //while (gmpc(0) < turn) { //turning onto the black and grey lines
    //    motor(0, 100);
    //    motor(3, -100);
    //}
    
    //cmpc(0);
    
    //while (gmpc(0) < 2700) { //collecting the first two supplies
    //    motor(0, 100);
    //    motor(3, 100);
    //}
    
    //cmpc(0);
    
    //while (gmpc(0) < turn) { //turning off of the black and grey line
    //    motor(0, -100);
    //    motor(3, 100);
    //}
    
    //cmpc(0);
    
    //while (gmpc(0) < 900) { //putting supplies into the scoring-box
    //    motor(0, 100);
    //    motor(3, 100);
    //}
    
    //cmpc(0);
    
    //while (gmpc(0) < -900) { //backing up onto the black and grey lines
    //    motor(0, -100);
    //    motor(3, -100);
    //}
    
    //cmpc(3);
    
    //while (gmpc(3) < turn) { //turning onto the black and grey lines
    //    motor(0, -100);
    //    motor(3, 100);
    //}
    
    //cmpc(0);
    
    //while (gmpc(0) < 2700) { //collecting the last two supplies
    //    motor(0, 100);
    //    motor(3, 100);
    //}
    
    //cmpc(0);
    
    //while (gmpc(0) < turn) { //turning of of the black and grey lines
    //    motor(0, 100);
    //    motor(3, -100);
    //}
    
    //cmpc(0);
    
    //while (gmpc(0) < 900) { //moving off of the black and grey lines
    //    motor(0, 100);
    //    motor(3, 100);
    //}
    
    //cmpc(0);
    
    //while (gmpc(0) < turn) { //turning towards the scoring-box
    //    motor(0, 100);
    //    motor(3, -100);
    //}
    
    //cmpc(0);
    
    //while (gmpc(0) < 900) { //moving the supplies into the scoring-box
    //    motor(0, 100);
    //    motor(3, 100);
    //}
    
 cmpc(0);
    
    while (gmpc(0) > -900){
        motor(0,-100);
        motor(3,-100);
    }
    
     cmpc(0);
    
    while (gmpc(0) > -2700) {// going backwards
        motor(0, -100);
        motor(3, -20);
    }
    
    cmpc(0);
    
    while (gmpc(0) < 7200) {// going forwards along line
        motor(0,93);
        motor(3,100);
    }
    
    


    return 0;
}
