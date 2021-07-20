//Motor 1:
#define Ena 10
#define IN1 9
#define IN2 8
//Motor 2:
#define Enb 11
#define IN3 12
#define IN4 13
//
int Speeda=90;
int Direc1=1;
int Direc2=0;

int Speedb=90;
int Direc3=0;
int Direc4=1;
void setup() {
  // put your setup code here, to run once:
pinMode(Ena,OUTPUT);
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(Enb,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 //Motor 1:
 digitalWrite(IN1,Direc1);
 digitalWrite(IN2,Direc2);
 analogWrite(Ena,Speeda);
 //Motor 2:
 digitalWrite(IN3,Direc3); 
 digitalWrite(IN4,Direc4); 
 analogWrite(Enb,Speedb); 
 
}
