#include <Servo.h>

int servoPin = 9;
int servoPinVolt = 5;
float servoPos = 0;
Servo myServo;
int dt = 100;
int ligthPin = A1;
int ligthVal;


void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
  pinMode(ligthPin, INPUT);
  pinMode(servoPinVolt, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(servoPinVolt, 1);
  ligthVal = analogRead(ligthPin);
  Serial.println(ligthVal);
  delay(dt);
  servoPos = (170./650.)*(ligthVal-500.);
  myServo.write(servoPos);

}
