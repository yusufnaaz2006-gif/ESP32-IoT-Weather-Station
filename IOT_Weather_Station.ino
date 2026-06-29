#include <WiFi.h>
#include <ThingSpeak.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define LED_PIN 27
#define BUZZER_PIN 26

// ---------------- OLED ----------------
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// ---------------- DHT ----------------
#define DHTPIN 14
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// ---------------- WiFi ----------------
const char* ssid = "DEZO";
const char* password = "9315218705";

// ---------------- ThingSpeak ----------------
WiFiClient client;
unsigned long channelID = 3418095;
const char* writeAPIKey = "MFSDEMS9YWF37SHO";

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  // DHT
  dht.begin();

  // OLED
  Wire.begin(21, 22);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED failed");
    while (1);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);

  display.setCursor(10, 20);
  display.println("BOOTING...");
  display.display();

  // WiFi Connection
  Serial.print("Connecting to WiFi");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Connected!");
  Serial.println(WiFi.localIP());

  ThingSpeak.begin(client);
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (temperature > 35) {
  digitalWrite(LED_PIN, HIGH);
  } else {
  digitalWrite(LED_PIN, LOW);
  }

  if (temperature > 40 || humidity > 70) {
  digitalWrite(BUZZER_PIN, HIGH);
  } else {
  digitalWrite(BUZZER_PIN, LOW);
  }

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT");
    return;
  }

  // Serial Monitor
  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" C  ");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // OLED Display
  display.clearDisplay();
  display.setTextSize(1);

  display.setCursor(0, 0);
  display.println("IoT Weather Station");

  display.setCursor(0, 20);
  display.print("Temp: ");
  display.print(temperature);
  display.println(" C");

  display.setCursor(0, 35);
  display.print("Humidity: ");
  display.print(humidity);
  display.println(" %");

  display.setCursor(0, 50);

  if (temperature > 35 || humidity > 70) {
  display.println("ALERT!");
  } else {
  display.println("NORMAL");
  }

  display.display();

  // ThingSpeak Upload
  ThingSpeak.setField(1, temperature);
  ThingSpeak.setField(2, humidity);

  int x = ThingSpeak.writeFields(channelID, writeAPIKey);

  if (x == 200) {
    Serial.println("Data uploaded to ThingSpeak");
  } else {
    Serial.print("Upload failed. Error code: ");
    Serial.println(x);
  }

  delay(20000); // ThingSpeak minimum 15 sec
}