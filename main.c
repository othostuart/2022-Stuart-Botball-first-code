#include kiprbotball.h

functions we made to make coding quicker
void startup(){enable_servos();}
void rotate(degrees,dir){motor(0,dir100);
motor(3,-dir100);msleep(degrees9);}
void Tmove(time,power){motor(0,power);
motor(3,power);msleep(time1000);}
void claw(value){set_servo_position
(3,value20.47);}void armAngle(angle)
{set_servo_position(0,angle-10+1850);}
void Dmove(distance,power){motor(0,power);
motor(3,power);msleep(distance2800);}

int main()
{
    Tmove(3,100);
    rotate(135,-1);
    Tmove(1,100);
    return 0;
}