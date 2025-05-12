#include <DHT.h>

#define DHTPIN 2       // DHT data pin
#define DHTTYPE DHT11  // Change to DHT22 if needed
#define BUZZER_PIN 3   // Buzzer connected to Pin 3

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.println("Weather Monitor + Buzzer Ready");
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Sensor error!");
    return;
  }

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" °C | Hum: ");
  Serial.print(hum);
  Serial.println(" %");

  // Alert: Temp > 30°C or Hum > 80%
  if (temp > 30 || hum > 80) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(500);
    digitalWrite(BUZZER_PIN, LOW);
    delay(500);  // Beep pattern
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(500);
}
