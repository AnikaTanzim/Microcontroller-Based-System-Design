
int LeftMotorForward1 = 7; // Pin 7 has Left Motor connected on Arduino boards.
int LeftMotorReverse1 = 6; // Pin 6 has Left Motor connected on Arduino boards.
int RightMotorForward1 = 11; // Pin 11 has right Motor connected on Arduino boards.
int RightMotorReverse1 = 10; // Pin 10 has right Motor connected on Arduino boards.

int LeftMotorForward2 = 9; 
int LeftMotorReverse2 = 8; 
int RightMotorForward2= 5; 
int RightMotorReverse2 = 4; 
void setup()
{
  Serial.begin(9600);
  pinMode(LeftMotorForward1, OUTPUT);  
  pinMode(LeftMotorReverse1, OUTPUT);  
  pinMode(RightMotorForward1, OUTPUT);  
  pinMode(RightMotorReverse1, OUTPUT); 

    pinMode(LeftMotorForward2, OUTPUT);  
  pinMode(LeftMotorReverse2, OUTPUT);  
  pinMode(RightMotorForward2, OUTPUT);  
  pinMode(RightMotorReverse2, OUTPUT); 
}

void loop() {
   // Forward
  goForward();
   delay(3000);  
   // Reverse
goBackward();
   delay(3000);
   
   // Stop
stopCar();
   delay(2000);
}
void goForward(){
     digitalWrite(LeftMotorForward1, HIGH);
   digitalWrite(LeftMotorReverse1, LOW);
   digitalWrite(RightMotorForward1, HIGH);
   digitalWrite(RightMotorReverse1, LOW); 

        digitalWrite(LeftMotorForward2, HIGH);
   digitalWrite(LeftMotorReverse2, LOW);
   digitalWrite(RightMotorForward2, HIGH);
   digitalWrite(RightMotorReverse2, LOW);
}
void goBackward(){
     digitalWrite(LeftMotorReverse1, HIGH);   
   digitalWrite(LeftMotorForward1, LOW);  
      digitalWrite(RightMotorReverse1, HIGH);
     digitalWrite(RightMotorForward1, LOW);

        digitalWrite(LeftMotorReverse2, HIGH);   
   digitalWrite(LeftMotorForward2, LOW);  
      digitalWrite(RightMotorReverse2, HIGH);
     digitalWrite(RightMotorForward2, LOW);
}
void goLeft(){
     digitalWrite(LeftMotorReverse1, LOW);   
   digitalWrite(LeftMotorForward1, LOW);  
      digitalWrite(RightMotorReverse1, HIGH);
     digitalWrite(RightMotorForward1, LOW);

        digitalWrite(LeftMotorReverse2, LOW);   
   digitalWrite(LeftMotorForward2, LOW);  
      digitalWrite(RightMotorReverse2, HIGH);
     digitalWrite(RightMotorForward2, LOW);
}
void goRight(){
     digitalWrite(LeftMotorReverse1, HIGH);   
   digitalWrite(LeftMotorForward1, LOW);  
      digitalWrite(RightMotorReverse1, HIGH);
     digitalWrite(RightMotorForward1, LOW);

        digitalWrite(LeftMotorReverse2, HIGH);   
   digitalWrite(LeftMotorForward2, LOW);  
      digitalWrite(RightMotorReverse2, HIGH);
     digitalWrite(RightMotorForward2, LOW);
}
void stopCar(){
     digitalWrite(LeftMotorReverse1, LOW);  
   digitalWrite(LeftMotorForward1, LOW); 
      digitalWrite(RightMotorReverse1, LOW);   
        digitalWrite(RightMotorForward1, LOW);

           digitalWrite(LeftMotorReverse2, LOW);  
   digitalWrite(LeftMotorForward2, LOW); 
      digitalWrite(RightMotorReverse2, LOW);   
        digitalWrite(RightMotorForward2, LOW);

}

