#include "Arduino.h"
#include "MotorController.h"

MotorController::MotorController() {}
    
void MotorController::addDCMotor(MotorID id)
{
  mMotors[id] = new AF_DCMotor(id);
}

void MotorController::setSpeed(MotorID id, unsigned char speed)
{
  auto motor = mMotors.find(id);
  if (motor != mMotors.end()) {
    motor->second->setSpeed(speed);
  }
}

void MotorController::goForward(MotorID id)
{
  auto motor = mMotors.find(id);
  if (motor != mMotors.end()) {
    motor->second->run(FORWARD);
  }
}

void MotorController::goBackwards(MotorID id)
{
  auto motor = mMotors.find(id);
  if (motor != mMotors.end()) {
    motor->second->run(BACKWARD);
  }
}

void MotorController::stopMotor(MotorID id)
{
  auto motor = mMotors.find(id);
  if (motor != mMotors.end()) {
    motor->second->run(RELEASE);
  }
}
