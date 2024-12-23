
void setup() {
  //pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  unsigned long tempo = millis();
  Serial.println(tempo);
  delay(500);

}
