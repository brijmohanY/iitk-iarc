int IR_1=22;
int IR_2=23;
int IR_3=24;
int IR_4=25;
int IR_5=26;
int IR_6=27;
int IR_7=28;
int power_1=29;
int power_2=30;
int power_3=31;
int power_4=32;
int power_5=33;
int power_6=34;
int power_7=35;
int ground_1=36;
int ground_2=37;
int ground_3=38;
int ground_4=39;
int ground_5=40;
int ground_6=41;
int ground_7=42;
int count=0;
int LM_F=43;
int LM_R=44;
int RM_F=45;
int RM_R=46;
int EN_R=47;
int EN_L=48;

void setup() {
  // put your setup code here, to run once:
      pinMode(IR_1,INPUT);
      pinMode(IR_2,INPUT);
      pinMode(IR_3,INPUT);
      pinMode(IR_4,INPUT);
      pinMode(IR_5,INPUT);
      pinMode(IR_6,INPUT);
      pinMode(power_1,OUTPUT);
      pinMode(power_2,OUTPUT);
      pinMode(power_3,OUTPUT);
      pinMode(power_4,OUTPUT);
      pinMode(power_5,OUTPUT);
      pinMode(power_6,OUTPUT);
      pinMode(ground_1,OUTPUT);
      pinMode(ground_2,OUTPUT);
      pinMode(ground_3,OUTPUT);
      pinMode(ground_4,OUTPUT);
      pinMode(ground_5,OUTPUT);
      pinMode(ground_6,OUTPUT);
      pinMode(LM_F,OUTPUT);
      pinMode(LM_R,OUTPUT);
      pinMode(RM_F,OUTPUT);
      pinMode(RM_R,OUTPUT);
      pinMode(EN_R,OUTPUT);
      pinMode(EN_L,OUTPUT);
      Serial.begin(9600);

}
void stope()
 {
  digitalWrite(LM_F,LOW);
  digitalWrite(LM_R,LOW);
  digitalWrite(RM_F,LOW);
  digitalWrite(RM_R,LOW);
  Serial.println("stop");
 }
void forward()
{
  digitalWrite(LM_F,HIGH);
  digitalWrite(RM_F,HIGH);
  digitalWrite(LM_R,LOW);
  digitalWrite(RM_R,LOW);
  Serial.println("forward");
}
void left()
{
  digitalWrite(LM_F,LOW);
  digitalWrite(LM_R,HIGH);
  digitalWrite(RM_F,HIGH);
  digitalWrite(RM_R,LOW);
  Serial.println("left");
}
void right()
{
   digitalWrite(LM_F,HIGH);
  digitalWrite(LM_R,LOW);
  digitalWrite(RM_F,LOW);
  digitalWrite(RM_R,HIGH);
  Serial.println("right");
}

void linefollow()
{
  if((digitalRead(IR_1)==0)&&(digitalRead(IR_2)==0)&&(digitalRead(IR_3)==1)&&(digitalRead(IR_5)==0)&&(digitalRead(IR_6)==0))
      {
        forward();
        Serial.println("forward");
       }
  else if((digitalRead(IR_1)==0)&&(digitalRead(IR_2)==0)&&(digitalRead(IR_4)==1)&&(digitalRead(IR_5)==0)&&(digitalRead(IR_6)==0))
      {
        forward();
        Serial.println("forward");
      }
  
   else if((digitalRead(IR_1)==0)&&(digitalRead(IR_2)==1)&&(digitalRead(IR_5)==0)&&(digitalRead(IR_6)==0)){
    left();
   }
   else if((digitalRead(IR_1)==0)&&(digitalRead(IR_2)==0)&&(digitalRead(IR_5)==1)&&(digitalRead(IR_6)==0))
      {
      right();
      }
    else if((digitalRead(IR_1)==1)&&(digitalRead(IR_2)==1)&&(digitalRead(IR_3)==1)&&(digitalRead(IR_6)==0)&&(digitalRead(IR_5)==0)){
        delay(300);
        while(digitalRead(IR_7)==0)
        {
            left();
         }
//        stope();
        }
    else if((digitalRead(IR_1)==0)&&(digitalRead(IR_2)==0)&&(digitalRead(IR_4)==1)&&(digitalRead(IR_6)==1)&&(digitalRead(IR_5)==0)){
        delay(300);
        while(digitalRead(IR_7)==0)
        {
            right();
         }
//        stope();
        }

}
 
void loop() {
  // put your main code here, to run repeatedly:
      digitalWrite(power_1,HIGH);
      digitalWrite(power_2,HIGH);
      digitalWrite(power_3,HIGH);
      digitalWrite(power_4,HIGH);
      digitalWrite(power_5,HIGH);
      digitalWrite(power_6,HIGH);
      digitalWrite(ground_1,LOW);
      digitalWrite(ground_2,LOW);
      digitalWrite(ground_3,LOW);
      digitalWrite(ground_4,LOW);
      digitalWrite(ground_5,LOW);
      digitalWrite(ground_6,LOW);
      digitalWrite(power_7,HIGH);
      digitalWrite(ground_7,LOW);
      digitalWrite(EN_R,HIGH);
      digitalWrite(EN_L,HIGH);
      linefollow();
}
