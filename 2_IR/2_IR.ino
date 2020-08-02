int SL = 3;
int SR = 2;
int m11 = 8; //left forward
int m12 = 9; //left backwaed
int m21 =10; //right forward
int m22 =11; //right backward
int a,b;

void setup ()
{
pinMode(SL,INPUT);
pinMode(SR,INPUT);
pinMode(m11, OUTPUT);
pinMode(m12, OUTPUT);
pinMode(m21,OUTPUT);
pinMode(m22,OUTPUT);
Serial.begin(9600);
}

void loop()
{
  a=digitalRead(SL);
  b=digitalRead(SR);

  if(a==LOW && b==LOW)
  {
    digitalWrite(m11,HIGH);
    digitalWrite(m12,LOW);
      digitalWrite(m21,HIGH);
       digitalWrite(m22,LOW);

       Serial.println("A");
  }
  else if(a==HIGH &&b==LOW)
  {
     digitalWrite(m11,HIGH);
     digitalWrite(m12,LOW);
      digitalWrite(m21,LOW);
       digitalWrite(m22,LOW);
       Serial.println("LEFT");
    
  }

  else if(a==LOW &&b==HIGH)
 {  
  digitalWrite(m11,LOW);
   digitalWrite(m12,LOW);
      digitalWrite(m21,HIGH);
       digitalWrite(m22,LOW);
       Serial.println("c");
 }
 else
 { digitalWrite(m11,LOW);
     digitalWrite(m12,LOW);
      digitalWrite(m21,LOW);
       digitalWrite(m22,LOW);
       Serial.println("D");
 }
}
