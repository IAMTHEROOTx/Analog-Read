# Sensor Data Reader

This program reads data from two analog sensors and prints their values to the serial monitor. It communicates with the sensors via the I2C bus and powers them up through the Wire library.

## 🔍 Purpose

The purpose of this program is to continuously read values from two analog sensors connected to the pins 36 and 39, and print the sensor values to the serial monitor. The sensors are powered up using the I2C communication protocol.

## 🛠️ How It Works

1. **Setup**: 
   - The program initializes the serial communication for debugging purposes.
   - It powers up the sensors connected via I2C using the address `0x3D` and a specific command (`Wire.write(3)`).

2. **Reading Sensor Data**:
   - The program continuously reads the analog values from the two sensors connected to the pins 36 and 39.
   - These values are printed to the serial monitor every second.

## 🧑‍💻 Requirements

- **Arduino** or compatible board.
- **Wire** library for I2C communication (pre-installed in the Arduino IDE).
- **Two analog sensors** connected to the defined pins (`pinCapteur = 36`, `pinCapteur2 = 39`).

## 🔧 Installation

To use this program, follow these steps:

1. **Clone the repository** or copy the code into your Arduino IDE.
2. **Upload the code** to your Arduino or compatible board.
3. **Connect the sensors** to pins 36 and 39.

## ▶️ Usage

After uploading the code to your board, open the **serial monitor** in the Arduino IDE to see the sensor values.

### Example Output:

```
V1= 123 V2= 456
V1= 124 V2= 457
V1= 125 V2= 458
```

The values (`V1` and `V2`) correspond to the analog readings from the sensors connected to **pin 36** and **pin 39**. These values will update every second.

## 📑 Code Explanation

- **`Wire.beginTransmission(0x3D);`**: Starts communication with the I2C device at address `0x3D`.
- **`Wire.write(3);`**: Sends a command to the sensor to power it up.
- **`analogRead(pinCapteur)`**: Reads the analog value from the sensor connected to `pinCapteur` (pin 36).
- **`Serial.printf("V1= %d V2=%d\n",valeurCapteur,valeurCapteur2);`**: Prints the values of both sensors to the serial monitor every second.

## ⚠️ Notes

- The sensor readings will vary depending on the sensor type and external conditions.
- The program is designed to output the sensor data every second (using `delay(1000)`).

## 📄 License

This project is open-source and free to use. Feel free to modify it as per your requirements.
