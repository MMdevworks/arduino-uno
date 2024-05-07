// DHT11 Temperature and Humidity Sensor

// Utilizing DHT libraries - Adafruit:
// - DHT Sensor Library: https://github.com/adafruit/DHT-sensor-library
// - Adafruit Unified Sensor Lib: https://github.com/adafruit/Adafruit_Sensor

// Get constant readings, if temperature goes over target: print warning.

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 2    
#define DHTTYPE DHT11

DHT_Unified dht(DHTPIN, DHTTYPE);

uint32_t delayMS;
int target_temp = 24;

void setup() {
  Serial.begin(9600);

  // Initialize device.
  dht.begin();

  // Sensor details
  sensor_t sensor;
  dht.temperature().getSensor(&sensor);
  Serial.println(F("------------------------------------"));
  Serial.println(F("SENSOR INFO"));
  Serial.print  (F("Sensor Type: ")); Serial.println(sensor.name);
  Serial.print  (F("Driver Ver:  ")); Serial.println(sensor.version);
  Serial.print  (F("Unique ID:   ")); Serial.println(sensor.sensor_id);
  Serial.println(F("------------------------------------"));

  // Temperature details
  Serial.println(F("TEMPERATURE:"));
  Serial.print  (F("Max Value:   ")); Serial.print(sensor.max_value); Serial.println(F("°C"));
  Serial.print  (F("Min Value:   ")); Serial.print(sensor.min_value); Serial.println(F("°C"));
  Serial.print  (F("Resolution:  ")); Serial.print(sensor.resolution); Serial.println(F("°C"));
  Serial.println(F("------------------------------------"));

  // Humidity details
  dht.humidity().getSensor(&sensor);
  Serial.println(F("HUMIDITY:"));
  Serial.print  (F("Max Value:   ")); Serial.print(sensor.max_value); Serial.println(F("%"));
  Serial.print  (F("Min Value:   ")); Serial.print(sensor.min_value); Serial.println(F("%"));
  Serial.print  (F("Resolution:  ")); Serial.print(sensor.resolution); Serial.println(F("%"));
  Serial.println(F("------------------------------------"));
  // Delay between readings
  delayMS = 1000;
}

void loop() {
  delay(delayMS);

  // Get temperature event and print
  sensors_event_t event;
  dht.temperature().getEvent(&event);
  if (isnan(event.temperature)) {
    Serial.println(F("Error reading temperature!"));
  }
  else if (event.temperature > target_temp) {
    Serial.println(F("WARNING: Temperature Over Target!"));
    // c to f conversion
    Serial.print((event.temperature * 9/5) + 32); 
    Serial.println(F("°F"));
  }
  else {
    Serial.print(F("Temperature: "));
    Serial.print((event.temperature * 9/5) + 32); 
    Serial.println(F("°F"));
  }

  // Get humidity event and print
  dht.humidity().getEvent(&event);
  if (isnan(event.relative_humidity)) {
    Serial.println(F("Error reading humidity!"));
  }
  else {
    Serial.print(F("Humidity: "));
    Serial.print(event.relative_humidity);
    Serial.println(F("%"));
  }
}