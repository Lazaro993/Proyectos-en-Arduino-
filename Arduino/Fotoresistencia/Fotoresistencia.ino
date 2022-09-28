int lightPin = A1;
int lightVal;
int dt = 100;
int dt1 = 500;
int gPin = 8;
int rPin = 10;
int buzzPin = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dt);

}
