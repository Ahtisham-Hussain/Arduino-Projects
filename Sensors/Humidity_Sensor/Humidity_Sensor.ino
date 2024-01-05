#define PIN 7
#define TYPE DHT11
#include <DHT.h>
DHT dht(PIN,TYPE);
float t,h;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  Serial.print("Temp(*C)");
  Serial.print("  ");
  Serial.println("Hum(%)");
}

void loop() {
  // put your main code here, to run repeatedly:
  t=dht.readTemperature();
  h=dht.readHumidity();
  Serial.print(t);
  Serial.print("     ");
  Serial.println(h);
  delay(100);
}
