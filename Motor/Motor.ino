int pinA1A = 9; // Pin A1A on the motor driver
int pinA1B = 10; // Pin A1B on the motor driver
int pinB1A = 11; // Pin B1A on the motor driver
int pinB1B = 6; // Pin B1B on the motor driver

void setup()
{
  pinMode(pinA1A, OUTPUT); // Motor pin A1 as OUTPUT
  pinMode(pinA1B, OUTPUT); // Motor pin A2 as OUTPUT
  pinMode(pinB1A, OUTPUT); // Motor pin B1 as OUTPUT
  pinMode(pinB1B, OUTPUT); // Motor pin B2 as OUTPUT
}

void loop()
{
  // put your main code here, to run repeatedly:
  
}

void moveMotorAForward(int motorSpeed)
{
  // Speed can range from 0 (slow) to 255 (fastest)
    analogWrite(pinA1A, motorSpeed);
    analogWrite(pinA1B, 0); 
}

void moveMotorBForward(int motorSpeed)
{
  // Speed can range from 0 (slow) to 255 (fastest)
  analogWrite(pinB1A, motorSpeed);
  analogWrite(pinB1B, 0); 
}

void moveMotorABackward(int motorSpeed)
{
  // Speed can range from 0 (slow) to 255 (fastest)
    analogWrite(pinA1A, 0);
    analogWrite(pinA1B, motorSpeed); 
}

void moveMotorBBackward(int motorSpeed)
{
  // Speed can range from 0 (slow) to 255 (fastest)
  analogWrite(pinB1A, 0);
  analogWrite(pinB1B, motorSpeed); 
}

void stopMotorA()
{
  analogWrite(pinA1A, 0);
  analogWrite(pinA1B, 0);
}

void stopMotorB() 
{
  analogWrite(pinA1A, 0);
  analogWrite(pinA1B, 0);
}
