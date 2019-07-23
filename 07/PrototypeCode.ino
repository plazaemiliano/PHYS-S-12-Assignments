const int POT_PIN_1 = A0;
const int MOTOR_PIN_1 = 9;
const int POT_PIN_2 = A1;
const int MOTOR_PIN_2 = 11;
int motorSpeed = 0;
int potVal = 0;

void setup()
{
  pinMode(MOTOR_PIN_1, OUTPUT);
  pinMode(MOTOR_PIN_2, OUTPUT);
}  

void loop()
{
  potVal = analogRead(POT_PIN_1);

  motorSpeed = map(potVal, 0, 1023, 0, 255);

  analogWrite(MOTOR_PIN_1, motorSpeed);
  

  potVal = analogRead(POT_PIN_2);

  motorSpeed = map(potVal, 0, 1023, 0, 255);

  analogWrite(MOTOR_PIN_2, motorSpeed);
}
