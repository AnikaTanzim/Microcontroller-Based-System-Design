
int LeftMotorForward = 7; // Pin 7 has Left Motor connected on Arduino boards.
int LeftMotorReverse = 6; // Pin 6 has Left Motor connected on Arduino boards.
int RightMotorForward = 11; // Pin 11 has right Motor connected on Arduino boards.
int RightMotorReverse = 10; // Pin 10 has right Motor connected on Arduino boards.

void setup()
{
  Serial.begin(9600);
  pinMode(LeftMotorForward, OUTPUT);  
  pinMode(LeftMotorReverse, OUTPUT);  
  pinMode(RightMotorForward, OUTPUT);  
  pinMode(RightMotorReverse, OUTPUT); 
}

void loop() {
   // Forward
   digitalWrite(LeftMotorForward, HIGH);
   digitalWrite(LeftMotorReverse, LOW);
   digitalWrite(RightMotorForward, HIGH);
   digitalWrite(RightMotorReverse, LOW);   
   delay(2000);
   
   // Reverse
   digitalWrite(LeftMotorReverse, HIGH);   
   digitalWrite(LeftMotorForward, LOW);  
      digitalWrite(RightMotorReverse, HIGH);
     digitalWrite(RightMotorForward, LOW);
 
   delay(2000);
   
   // Stop
   digitalWrite(LeftMotorReverse, LOW);  
   digitalWrite(LeftMotorForward, LOW); 
      digitalWrite(RightMotorReverse, LOW);   
        digitalWrite(RightMotorForward, LOW);
   delay(2000);
}

