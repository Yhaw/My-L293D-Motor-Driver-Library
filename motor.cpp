/* Library written by Sylvian Kimkpe on the 17/08/22 for BTS7960 Motor Driver*/


#include "Arduino.h"
#include "motor.h"


    Motor::Motor(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6){

        ENA = pin1;
        IN1 = pin2;
        IN2 = pin3;
        IN3 = pin4;
        IN4 = pin5;
        ENB = pin6;
        
      } 

    void Motor::setpins(){
      
       pinMode(ENA, OUTPUT);
       pinMode(IN1, OUTPUT);
       pinMode(IN2, OUTPUT);
       pinMode(IN3, OUTPUT);
       pinMode(IN4, OUTPUT);
       pinMode(ENB, OUTPUT);
       
       
      }


    void Motor::forward(int sped)//sped => 0 to 255
    {
      analogWrite(ENA, sped);
      analogWrite(ENB, sped);

      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
      
      }

    void Motor::backward(int sped)
    {
      analogWrite(ENA, sped);
      analogWrite(ENB, sped);

      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
      }

     void Motor::Stop(){
      analogWrite(ENA, 0);
      analogWrite(ENB, 0);

      digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
      }
