# 🌦️ ESP32 IoT Weather Station

An IoT-based weather monitoring system built using **ESP32**, **DHT11**, **OLED Display**, **ThingSpeak Cloud Dashboard**, **LED**, and **Buzzer**.

---

## 🚀 Features

✅ Real-time temperature and humidity monitoring  
✅ OLED display for local visualization  
✅ Cloud monitoring using ThingSpeak  
✅ LED alert for high temperature  
✅ Buzzer alert for dangerous conditions  
✅ Live dashboard with charts and gauges  

---

## 🛠️ Hardware Used

- 🔹 ESP32 DevKit V1  
- 🌡️ DHT11 Sensor  
- 🖥️ SSD1306 OLED Display  
- 💡 LED  
- 🔊 Buzzer  
- 🔌 Breadboard + Jumper Wires  

---

## 💻 Software Used

- 🧑‍💻 Arduino IDE  
- ☁️ ThingSpeak  
- ⚙️ Embedded C  

---

## 🔌 Wiring

### 🌡️ DHT11

- VCC → 3.3V  
- GND → GND  
- DATA → GPIO14  

### 🖥️ OLED Display

- VCC → 3.3V  
- GND → GND  
- SDA → GPIO21  
- SCL → GPIO22  

### 💡 LED

- GPIO27  

### 🔊 Buzzer

- GPIO26  

---

## 🔄 Project Workflow

```text
DHT11 Sensor
     ↓
ESP32 Processing
     ↓
OLED Display
     ↓
WiFi Communication
     ↓
ThingSpeak Dashboard
     ↓
LED/Buzzer Alerts
```

---

## 📊 Dashboard

ThingSpeak dashboard displays:

- 🌡️ Temperature Chart  
- 💧 Humidity Chart  
- 📈 Temperature Gauge  
- 📉 Humidity Gauge  

---

## 📷 Project Preview

### Hardware Setup
(Add hardware image here)

### Circuit Diagram
<img width="500" height="1024" alt="Scematics_IOT" src="https://github.com/user-attachments/assets/9716b514-5b17-4fac-9e06-9484c8c61716" />


### OLED Output
(Add OLED image here)

### ThingSpeak Dashboard
(Add dashboard screenshot here)

---

## 🎯 Future Improvements

- 📡 MQTT integration  
- ⚡ FreeRTOS-based multitasking  
- 📱 Mobile app dashboard  
- 🌍 Better sensors (BME280)  
- 🔋 Low power optimization  

---

## 🧠 Skills Learned

- ESP32 Programming  
- Sensor Interfacing  
- I2C Communication  
- OLED Display Control  
- WiFi Connectivity  
- Cloud IoT Integration  
- Embedded Debugging  

---

## 👨‍💻 Author

**Yusuf Naaz**

Electronics Engineering Student | Embedded Systems | IoT Enthusiast 🚀
