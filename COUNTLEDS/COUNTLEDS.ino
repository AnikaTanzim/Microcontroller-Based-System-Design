int ledpin=12;
int ledpin2 = 13;
int ledpin3 = 14;
void setup() {
  // put your setup code here, to run once:
 pinMode(ledpin,OUTPUT);
 pinMode(ledpin2,OUTPUT);
 pinMode(ledpin3,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,LOW);
  delay(1000);
  digitalWrite(ledpin,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,HIGH);
  delay(1000);
  digitalWrite(ledpin,LOW);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin3,LOW);
  delay(1000);
  digitalWrite(ledpin,LOW);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin3,HIGH);
  delay(1000);
  digitalWrite(ledpin,HIGH);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,LOW);
  delay(1000);
  digitalWrite(ledpin,HIGH);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,HIGH);
  delay(1000);
  digitalWrite(ledpin,HIGH);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin3,LOW);
  delay(1000);
  digitalWrite(ledpin,HIGH);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin3,HIGH);
  delay(1000);
  
}
