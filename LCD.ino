#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
      lcd.init();
    lcd.backlight();
    Serial.begin(9600);

}
void loop() {
    lcd.setCursor(0,0);
  lcd.print("Distance: ");
  Serial.print("play");
delay (1000);
lcd.clear();
}
