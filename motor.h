#ifndef motor_h
#define motor_h
#include "Arduino.h"

class Motor{

  private: 
    int ENA;
    int IN1;
    int IN2;
    int IN3;
    int IN4;
    int ENB;
    
  public:

     Motor(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6);
     void setpins();
     void forward(int sped);
     void backward(int sped);
     void Stop();
  };

  #endif
