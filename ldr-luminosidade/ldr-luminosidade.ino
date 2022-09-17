// C++ code
//
void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A5));
  if (analogRead(A5) < 480) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  } else {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}
