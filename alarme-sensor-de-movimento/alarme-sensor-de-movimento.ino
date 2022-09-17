// C++ code
//
void setup()
{
  pinMode(3, INPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(3));
  if (digitalRead(3) == 1) {
    tone(2, 29, 500); // play tone 10 (A#0 = 29 Hz)
  }
  delay(1000); // Wait for 1000 millisecond(s)
}
