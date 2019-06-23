
#include "MotorController.h"

MotorController motorController;

void setup() {
  // put your setup code here, to run once:
  motorController.addDCMotor(M1);
  motorController.setSpeed(M1, 200);
  motorController.stopMotor(M1);
}

void loop() {
  motorController.goForward(M1);
  // put your main code here, to run repeatedly:

}
