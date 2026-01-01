// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) >= 500) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}