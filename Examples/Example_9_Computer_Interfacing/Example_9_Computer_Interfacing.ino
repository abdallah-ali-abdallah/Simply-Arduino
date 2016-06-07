// Example_9_Computer_Interfacing
int ledPin=13;
int value;
void setup () 
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}
void loop ()
{
value = Serial.read();
if (value == '1') {digitalWrite(ledPin,HIGH);}
else if (value == '0') {digitalWrite(ledPin,LOW);}
}

