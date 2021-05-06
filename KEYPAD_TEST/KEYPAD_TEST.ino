#include<Keypad.h>  
const byte rows = 4;
const byte cols =4;
char keys[rows][cols] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
//white ones are col and black ones are row44444444443                                                                                                                              
byte rowPins[rows] = {4,5,6,7};
byte colPins[cols] = {8,9,10,11};

Keypad CustomKeypad = Keypad(makeKeymap(keys),rowPins,colPins,rows,cols);

#define ledpin 13


void setup() {
  // put your setup code here, to run once:
 
  pinMode(ledpin,OUTPUT);
  digitalWrite(ledpin,HIGH);
  Serial. begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  char customKeey = CustomKeypad.getKey();

  switch(customKeey){
    case '*':
      digitalWrite(ledpin,LOW);
      break;
    case'#':
      digitalWrite(ledpin,HIGH);
      break;
    default:
    Serial.println(customKeey);
    
    
  }

}
