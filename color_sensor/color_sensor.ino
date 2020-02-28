//const int s0=47;
//const int s1=48;
//const int s2=49;
//const int s3=50;
//const int out=51;
//const int vcc=52;
//const int led=53;
const int s0=3;
const int s1=4;
const int s2=5;
const int s3=6;
const int out=7;
const int vcc=8;
const int led=9;
int red,green,blue,a;
void setup() {
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(out,INPUT);
  pinMode(vcc,OUTPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  digitalWrite(s0,HIGH);
  digitalWrite(s1,HIGH);
  digitalWrite(vcc,HIGH);
  digitalWrite(led,LOW);
}
void getdata(){
    digitalWrite(s2,LOW);
    digitalWrite(s3,LOW);
    red=pulseIn(out,LOW);
//  Serial.print("red:");
//  Serial.print(red);
//  Serial.print(" ");
//    delay(500);
    digitalWrite(s2,LOW);
    digitalWrite(s3,HIGH);
    blue=pulseIn(out,LOW);
//  Serial.print("blue:");
//  Serial.print(blue);
//  Serial.print(" ");
//    delay(500);
    digitalWrite(s2,HIGH);
    digitalWrite(s3,HIGH);
    green=pulseIn(out,LOW);
//  Serial.print("green:");
//  Serial.println(green);
//    delay(500);
    if(red<green && red<blue && red<300)
    {
      Serial.println("Red");
//      Serial.println(" ");
    }
    else if(green<red && green<blue && green<300)
    {
      Serial.println("Green");
      Serial.println(" ");
    }
    else if(blue<red && blue<red && blue<300)
    {
      Serial.println("Blue");
      Serial.println(" ");
    }
    else{
      Serial.println("NOTHING");
    }
}
void loop() {
  getdata();
//  delay(100);

}//remaining returnvalue of ......
