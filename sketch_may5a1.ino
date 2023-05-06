void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x=digitalRead(4);
  Serial.println(x);
if (x==0)
{
digitalWrite(2,HIGH);
delay(1000);
}
else
{
digitalWrite(2,LOW);
delay(1000);
}
}