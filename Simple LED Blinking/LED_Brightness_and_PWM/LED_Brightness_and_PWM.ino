int LED = 11;

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  for(int i=0;i<=255;i++){
    analogWrite(LED,i);
    Serial.println(i);
    delay(20);
  }
  for(int j=255;j>=0;j--){
    analogWrite(LED,j);
    Serial.println(j);
    delay(20);
  }

}
