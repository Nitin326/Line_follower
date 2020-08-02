 int SL = 3;
int SM = 4;
int SR = 2;
int m11 = 6; //left forward
int m12 = 9; //left backward
int m21 =10; //right forward
int m22 =11; //right backward
int a,b,c;

void setup ()
{
pinMode(SL,INPUT);
pinMode(SR,INPUT);
pinMode(SM,INPUT);
pinMode(m11, OUTPUT);
pinMode(m12, OUTPUT);
pinMode(m21,OUTPUT);
pinMode(m22,OUTPUT);
Serial.begin(9600);
}

void loop()
{
  a=digitalRead(SL);
  b=digitalRead(SM);
  c=digitalRead(SR);
  
  if(a==LOW && b==LOW && c==HIGH)
  {
      digitalWrite(m11,LOW);
      digitalWrite(m12,LOW);
      digitalWrite(m21,HIGH);
      digitalWrite(m22,LOW); 
       
       Serial.println("A");
  }

 else if(a==HIGH && b==LOW && c==LOW)
  {
      digitalWrite(m11,HIGH);
      digitalWrite(m12,LOW);
      digitalWrite(m21,LOW);
      digitalWrite(m22,LOW);
      
       Serial.println("B");
  }

    else if(a==LOW && b==LOW && c==LOW)
  {
       digitalWrite(m11,HIGH);
       digitalWrite(m12,LOW);
       digitalWrite(m21,LOW);
       digitalWrite(m22,HIGH);
  
       Serial.println("C");
  }

  else if(a==HIGH && b==HIGH && c==HIGH) // CHANGE
  {
      digitalWrite(m11,LOW);
      digitalWrite(m12,LOW);
      digitalWrite(m21,LOW);
      digitalWrite(m22,LOW);
      
      Serial.println("D");
 }

  else if(a==HIGH && b==HIGH && c==LOW)
  {
      digitalWrite(m11,HIGH);
      digitalWrite(m12,LOW);
      digitalWrite(m21,LOW);
      digitalWrite(m22,LOW);
       
       Serial.println("E");
  }

  else if(a==LOW && b==HIGH && c==HIGH)
  {
     digitalWrite(m11,LOW);
     digitalWrite(m12,LOW);
     digitalWrite(m21,HIGH);
     digitalWrite(m22,LOW);

       Serial.println("F");
  }

  else if(a==HIGH && b==LOW && c==HIGH)
  {
    digitalWrite(m11,HIGH);
    digitalWrite(m12,LOW);
    digitalWrite(m21,HIGH);
    digitalWrite(m22,LOW);
       
       Serial.println("G");
  }

  else
  {
      digitalWrite(m11,HIGH);
      digitalWrite(m12,LOW);
      digitalWrite(m21,HIGH);
      digitalWrite(m22,LOW);
       
       Serial.println("H");
  }
}
  
  
  
  
