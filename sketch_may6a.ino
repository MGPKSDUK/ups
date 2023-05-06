void setup() {
  // put your setup code here, to run once:
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// for (int i=1; i<10; i++)
// {
//   digitalWrite(i,HIGH);
//   delay(500);
// }
// for (int i=1; i<10; i++)
// {
//   digitalWrite(i,LOW);
//   delay(500);
// }
for (int i=1; i<10; i++)
{
  digitalWrite(i,HIGH);
  delay(500);
}
for (int i=9; i>0; i--)
{
  digitalWrite(i,LOW);
  delay(1000);
}
}