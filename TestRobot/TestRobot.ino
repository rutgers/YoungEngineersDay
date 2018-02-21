//add the necessary libraries
#include <Wire.h>
#include <Adafruit_MotorShield.h>

Adafruit_MotorShield AFMS=Adafruit_MotorShield(); //declare an Adafruit MotorShield object

Adafruit_DCMotor *motor1=AFMS.getMotor(3); //make a pointer to a motor for the first motor
Adafruit_DCMotor *motor2=AFMS.getMotor(4); //make a pointer to a motor for the second motor

//motor1->setSpeed(x) sets the speed of motor1 to x. 0<=x<=255
//motor1->run(FORWARD) set motor1 to go forward
//motor1->run(BACKWARD) sets the motor1 to run in reverse
//motor1->run(RELEASE) stops motor1 (setSpeed(0) will also do this)
//turnLeft() will make the robot turn left
//turnRight() will make the robot turn right

void turnLeft()
{
  motor1->run(FORWARD);
  motor2->run(BACKWARD);
}

void turnRight()
{
  motor1->run(BACKWARD);
  motor2->run(FORWARD);
}

void setup() 
{
  AFMS.begin(); //tell the Adafruit Motor_Shield object to start
  motor1->setSpeed(100);
  motor2->setSpeed(100);
  motor1->run(FORWARD);
  motor2->run(FORWARD);
}

void loop() 
{
  //your code here
}
