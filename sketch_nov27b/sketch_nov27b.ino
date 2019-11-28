int buz = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(buz, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 1; i < 455; i++) {
    digitalWrite(buz, HIGH);
    delay(1);
    digitalWrite(buz, LOW);
    delay(1);
  }

  for (int j = 1; j < 1000; j++){
    digitalWrite(buz, HIGH);
    delay(1);
    digitalWrite(buz, LOW);
    delay(1);

  }
}
