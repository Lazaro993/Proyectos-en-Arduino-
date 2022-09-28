int ledPin = 3;
int buzzPin = 9;
int buttonRight = A1;
int buttonLeft = A0;
int buttonPressR;
int buttonPressL;
int dt = 100;
int buttonOldR = 1;
int buttonOldL = 1;
float ledCounter;
int i = 0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(buzzPin, OUTPUT);
pinMode(buttonRight, INPUT);
pinMode(buttonLeft,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonPressR = digitalRead(buttonRight);
buttonPressL = digitalRead(buttonLeft);
delay(dt);

if(buttonPressR == 0 && buttonOldR == 1){
    ledCounter = ledCounter + 63.75;
    analogWrite(ledPin, ledCounter);
}
if(buttonPressL == 0 && buttonOldL == 1){
    ledCounter = ledCounter - 63.75;
    analogWrite(ledPin, ledCounter);
}
Serial.println(ledCounter);
if(ledCounter > 255){
  ledCounter == 255;
  digitalWrite(buzzPin, HIGH);
  delay(1000);
  digitalWrite(buzzPin, LOW);
  analogWrite(buzzPin, ledCounter); 
}
if(ledCounter < 0){
  ledCounter == 0;
  digitalWrite(buzzPin, HIGH);
  delay(1000);
  digitalWrite(buzzPin, LOW);
  analogWrite(buzzPin, ledCounter);
}
buttonOldR = buttonPressR;
buttonOldL = buttonPressL;

}
