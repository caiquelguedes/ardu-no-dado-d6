int led1 = 13;
int led2 = 12;
int led3 = 7;
int led4 = 11;
int led5 = 9;
int led6 = 10;
int led7 = 6;
int botao = 2;
void setup()
{
  	pinMode(botao, INPUT_PULLUP);
	pinMode(led1, OUTPUT);
  	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
  	pinMode(led4, OUTPUT);
  	pinMode(led5, OUTPUT);
	pinMode(led6, OUTPUT);
  	pinMode(led7, OUTPUT);
}

void loop()
{
  if(digitalRead(botao) == LOW){
    for(int i = 0; i < 3; i++){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      delay(500);
      digitalWrite(led1, LOW); 
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      delay(500);
    }
    displayNumber(random(1,7));
  }
}

void displayNumber(int n){
  switch(n){
    case 1:
    	digitalWrite(led4, HIGH);
    	break;
    case 2:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led7, HIGH);
    	break;
    case 3:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led4, HIGH);
    	digitalWrite(led7, HIGH);
    	break;
    case 4:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led5, HIGH);
    	digitalWrite(led7, HIGH);
    	break;
    case 5:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	digitalWrite(led5, HIGH);
    	digitalWrite(led7, HIGH);
    	break;
    case 6:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
     	digitalWrite(led3, HIGH);
    	digitalWrite(led5, HIGH);	
    	digitalWrite(led6, HIGH);
    	digitalWrite(led7, HIGH);
    	break;
  }
}
