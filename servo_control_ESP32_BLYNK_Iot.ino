#define BLYNK_TEMPLATE_ID "your id"
#define BLYNK_TEMPLATE_NAME "your templatename"
#define BLYNK_AUTH_TOKEN "your auth token"

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <ESP32Servo.h>

char auth[] = BLYNK_AUTH_TOKEN; // Blynk authentication token
char ssid[] = "your ssid"; // Your WiFi SSID
char pass[] = "your pass word"; // Your WiFi password

Servo servo1;
Servo servo2;

void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  servo1.attach(2); // Attach servo 1 to GPIO 2
  servo2.attach(4); // Attach servo 2 to GPIO 4
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V0) // Slider Widget for Servo 1 on V0
{
  int pos2 = param.asInt(); // Get value from slider
  servo1.write(pos2); // Set servo 1 position
  Blynk.virtualWrite(V1, pos2);
}

BLYNK_WRITE(V1) // Slider Widget for Servo 2 on V1
{
  int pos2 = param.asInt(); // Get value from slider
  servo2.write(pos2); // Set servo 2 position
  Blynk.virtualWrite(V3, pos2);
}
