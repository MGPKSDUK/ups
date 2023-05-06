void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int i = 11;
int j = 2;
for (j;j<=11;j++){
  digitalWrite(j,HIGH);
  delay(200);
  digitalWrite(j,LOW);

}
for (i;i>=2;i--){
  digitalWrite(i,HIGH);
  delay(200);
  digitalWrite(i,LOW);
}
}