#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>
class Motor{
public:
  int in1, in2, pwm, stby;
  Motor( int in1, int in2, int pwm, int stby );
  ~Motor( );
  void clockwise( int pwmv );
  void anticlockwise( int pwmv );
  void short_brake( int pwmv );
  void cold_stop( int pwmv );

};
#endif