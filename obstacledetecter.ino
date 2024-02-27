int se =2;
int buz =3;
void setup() {
 Serial.begin(9600);
 pinMode(se,INPUT);
 pinMode(buz,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("nothing detected");
if (digitalRead(se)==LOW)
{
  Serial.println("obstacle detected");
  tone(buz,1000,1000);
  delay(500);
   tone(buz,1500,1000);
  delay(500);
tone(buz,1000,1000);
 

}
else{
  digitalWrite(buz,LOW);
}
}
