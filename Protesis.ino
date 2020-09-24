#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


const int potPin = 34;
int potValue = 0;

void setup() {
   Serial.begin(115200);
   Serial.print("Inicializando");
   Serial.println("...");
   delay(1000);

}

void loop() {

  analogReadResolution(10);
  potValue = analogRead(potPin);
   Serial.println(potValue);
   delay(50);

} 
