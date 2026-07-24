// C++ code
//
void setup()
{
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if (digitalRead(3) == 1) {
    digitalWrite(4, HIGH);
  }
  if (digitalRead(2) == 1) {
    digitalWrite(4, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}