#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
 lcd.init();
 lcd.backlight(); 

}

void loop() {
lcd.setCursor(0,0);
lcd.print("Subscribe"); 
lcd.setCursor(0,1);
lcd.print("Like Share");  


}
