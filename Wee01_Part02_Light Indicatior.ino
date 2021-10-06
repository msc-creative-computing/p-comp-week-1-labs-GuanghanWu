// C++ code
//
int Switchstate1 = 0;
int Switchstate2 = 0;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  pinMode(8, INPUT);
  
}

void loop()
{
  Switchstate1 = digitalRead(8);
  Switchstate2 = digitalRead(2);
  
  if (Switchstate1 == LOW)
  {
    digitalWrite(3, LOW);
	digitalWrite(4, LOW);
	digitalWrite(5, LOW);
	}
  
  else 
  {
    digitalWrite(3, LOW);
	digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  	delay(300);
	
    digitalWrite(3, LOW);
	digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  	delay(300);
    
    digitalWrite(3, HIGH);
	digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  	delay(300);
  	}
  if (Switchstate2 == LOW)
  {
    digitalWrite(3, LOW);
	digitalWrite(4, LOW);
	digitalWrite(5, LOW);
    
	}
  else 
  {
    digitalWrite(3, HIGH);
	digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  	delay(300);
	
    digitalWrite(3, LOW);
	digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  	delay(300);
    
    digitalWrite(3, HIGH);
	digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  	delay(300);
  	}
 }
  

