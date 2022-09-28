int buttonPin = A0;
int ledPin =7;
int ledState = 0;
int buttonOld = 1;
int buttonNew;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew = digitalRead(buttonPin);
  Serial.println(buttonNew);
  delay(dt);
  if(buttonNew == 0 && buttonOld == 1){
    if (ledState == 0){
    digitalWrite(ledPin, 1);
    ledState = 1;
  } 
  else {
    digitalWrite(ledPin, 0); 
    ledState = 0;
  }
}
 buttonOld=buttonNew;
}
