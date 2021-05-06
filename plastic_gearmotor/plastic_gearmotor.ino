int mop = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(mop, OUTPUT);
digitalWrite(mop, LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(mop, HIGH); // mopper on
Serial.println("mopper on");
}
