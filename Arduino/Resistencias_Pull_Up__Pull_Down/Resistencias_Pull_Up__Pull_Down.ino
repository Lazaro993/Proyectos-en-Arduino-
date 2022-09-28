int buttonPin = A1;
int ledPin = 2;
int ledState = 0;
int buttonOld = 1;
int buttonNew;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew = digitalRead(buttonPin);
  Serial.println(buttonRead);
  if (buttonNew == 0 && buttonOld == 1);{
    if (ledState == 0)
    digitalWrite(ledPin, 1);
    ledState == 1;
  } 
  else {
    digitalWrite (ledPin, 0); 
  }
buttonOld = buttonNew;

}
