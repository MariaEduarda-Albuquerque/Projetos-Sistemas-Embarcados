// C++ code
//
int cont = 0;

void setup()
{
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);

  cont = 0;
}

void loop()
{
  if (digitalRead(3) == 1) {
    cont = (cont + 1);
  }
  if (cont % 2 == 0) {
    digitalWrite(2, LOW);
  } else {
    digitalWrite(2, HIGH);
  }
  delay(300); // Wait for 300 millisecond(s)
}