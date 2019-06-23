#include "Arduino.h"
#include "UltrasonicSensor.h"

//UltrasonicSensor::UltrasonicSensor() {}

UltrasonicSensor::UltrasonicSensor(const int &trigPin, const int &echoPin)
{
  this->trigPin = trigPin;
  this->echoPin = echoPin;
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
}

float UltrasonicSensor::measureDistance()
{
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Set the trigPin on HIGH state for 10 uSecs
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the echoPin, return the sound wave travel time in uSecs
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance
  // S = (V x t)/2
  distance = duration*0.034/2;
  return distance;
}
