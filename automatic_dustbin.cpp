int trigPin = 9;  
int echoPin = 10; 
int servoPin = 6; 

long duration;
int distance;

#include <Servo.h>
Servo myservo;  // create servo object to control a servo

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(servoPin);  // attaches the servo on pin 6 to the servo object
  myservo.write(0);  // Initialize servo position to closed
}

void loop() {
  // Trigger ultrasonic sensor to get distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);  // Allow pulse to settle

  duration = pulseIn(echoPin, HIGH); // Measure the time it takes for the pulse to go high

  // Calculate distance in centimeters
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // Check if the distance is less than a threshold (adjust as needed)
  if (distance < 20) {
    // Open the servo motor to simulate the dustbin opening
    myservo.write(90); // 90 degrees corresponds to the open position
    delay(5000);       // Adjust the delay as needed for your servo to complete the movement

    // Close the servo motor to simulate the dustbin closing
    myservo.write(0);  // 0 degrees corresponds to the closed position
  }

  delay(1000); // Adjust the delay between distance measurements
}
