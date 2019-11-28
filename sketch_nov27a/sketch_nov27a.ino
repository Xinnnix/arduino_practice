#define blue 3
#define green 5
#define red 6


void setup() {
  // put your setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(red, 200);
analogWrite(green,50);
analogWrite(blue, 190);
}
