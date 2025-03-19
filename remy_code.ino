#include <Servo.h>
#define OUR_LED 9
#define OUR_LED2 10
#define button 0

Servo servoLeft;
Servo servoRight;

int servoPosLeft = 0;
int servoPosRight = 0;

unsigned long previousMillisLeft = 0;
unsigned long previousMillisRight = 0;
const long interval = 800; // Servo update interval (in milliseconds)

void setup() {
  // Attach servos to pins
  servoLeft.attach(3);
  servoRight.attach(5);

  pinMode(OUR_LED, OUTPUT);
  pinMode(button, INPUT);
  pinMode(OUR_LED2, OUTPUT);

  // Set the LEDs to 50% brightness using PWM
  analogWrite(OUR_LED, 0);    // 50% brightness on LED 1
  analogWrite(OUR_LED2, 0);   // 50% brightness on LED 2

  // Initialize random seed for random movement
  randomSeed(analogRead(0));
}

void loop() {
  unsigned long currentMillis = millis();

  // Move servoLeft independently at random intervals
  if (currentMillis - previousMillisLeft >= interval) {
    previousMillisLeft = currentMillis;

    // Angle for the left servo (servoLeft)
    servoPosLeft = random(75, 135);
    servoLeft.write(servoPosLeft);
  }

  // Move servoRight independently at random intervals
  if (currentMillis - previousMillisRight >= interval) {
    previousMillisRight = currentMillis;

    // Angle for the right servo (servoRight)
    servoPosRight = random(45, 105);
    servoRight.write(servoPosRight);
  }
}
