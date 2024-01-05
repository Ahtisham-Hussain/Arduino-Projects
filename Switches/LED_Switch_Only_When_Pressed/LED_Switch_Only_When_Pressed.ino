int LED=13;
int Switch=8;
int reading;
int LED_State=LOW;
int Switch_State=LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(Switch,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading=digitalRead(Switch);
  Serial.print("Switch State : ");
  Serial.print(reading);
  delay(150);
  if(reading != Switch_State)
  {
    if(reading==HIGH && Switch_State==LOW)
    {
      LED_State =! LED_State;
    }
    digitalWrite(LED,LED_State);
    Serial.print(" , LED State : ");
    Serial.println(LED_State);
    Switch_State=reading;
  }
  else{
    Serial.print(" , LED State : ");
    Serial.println(LED_State);
  }
}