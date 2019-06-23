#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H

#include "Arduino.h"

class UltrasonicSensor {
  public:
    UltrasonicSensor(const int &trigPin, const int &echoPin);
    float measureDistance();
  private:
    int trigPin;
    int echoPin;

    long duration;
    float distance;
};

#endif
