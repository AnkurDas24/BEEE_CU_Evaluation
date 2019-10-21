//Evaluation


const int lamp = 5;
const int button = 8;
void setup()
{
  Serial.begin(9600);
  pinMode(lamp,OUTPUT);
  pinMode(button,INPUT);
  
}

void loop()
{
 if(digitalRead(button)==LOW)
 { delay(100);
int c = analogRead(A1);
  delay(100);
  			if(c<300)
  				{
    			digitalWrite(lamp,HIGH);
    			delay(1000);
  				}
 			 else
  				{
    			analogWrite(lamp,64);
    			delay(1000);
  				}
 }
  else
  {
    digitalWrite(lamp,LOW);
  }
}
//Made by - Ankur Das
//UID - 19BCS3523