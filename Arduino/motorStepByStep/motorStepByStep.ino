#include <Stepper.h>
int stepsPerRevolution = 2048;
int motSpeed = 11;
Stepper myStepper(stepsPerRevolution,8,10,9,11);
int dt = 1500;
int pinButton = 6;
int buttonVal;
int dt1 = 100;

void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(motSpeed);
  pinMode(pinButton, INPUT);
  digitalWrite(pinButton, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(stepsPerRevolution);
  

  buttonVal = digitalRead(pinButton);
  Serial.println(buttonVal);
  delay (dt1);

  if (buttonVal == 0) {
  delay (dt);
  myStepper.step(-stepsPerRevolution);
  delay (dt);
  }
  
  
}
