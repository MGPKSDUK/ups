void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(5,INPUT);
Serial.begin(9600);
}
int s=0;
void loop() {
  // put your main code here, to run repeatedly:
  int x=digitalRead(5); 
  
  if(x== 0){
   if(s%2 == 0){
digitalWrite(2,HIGH);
delay(2000);
digitalWrite(2,LOW);
delay(1000);
   }
   s+=1;
  }
  Serial.println(s);

}