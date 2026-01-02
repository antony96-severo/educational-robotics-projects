// C++ code
//
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  lcd_1.begin(16, 2);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) > 300) {
    digitalWrite(8, LOW);
    lcd_1.setCursor(0, 0);
    lcd_1.setBacklight(0);
    lcd_1.noDisplay();
  } else {
    digitalWrite(8, HIGH);
    lcd_1.setCursor(0, 0);
    lcd_1.setBacklight(1);
    lcd_1.display();
    lcd_1.print("Luz acesa!");
  }
  delay(10); // Delay a little bit to improve simulation performance
}