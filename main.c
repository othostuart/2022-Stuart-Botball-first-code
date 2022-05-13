#include <kipr/botball.h>

void startup(){enable_servos();}
void rotate(degrees,dir){motor(0,dir*100);
motor(3,-dir*100);msleep(degrees*10);motor(0,0);motor(3,0);}
void Tmove(time,power){motor(0,power);
motor(3,power);msleep(time);motor(0,0);motor(3,0);}
void claw(value){set_servo_position
(1,value*20.47);}void armAngle(angle)
{set_servo_position(3,angle*10);}
void Dmove(distance,power){motor(0,power);
motor(3,power);msleep(distance*2800);}
void spin(value){set_servo_position(0,value*12);}
void slowArm(input,speed){int value=input*10;while(get_servo_position(3)>value+3||get_servo_position(3)<value-3){printf("slow1");
if(get_servo_position(3)<value){set_servo_position(3,get_servo_position(3)+1);printf("slow2");}else{
set_servo_position(3,(get_servo_position(3)-2));printf("slow3");}msleep(speed);}}

int main()
{
    printf("started");
    startup();
    armAngle(0);
    spin(90);
    claw(90);
    msleep(1000);
    Tmove(2000,-100);
    rotate(45,-1);
    Tmove(900,100);
    armAngle(50);
    spin(160);
    msleep(1000);
    claw(5);
    msleep(1000);
    slowArm(0,1);
    Tmove(1000,-100);
    return 0;
}
