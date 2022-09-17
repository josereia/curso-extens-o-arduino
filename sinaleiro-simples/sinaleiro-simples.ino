// C++ code
//
int ledGreen = 0;

int ledYellow = 0;

int ledRed = 0;

int btn = 9;

int btnState = 0;

int redDelay = 10000;

void setup()
{
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
}

void checkButton() 
{
    btnState = digitalRead(btn);
    if(btnState > 0) {
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      delay(10000); // Wait for 10000 millisecond(s)
      digitalWrite(12, LOW);
    }
}

void loop()
{
    checkButton();
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    checkButton();
    delay(redDelay); // Wait for 10000 millisecond(s)
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    checkButton();
    delay(5000); // Wait for 5000 millisecond(s)
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    checkButton();
    delay(2000); // Wait for 2000 millisecond(s)
}
