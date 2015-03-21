// Note: bluetooth works exactly like any other serial connection!
// Be sure to plug in the RX/TX pins of the bluetooth module
// to pins 1 and 0 of the Arduino

void setup()
{
  // Initialize the bluetooth module connection
  Serial.begin(9600);
}

void loop()
{
  // Check if there is data available from the bluetooth module
  if (Serial.available())
  {
    // If there is, read one letter
    char val = Serial.read();
    // Send that letter back over bluetooth
    Serial.println(val);
  }
}
