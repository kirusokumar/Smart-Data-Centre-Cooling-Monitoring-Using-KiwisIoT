# 🖥️ Smart Data Centre Cooling Monitoring Using KiwisIoT

An IoT-based data centre environmental monitoring project using ESP8266 NodeMCU and DHT11 to monitor temperature, humidity, and cooling status through the KiwisIoT cloud dashboard.

## 🌱 About the Project

Data centres and server rooms require proper environmental monitoring to help maintain suitable operating conditions for electronic equipment. Temperature and humidity changes can affect server performance and equipment reliability.

In this project, I developed a Smart Data Centre Cooling Monitoring System using an ESP8266 NodeMCU and a DHT11 temperature and humidity sensor. The system continuously monitors the surrounding environment and sends the sensor readings to the KiwisIoT cloud platform through Wi-Fi.

The dashboard displays temperature, humidity, and cooling condition status, making it easier to monitor the environment remotely.

## ⚙️ Hardware Components

ESP8266 NodeMCU

DHT11 Temperature and Humidity Sensor

Jumper Wires

USB Cable

## 🔌 Circuit Connections

DHT11 VCC → NodeMCU 3.3V

DHT11 GND → NodeMCU GND

DHT11 DATA → NodeMCU D4

## 📊 KiwisIoT Dashboard

The KiwisIoT cloud platform is used to visualize the environmental sensor readings remotely.

Channel 0 – Temperature (°C)

Channel 1 – Humidity (%)

Channel 2 – Cooling Status

Temperature and humidity values can be displayed using numeric widgets, gauges, or charts. The cooling status can be displayed using a text widget.

## 🔄 Working Principle

The DHT11 sensor measures the temperature and humidity of the data centre environment. The ESP8266 NodeMCU reads the sensor values and compares the temperature against a predefined threshold.

If the temperature reaches or exceeds the configured threshold, the system displays COOLING ALERT. Otherwise, it displays COOLING NORMAL.

The temperature, humidity, and cooling status are sent to the KiwisIoT cloud dashboard through Wi-Fi, allowing users to monitor the environmental conditions remotely.

## 💻 Software Used

Arduino IDE

ESP8266 Arduino Core

KiwisIoT Platform

KiwisIoT Arduino Library

## 📖 Project Tutorial

Full project tutorial: [Smart Data Centre Cooling Monitoring Using KiwisIoT](https://www.hackster.io/kirusokumar/smart-data-centre-cooling-monitoring-using-kiwisiot-a69e8e)

## 🌐 Explore KiwisIoT

I use KiwisIoT to connect my IoT projects with an online dashboard and monitor sensor data remotely. It makes it easier to visualize sensor readings, track environmental conditions, and build IoT-based monitoring applications.

Website: https://www.kiwisiot.in/

Arduino Library: https://github.com/Kiwistron/KiwisIoT

Example Projects: https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

If you are exploring IoT monitoring projects, KiwisIoT is a platform worth trying.

## 👨‍💻 About the Project

This project demonstrates how environmental sensors, ESP8266 Wi-Fi connectivity, and cloud-based visualization can be combined to create a simple data centre monitoring system.

Thanks for checking out this project! 🚀