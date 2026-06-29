# ESP32 IoT Weather Station 🌦️

An IoT-based weather monitoring system built using ESP32, DHT11, OLED display, ThingSpeak cloud dashboard, LED, and buzzer.

---

## Features

* Real-time temperature and humidity monitoring
* OLED display for local visualization
* Cloud monitoring using ThingSpeak
* LED alert for high temperature
* Buzzer alert for dangerous conditions
* Live dashboard with charts and gauges

## Hardware Used

* ESP32 DevKit V1
* DHT11 Sensor
* SSD1306 OLED Display
* LED
* Buzzer
* Breadboard + Jumper Wires

## Software Used

* Arduino IDE
* ThingSpeak
* Embedded C

## Wiring

### DHT11

* VCC → 3.3V
* GND → GND
* DATA → GPIO14

### OLED

* VCC → 3.3V
* GND → GND
* SDA → GPIO21
* SCL → GPIO22

### LED

* GPIO27

### Buzzer

* GPIO26

## Project Workflow

DHT11 reads environmental data → ESP32 processes data → OLED displays live values → ESP32 sends data to ThingSpeak via WiFi → Dashboard visualizes live data → LED/Buzzer alerts for threshold conditions.

## Dashboard

ThingSpeak dashboard displays:

* Temperature Chart
* Humidity Chart
* Temperature Gauge
* Humidity Gauge

## Future Improvements

* MQTT integration
* FreeRTOS-based multitasking
* Mobile app dashboard
* Better sensors (BME280)

## Author

Yusuf Naaz
