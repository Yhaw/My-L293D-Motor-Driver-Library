#include "motor.h" //Include the Library

/*
 Setup the pins for the motor driver.
 Note: All pins should be connected in the following order as indicated on the motor driver.

 https://github.com/Yhaw/My-L293D-Motor-Driver-Library
 This library was written by Sylvian Kimkpe.

//Enjoy it!!
 
*/
Motor motor1(10,2,3,4,5,11); //(EnaA,IN1,IN2,IN3,IN4,ENB)  Make sure ENA and ENB are PWM pins

//Motor motor2(*,*,*,*,*,*); You can add a second Motor Driver or as many Motor Drivers.

void setup() {
  motor1.setpins();
}

void loop() {
  motor1.forward(255);    //Move the robot forward. Speed range 0 - 255.
  delay(1500);
  motor1.backward(255);       //Move back.
  delay(1500);

  motor1.Stop(); //Stops motor

}
