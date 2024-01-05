int tempPin=A0;
int reading;
float temp;
int min=20;
int max=30;

void setup() {
  // put your setup code here, to run once:
  pinMode(tempPin,INPUT);
  analogReference(INTERNAL);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading=analogRead(tempPin);
  temp=(reading*110.0)/1023;
  String axis = String(min)+"  "+String(temp)+"  "+String(max);
  Serial.println(axis);
  delay(10);
}
