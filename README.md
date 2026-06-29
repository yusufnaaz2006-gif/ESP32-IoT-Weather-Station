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
<img width="4096" height="3072" alt="Circuit_PIn" src="https://github.com/user-attachments/assets/cfb0b4d5-76fb-41ef-b5a8-aea6268dbaea" />

### Circuit Diagram
<img width="1536" height="1024" alt="Scematics_IOT" src="https://github.com/user-attachments/assets/a44fda2f-68a1-4d50-ae80-1ef72eadebfa" />

### OLED Output
<img width="4096" height="3072" alt="OLED2" src="https://github.com/user-attachments/assets/eafe6911-72a2-48df-9fa7-c3ba39b88a86" />
<img width="4096" height="3072" alt="OLED1" src="https://github.com/user-attachments/assets/1bf77446-0928-49a6-aa04-63daa4d3552e" />

### ThingSpeak Dashboard
<img width="1252" height="816" alt="image" src="https://github.com/user-attachments/assets/cd7524a4-de12-4a1f-974e-a15a3d261e64" />

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
