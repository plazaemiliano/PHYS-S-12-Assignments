int photoTran=A3; //phototransistor connected to analog pin 3
int ledPin=13; //led is connected to pin 13 (on-board led)

void setup(){
  pinMode(ledPin,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop(){
  int tran = analogRead(photoTran); //read the phototransistor
  Serial.println(tran);
  if (tran<970)
  {digitalWrite(ledPin,HIGH);}
  else
  {digitalWrite(ledPin,LOW);}
}
