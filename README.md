
# AI Based Realtime Traffic Control for Ambulance Priority

## Project Overview
This project detects ambulances using OpenCV and CNN-based image processing and automatically controls traffic lights using Arduino Uno.

## Technologies Used
- Python
- OpenCV
- TensorFlow / Keras
- Arduino UNO
- NumPy
- Matplotlib

## Features
- Real-time ambulance detection
- Traffic signal override
- Emergency lane prioritization
- Automatic recovery after ambulance passes
- Arduino-controlled traffic lights

## Folder Structure
- dataset/ -> ambulance image dataset
- models/ -> trained CNN model
- src/ -> python source code
- arduino/ -> Arduino UNO code
- docs/ -> report and PPT
- requirements.txt -> required Python libraries

## How To Run
1. Install Python 3.10+
2. Install required packages:
   pip install -r requirements.txt

3. Run detection system:
   python src/main.py

4. Upload Arduino code from arduino/traffic_control.ino

## Dataset
Download:
https://www.kaggle.com/datasets/mecxlan/ambulance-64x64

Extract dataset inside the dataset/ folder.

## GitHub Upload
1. Create GitHub repository
2. Upload this ZIP content
3. Commit and push files

