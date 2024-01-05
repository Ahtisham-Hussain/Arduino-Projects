int Switch=8;
int LED=13;
int reading;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(Switch,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  reading=digitalRead(Switch);
  digitalWrite(LED,reading);
  Serial.println(reading);

}
