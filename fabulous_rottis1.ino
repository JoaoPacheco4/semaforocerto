// C++ code
//
void setup()
{ pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(0, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(0, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(0, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(0, LOW);
  delay(3000); // Wait for 3000 millisecond(s)
}