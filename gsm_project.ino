int pirOutput=9;
void setup()
{
  Serial.begin(9600);
  pinMode(pirOutput,INPUT);
 
  digitalWrite(pirOutput,LOW);
}
void loop()
{
  if(digitalRead(pirOutput)==HIGH)
  {
    Serial.println("OK");
    delay(20000);
    Serial.println("ATD+YOUR NUMBER;");// change your number
    delay(150000);
    Serial.println("ATH");
    delay(1000);
    
  }
}
