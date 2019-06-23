#ifndef MOTOR_CONTROLLER_H
#define MOTOR_CONTROLLER_H

// L293D Library Source: https://github.com/adafruit/Adafruit-Motor-Shield-library

#include "Arduino.h"
#include <AFMotor.h> // For now only using the DC Motor part of the library
#include <ArduinoSTL.h>
#include <map>

enum MotorID {M1=1, M2=2, M3=3, M4=4};

class MotorController
{
  public:
    MotorController();
    void addDCMotor(MotorID id);
    
    void setSpeed(MotorID id, unsigned char speed); // 0-255
    void goForward(MotorID id);
    void goBackwards(MotorID id);
    void stopMotor(MotorID id);
  private:
    std::map<MotorID, AF_DCMotor*> mMotors;
};

#endif
