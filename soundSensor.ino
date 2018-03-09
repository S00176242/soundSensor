int ledPin=8;
int sensorPin=3;
int val =0;


void setup() {
  pinMode(ledPin, OUTPUT);
 
  Serial.begin (38400);

}

void loop() {
   val = analogRead(sensorPin);
  Serial.println (val);
  if (val>=100) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
  
}

