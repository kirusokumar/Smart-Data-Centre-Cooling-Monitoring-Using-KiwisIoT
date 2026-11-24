#include <ESP8266WiFi.h>
#include <KiwisIoT.h>
#include <DHT.h>

// WiFi Credentials
const char* ssid = "Kiwis";
const char* pass = "Kiwis1234";

// KiwisIoT Topic ID
const char* topic = "dash_1795254260901";

// DHT11 Sensor Configuration
#define DHT_PIN D4
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

// Temperature Threshold
const float TEMP_LIMIT = 30.0;

// KiwisIoT
KiwisIoT kiwisiot(ssid, pass, topic);

unsigned long previousMillis = 0;
const unsigned long interval = 2000;

void setup() {

  Serial.begin(115200);

  Serial.println();
  Serial.println("Smart Data Centre Cooling Monitoring");

  dht.begin();

  Serial.println("DHT11 Sensor Initialized");

  Serial.println("Connecting to KiwisIoT...");

  kiwisiot.begin();

  Serial.println("KiwisIoT Initialized");
}

void loop() {

  kiwisiot.run();

  if (millis() - previousMillis >= interval) {

    previousMillis = millis();

    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    if (isnan(temperature) || isnan(humidity)) {
      Serial.println("DHT11 Sensor Reading Failed!");
      return;
    }

    String status;

    if (temperature >= TEMP_LIMIT) {
      status = "COOLING ALERT";
    } else {
      status = "COOLING NORMAL";
    }

    Serial.println();
    Serial.println("------ DATA CENTRE MONITOR ------");

    Serial.print("Temperature: ");
    Serial.print(temperature, 1);
    Serial.println(" °C");

    Serial.print("Humidity: ");
    Serial.print(humidity, 1);
    Serial.println(" %");

    Serial.print("Cooling Status: ");
    Serial.println(status);

    // Send data to KiwisIoT
    kiwisiot.send("0", String(temperature, 1));
    kiwisiot.send("1", String(humidity, 1));
    kiwisiot.send("2", status);

    Serial.println("Data Sent to KiwisIoT");
    Serial.println("--------------------------------");
  }
}