int buzzPin = 8;
int potVal;
String msg1 = "Si escuchas la alarma corre por tu vida";
int dt = 2000;
int dtv = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg1);

  potVal = analogRead(A1);


  Serial.println(potVal);
  delay (dtv);


  while (potVal > 1000) {
    digitalWrite(buzzPin, HIGH);
    potVal = analogRead(A1);
    Serial.println(potVal);
    delay (dtv);
  }
  digitalWrite(buzzPin, LOW);

}
