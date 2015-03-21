#include <Servo.h>

int servoPin = 5; // Pin for the servo

Servo servo1; // The servo object

void setup()
{
  // put your setup code here, to run once:
  // Initialize the servo on the specified pin
  servo1.attach(servo1Pin);
  
  // Move the servo to the target destination
  servo1.write(180);
}

void loop()
{
  // put your main code here, to run repeatedly:
  
}
