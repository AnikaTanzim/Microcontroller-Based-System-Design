int pin1=13;
int pin2=12;
int pin3=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin1,HIGH);
  delay(700);
  digitalWrite(pin1,LOW);
  delay(1400);
    digitalWrite(pin2,HIGH);
  delay(700);
  digitalWrite(pin2,LOW);
  delay(1400);
    digitalWrite(pin3,HIGH);
  delay(700);
  digitalWrite(pin3,LOW);
  delay(1400);
  

}
