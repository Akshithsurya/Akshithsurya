#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

const int ledPin = 2; // GPIO pin where the LED is connected

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_LED_Controller"); // Bluetooth device name
  pinMode(ledPin, OUTPUT);
  Serial.println("The device started, now you can pair it with Bluetooth!");
}

void loop() {
  if (SerialBT.available()) {
    char incomingChar = SerialBT.read();

    Serial.print("Received: ");
    Serial.println(incomingChar);

    if (incomingChar == '1') {
      digitalWrite(ledPin, HIGH); // Turn LED on
      Serial.println("LED ON");
    } else if (incomingChar == '0') {
      digitalWrite(ledPin, LOW); // Turn LED off
      Serial.println("LED OFF");
    }
  }
}k
