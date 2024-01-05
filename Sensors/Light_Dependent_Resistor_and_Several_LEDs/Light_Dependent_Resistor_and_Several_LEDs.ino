int ldr=A0;
int led[]={9,10,11,12,13};
int reading;
float val;

void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<5;i++){
    pinMode(led[i],OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading=analogRead(ldr);
  Serial.print(reading);
  val=0;
  val=map(reading,0,1023,5,0);
  for(int i=0;i<5;i++){
    if(i<val){
      digitalWrite(led[i],HIGH);
    }else{
      digitalWrite(led[i],LOW);
    }
  }
  Serial.print("  ");
  Serial.println(val);
  delay(500);
}
