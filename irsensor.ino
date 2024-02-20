#include<IRremote.h>
int ot=D4;
int rec;
byte r=LOW;
void setup() {
  Serial.begin(9600);
  pinMode(D3,OUTPUT);
  IrReceiver.begin(ot);
}

void loop() {
  if(IrReceiver.decode()){

Serial.println(IrReceiver.decodedIRData.command);
rec=IrReceiver.decodedIRData.command;
switch(rec){
case 2448:{
  
  
digitalWrite(D3,1);
break;
}
case 2432:{
  
  
digitalWrite(D3,0);
break;
}
}
IrReceiver.resume();

  }


}

