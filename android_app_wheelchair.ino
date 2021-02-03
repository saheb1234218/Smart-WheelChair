#include <SoftwareSerial.h>
SoftwareSerial Blue(2,3);

int in1=8;
int in2=9;
long int data;
long int command1=92;
long int command2=79;
long int command3=71;
long int command4=91;
long int command5=10;
char state=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Blue.begin(9600);

pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);


delay(1000);
}



void loop() {
  // put your main code here, to run repeatedly:
while(Blue.available()==0);
if(Blue.available()>0)
{
  data=Blue.parseInt();
}
delay(100);
if(data==command1)
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
 
  }
if(data==command2)
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
  
  }
  if(data==command3)
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
  
  }
  if(data==command4)
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
  
  }
  if(data==command5)
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
 
  }
}
