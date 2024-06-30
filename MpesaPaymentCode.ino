#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int Relay = 7;

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  pinMode(Relay, OUTPUT);

  lcd.begin(16,2);       // initialize the LCD
  lcd.backlight();  // Turn on the blacklight

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("SYSTEM");
  lcd.setCursor(0, 1);
  lcd.print("INITIALIZATION");
  delay(2000);


}

void loop() {
  digitalWrite(Relay, HIGH);

}
