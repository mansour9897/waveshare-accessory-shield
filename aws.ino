#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 7
#define OLED_SA0   8
Adafruit_SSD1306 display(OLED_RESET, OLED_SA0);

#define buzzer_pin 11
void setup()
{
    pinMode(buzzer_pin, OUTPUT);
    
    //Test Buzzer
    digitalWrite(buzzer_pin,HIGH);
    delay(500);
    digitalWrite(buzzer_pin,LOW);
}

void loop()
{
    
}