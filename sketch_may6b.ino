void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x= digitalRead(2);
Serial.println(x);
if(x == 0){
  for(int i = 3;i<=7;i++){
    digitalWrite(i,HIGH);
    delay(500);
digitalWrite(i,LOW);
if()
  }
  for(int i = 7;i>=3;i--){
    digitalWrite(i,HIGH);
    delay(500);
digitalWrite(i,LOW);
  }
}
}
