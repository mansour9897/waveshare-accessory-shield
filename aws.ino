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

    // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3D (for the 128x64)
  // init done
  
  // Show image buffer on the display hardware.
  // Since the buffer is intialized with an Adafruit splashscreen
  // internally, this will display the splashscreen.
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(5,5);
  display.println("Auther :");
  display.display();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(5,25);
  display.println("M.Marvasti");
  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop()
{
    
}