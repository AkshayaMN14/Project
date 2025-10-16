# Final Year Project
## VERDANT VISION: AN INTELLIGENT GARDENING ECOSYSTEM USING AI

---

**Verdant Vision** is a pioneering intelligent gardening system that leverages **Artificial Intelligence (AI)** and the **Internet of Things (IoT)** to provide data-driven, precise, and sustainable plant care. It transforms traditional gardening into a self-sustaining, proactive solution that dynamically optimizes plant health and minimizes environmental impact.

### 🌟 Features and Highlights

* **AI-Driven Precision Irrigation:** Uses advanced **Machine Learning algorithms** (specifically a Random Forest Classifier, which achieved **100% accuracy** in prediction) to model plant behavior and determine the precise, optimal watering timing based on real-time environmental data.
* **Real-Time Environmental Monitoring:** Integrates **soil moisture, temperature, and humidity sensors** to continuously monitor the garden environment.
* **Automated Resource Optimization:** AI-driven analytics optimize watering and fertilization, enabling **adaptive adjustments** to environmental conditions. This automation eliminates water waste and maintains ideal soil health.
* **Proven Efficiency:** Early results demonstrate a **30% improvement in water efficiency** and a notable increase in plant vitality and resource application.
* **Remote Management:** Data is sent to a cloud server (using **Blynk**) for remote access, allowing users to manage and monitor their gardens through a mobile application.
* **Scalability:** The system is designed to be scalable for applications ranging from small **home gardens** to **commercial agricultural operations**.

### 💡 Problem Solved

Traditional and existing gardening systems are often manual, resource-inefficient, and time-intensive. Key issues addressed include:

* **Water Waste:** Over **50% of garden water is often lost** due to inefficient irrigation methods.
* **Inconsistent Plant Health:** Gardeners often rely on guesswork to monitor soil conditions, leading to inconsistent plant health and a higher risk of disease or pest outbreaks.
* **Climate Fluctuation:** The system provides resilience against changing climate patterns, which can otherwise lead to decreased yield and compromised plant health.

### 🛠️ Technology Stack

The system is built on an **AIoT (Artificial Intelligence of Things)** framework, combining hardware and software components.

| Category | Component / Technology | Details |
| :--- | :--- | :--- |
| **Microcontrollers** | **ESP32** / **Node MCU** | Used for Wi-Fi connectivity and data processing. |
| **Sensor Control** | **Arduino Mega 2560** | Used for managing and reading sensor data. |
| **Sensors** | Soil Moisture, Temperature, Humidity | Provides real-time environmental inputs. |
| **Actuator** | **Solenoid Valve** & Relay | Used to control the automated water pump for irrigation. |
| **Programming** | **Python**, C++ (for microcontrollers) | Python used for the Machine Learning model (Scikit-learn). |
| **ML Model** | **Random Forest Classifier** | Used for yield prediction and determining watering needs. |
| **Cloud/IoT Platform** | **Blynk** | Used for cloud data transmission, remote monitoring, and the user dashboard. |
| **API** | **Gemini API** | Listed as a software requirement. |

### 🚀 Future Enhancements

Potential areas for future development include:

* **Expanded Sensor Integration:** Adding sensors for **pH** and **nutrient levels** for more comprehensive plant monitoring.
* **Advanced AI Capabilities:** Developing advanced AI algorithms for early detection of **nutrient deficiencies** or **pest infestations**.
* **Climate Adaptability:** Integrating **weather sensors** and developing **climate-adaptive features** to automatically adjust care routines based on seasonal changes.
* **Smart Home Integration:** Integrating the system with popular **smart home platforms** (e.g., Google Home or Alexa) for enhanced convenience.
* **Self-Sufficiency:** Exploring **sustainable power options**, such as solar energy, for self-sufficient operation in remote applications.

### 👩‍💻 Project Team

* AKSHAYA MN
* ANANYA R
* HAFSA A

*(Report submitted in partial fulfilment of the requirements for the degree of Bachelor of Engineering in Computer Science and Engineering, Sri Ramakrishna Institute of Technology, May 2025)*
