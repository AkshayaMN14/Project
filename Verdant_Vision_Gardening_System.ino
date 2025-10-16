//e3735@ptct.net
//Info@2025
#include<Wire.h>
#include <LCD_I2C.h>
#include "DHT.h"
#define DHTPIN 4
#define DHTTYPE DHT11  
#define moist 32
#define relay 23
#define BLYNK_PRINT Serial  
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#define BLYNK_TEMPLATE_ID "TMPL3Ezl3sAQp"
#define BLYNK_TEMPLATE_NAME "GARDENING SYSTEM"
#define BLYNK_AUTH_TOKEN "s8eeiG-XJSLDomSTpr0vd8IX0jqxnO-q"

LCD_I2C lcd(0x27, 16, 2);
DHT dht(DHTPIN, DHTTYPE);

char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "IOT";
char pass[] = "123456789"; 
void setup()
{
   Serial.begin(9600);
   lcd.begin(); // If you are using more I2C devices using the Wire library use lcd.begin(false)
  
   lcd.backlight();
   lcd.setCursor(0, 0); // Or setting the cursor in the desired position.
   lcd.print("  GARDENING ");
    
   lcd.setCursor(0, 1); // Or setting the cursor in the desired position.
   lcd.print("  SYSTEM ");
   delay(3000);
   lcd.clear();
   dht.begin();
   pinMode(moist,INPUT);
   pinMode(relay,OUTPUT);
   Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}
int h,t,moistval,iotsend;
void loop()
{
   h=dht.readHumidity();
   t=dht.readTemperature();

   if(t>100){t=33; h=52;}
   Serial.print("T:");
   Serial.println(t);

   Serial.print("H:");
   Serial.println(h);

   lcd.setCursor(0,0);
   lcd.print("T:");
   lcd.print(t);
   lcd.setCursor(8,0);
   lcd.print("H:");
   lcd.print(h);
   int moistval=analogRead(moist);
   Serial.print("MOIST:");
   Serial.println(moistval);
   moistval=map(moistval,1000,2600,100,0);
   Serial.print("MAPPED MOIST:");
   if(moistval<=0)
   {
    moistval=0;
   }
   if(moistval>=100)
   {
    moistval=100;
   }
   Serial.println(moistval);
   lcd.setCursor(0,1);
   lcd.print("MOI:");
   if(moistval<=9){lcd.print("00");lcd.print(moistval);}
   else if(moistval<=99){lcd.print("0");lcd.print(moistval);}
   else if(moistval<=999){lcd.print("");lcd.print(moistval);}
   if(moistval<=30 && moistval>1)
   {
    digitalWrite(relay,HIGH);
    lcd.setCursor(8,1);
    lcd.print("PUMP:ON "); 
    Blynk.virtualWrite(V3,"PUMP IS ON");
   }
   else
   {
    digitalWrite(relay,LOW);
    lcd.setCursor(8,1);
    lcd.print("PUMP:OFF");
    Blynk.virtualWrite(V3,"PUMP IS OFF");
   }
    if(iotsend==1)
  {
    Serial.println("iot dara send ,,,,");
    Blynk.virtualWrite(V0,t);
    Blynk.virtualWrite(V1,h);
    Blynk.virtualWrite(V2,moistval);
    delay(1000);
  }
  Blynk.run();
   delay(300);
}
BLYNK_WRITE(V4) {
  int button = param.asInt();
  Serial.print("Button value :");
  Serial.println(button);
  if (button == 1) {
    Serial.println("iot buttoin pressed");
    iotsend=1;
  }
  else {iotsend=0;}
} how do i save this code as a file?
