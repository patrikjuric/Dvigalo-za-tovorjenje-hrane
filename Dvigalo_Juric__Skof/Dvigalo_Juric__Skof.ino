int gor=2;
int dol=3;
int Kzg=4;
int Ksp=5;

int motorGor=8;
int motorDol=9;
int led1=10;

void setup() {
  pinMode(gor, INPUT_PULLUP); 
  pinMode(dol, INPUT_PULLUP); 
  pinMode(Kzg, INPUT_PULLUP); 
  pinMode(Ksp, INPUT_PULLUP); 
  pinMode(motorGor, OUTPUT);
  pinMode(motorDol, OUTPUT);
  pinMode(led1, OUTPUT);

}

void loop() {
   if(digitalRead(gor) == 0 && digitalRead(dol)==1) {
      digitalWrite(motorGor,HIGH); 
      digitalWrite(motorDol,LOW);
      digitalWrite(led1, HIGH);
   }
   
    
      if(digitalRead(Kzg) == 0 ) {
        digitalWrite(motorGor,LOW); 
        digitalWrite(motorDol,LOW);
        digitalWrite(led1, LOW);
         }s

       if(digitalRead(dol) == 0 && digitalRead(gor)==1) {
      digitalWrite(motorGor,LOW); 
      digitalWrite(motorDol,HIGH);
      digitalWrite(led1, HIGH);
   }
   
    
      if(digitalRead(Ksp) == 0 ) {
        digitalWrite(motorGor,LOW); 
        digitalWrite(motorDol,LOW);
        digitalWrite(led1, LOW);
         }
    }
      
