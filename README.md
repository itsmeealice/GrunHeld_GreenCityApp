# GrünHeld_GreenCityApp

Welcome to the GrünHeld repository! GrünHeld is a community-driven application concept designed to help make Heilbronn, Germany, greener by connecting citizens, environmental data, local businesses, and the city.

🌱 About the Project

GrünHeld encourages citizens to take an active role in caring for urban trees and green spaces. By combining environmental information with community participation and a reward system, the app aims to turn environmental awareness into real-world action.


--- 


## App Prototype — Grünheld

This Stitch prototype (Google’s UI design tool, similar to Figma) showcases the Grünheld app concept, including its main screens, features, and user flows. It illustrates how users can discover trees, report care activities, earn Green Points, explore environmental data, and access local rewards.
https://stitch.withgoogle.com/projects/10206617381523172074
Note: This is a prototype for demonstration purposes; not all features are fully functional or connected to live data. 

## Dataset Visualization

The heatmap visualizes temperature and humidity data across three regions—Innenstadt, Neckar, and Wartberg—utilizing datasets recorded via a Mobile Datalogger. Disseminating data regarding highly vulnerable urban zones—specifically detailing temperature variance and humidity levels indices—not only fosters civic awareness but also drives data-informed decision-making for targeted planting initiatives and better information of how much water is needed. To this end, thermal heat mapping serves as an essential analytical tool, with integrations being a possible upgrade anytime. 

## Grünsensor 

The Grünsensor measures soil moisture and connects directly to the Android app via a USB-C cable. It does not use Wi-Fi or Bluetooth. This is a deliberate design choice: a wired connection means the sensor needs no battery, so users have no charging or battery replacement to worry about. The result is a simple, reliable, and easy-to-use setup.

### Inside the Device project: 

/cad: Sensor Case Design
Contains the 3D-printable CAD files for the green sensor enclosure. These files can be used to manufacture the physical housing that protects the sensor hardware.

/app: Android Application
Contains the source code for the Android prototype. This version demonstrates the core application and sensor functionality, with the “Care a Tree” feature fully implemented for demonstration purposes. The app works together with the green sensor.

/database: Database Schema
Contains the SQL script used to create and configure the database structure on Supabase.

/ESP32: Sensor Firmware
Contains the ESP32 code that reads soil moisture data from the HW-390 capacitive soil moisture sensor and makes it available to the rest of the system.
