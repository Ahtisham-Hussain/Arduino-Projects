int ldr=A0;
int led=13;
int reading;
float val;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading=analogRead(ldr);
  Serial.print(reading);
  val=0;
  if(reading<500)
  {
    val=map(reading,0,500,255,0);
    analogWrite(led,val);
  }else{
    analogWrite(led,val);
  }
  Serial.print("  ");
  Serial.println(val);
  delay(500);
}
