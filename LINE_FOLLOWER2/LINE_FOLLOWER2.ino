int IR_EL=22;
int IR_L=23;
int IR_M1=24;
int IR_M2=25;
int IR_R=26;
int IR_ER=27;
int power_EL=29;
int power_L=30;
int power_M1=31;
int power_M2=32;
int power_R=33;
int power_ER=34;
int ground_EL=36;
int ground_L=37;
int ground_M1=38;
int ground_M2=39;
int ground_R=40;
int ground_ER=41;
int LM_F=43;
int LM_R=44;
int RM_F=45;
int RM_R=46;
void setup() {
  // put your setup code here, to run once:
pinMode(IR_EL,INPUT);
pinMode(IR_L,INPUT);
pinMode(IR_M1,INPUT);
pinMode(IR_M2,INPUT);
pinMode(IR_R,INPUT);
pinMode(IR_ER,INPUT);
pinMode(power_EL,OUTPUT);
pinMode(power_L,OUTPUT);
pinMode(power_M1,OUTPUT);
pinMode(power_M2,OUTPUT);
pinMode(power_R,OUTPUT);
pinMode(power_ER,OUTPUT);
pinMode(ground_EL,OUTPUT);
pinMode(ground_L,OUTPUT);
pinMode(ground_M1,OUTPUT);
pinMode(ground_M2,OUTPUT);
pinMode(ground_R,OUTPUT);
pinMode(ground_ER,OUTPUT);
pinMode(LM_F,OUTPUT);
pinMode(LM_R,OUTPUT);
pinMode(RM_F,OUTPUT);
pinMode(RM_R,OUTPUT);
}
void forward()
{
  digitalWrite(LM_F,HIGH);
  digitalWrite(RM_F,HIGH);
  digitalWrite(LM_R,LOW);
  digitalWrite(RM_R,LOW);
}
void right()
{
  digitalWrite(LM_F,HIGH);
  digitalWrite(LM_R,LOW);
  digitalWrite(RM_F,LOW);
  digitalWrite(RM_R,HIGH);
  delay(100);
}
void left()
{
  digitalWrite(LM_F,LOW);
  digitalWrite(LM_R,HIGH);
  digitalWrite(RM_F,HIGH);
  digitalWrite(RM_R,LOW);
  delay(100);
}
void stope()
{
  
  digitalWrite(LM_F,LOW);
  digitalWrite(LM_R,LOW);
  digitalWrite(RM_F,LOW);
  digitalWrite(RM_R,LOW);
}
void loop() 
{
  // put your main code here, to run repeatedly:
    digitalWrite(power_EL,HIGH);
    digitalWrite(power_L,HIGH);
    digitalWrite(power_M1,HIGH);
    digitalWrite(power_M2,HIGH);
    digitalWrite(power_R,HIGH);
    digitalWrite(power_ER,HIGH);
    digitalWrite(ground_EL,LOW);
    digitalWrite(ground_L,LOW);
    digitalWrite(ground_M1,LOW);
    digitalWrite(ground_M2,LOW);
    digitalWrite(ground_R,LOW);
    digitalWrite(ground_ER,LOW);
    if((digitalRead(IR_EL)==0)&&(digitalRead(IR_L)==0)&&(digitalRead(IR_M1)==1)&&(digitalRead(IR_R)==0)&&(digitalRead(IR_ER)==0))
        {
            forward();
        }
        else if((digitalRead(IR_EL)==0)&&(digitalRead(IR_L)==0)&&(digitalRead(IR_M2)==1)&&(digitalRead(IR_R)==0)&&(digitalRead(IR_ER)==0))
        {
          forward();
        }
    else if((digitalRead(IR_L)==0)&&(digitalRead(IR_R)==1))
        {
            right();
        }
    else if((digitalRead(IR_L)==1)&&(digitalRead(IR_R)==0))
        {
            left();
        }
        else
        {
          stope();
        }
}
