// C++ code
//
// Pins
#include <LiquidCrystal.h>

// Pins
const int trigPin = 2;
const int echoPin = 3;

const int redPin = 5;
const int greenPin = 4;
const int buzzerPin = 10;

// LCD: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 6, 7, 8, 9);

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  lcd.begin(16, 2);
  lcd.print("Distance:");
  Serial.begin(9600);
}

void loop() {
  // Measure distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // LCD Display
  lcd.setCursor(0, 1);
  lcd.print("     ");  // Clear
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.print(" cm    ");

  // Debug
  Serial.print("Distance: ");
  Serial.println(distance);

  // RGB LED Logic
  if (distance < 30) {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    tone(buzzerPin, 1000); // Fast beep
  } else if (distance <= 100) {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 255);
    tone(buzzerPin, 700); // Medium beep
  } else {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    noTone(buzzerPin); // Silent
  }

  delay(500);
}
