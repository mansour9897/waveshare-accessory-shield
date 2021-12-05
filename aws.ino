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