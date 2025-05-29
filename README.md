# Electronic Voting Machine (EVM) with Android App

This project is a microcontroller-based Electronic Voting Machine (EVM) built using **Arduino**. It allows voting for three candidates using push buttons, provides real-time feedback with LEDs and a buzzer, and displays final results on a custom Android app developed using **MIT App Inventor**. Results are transmitted via Bluetooth (HC-05).

---

## Features

- Vote casting for 3 candidates via physical buttons
- Real-time feedback with:
  - LED indicator for the selected candidate
  - Buzzer sound for vote confirmation
- Vote result transmission over Bluetooth (HC-05)
- Android app (built with MIT App Inventor) for result display
- Secure vote logging with one vote per button press logic

---

## Technologies Used

| Component        | Purpose                          |
|------------------|----------------------------------|
| Arduino Uno      | Microcontroller for vote logic   |
| C/C++            | Programming Arduino logic        |
| HC-05 Module     | Bluetooth communication          |
| MIT App Inventor | Android app for result display   |
| Android          | Mobile device to view results    |
| LEDs, Buttons, Buzzer | UI Feedback & Input Hardware|

---

##  Project Structure

##  How It Works

### Logic Based on Code:
- **Button 1, 2, 3 (Voting):**
  - Each button corresponds to a candidate.
  - On press: vote is recorded, LED blinks, and buzzer beeps.
  - Flag mechanism ensures single vote per press.
- **Button 4 (Result Trigger):**
  - When pressed, vote counts are sent via Serial.print() to the Bluetooth module.
- **Android App:**
  - When "Show Result" is tapped, the app receives and parses the data like:
    
BJP:-3
    JJP:-2
    AAP:-1

  - Results are shown in the screenshot.
##  Result Screen in Android App
![Result Screenshot](https://raw.githubusercontent.com/himanshu-jangra77/EVM-Machine/90445555388255e06803004f7844e872dd214bac/EVM-Code/IMG_20250530_005515.jpg)

---

## How to Use

### Hardware Setup:
1. Connect push buttons to Arduino pins 11, 3, 7, and 2.
2. Connect corresponding LEDs to pins 13, 12, and 9.
3. Connect buzzer to pin 8.
4. Connect HC-05 Bluetooth module to Arduino (TX/RX).
5. Upload EVM_Machine.ino to Arduino using Arduino IDE.

### Android App:
1. Install the EVM_App.apk file on your Android phone.
2. Pair your phone with HC-05 Bluetooth module.
3. Open the app and click **“Show Result”** to see the vote counts.

### MIT App Inventor App (EVM_App.aia)

- This is the source file for the Android app, created using MIT App Inventor.
- It connects to the Arduino via Bluetooth and receives live voting results.
- Displays vote counts for BJP, JJP, and AAP candidates.
- Built using block programming — no coding required.
- Includes features for Bluetooth pairing, data receiving, and real-time display.
- You can edit or customize this app by importing the .aia file into [MIT App Inventor](https://ai2.appinventor.mit.edu/).

---

##  MIT App Inventor Programming Blocks

###  Bluetooth Connection
![Bluetooth Blocks](https://raw.githubusercontent.com/himanshu-jangra77/EVM-Machine/90445555388255e06803004f7844e872dd214bac/EVM-Code/Screenshot%202025-05-30%20000436.png)

### Displaying Vote Results
![Vote Display Blocks](https://raw.githubusercontent.com/himanshu-jangra77/EVM-Machine/90445555388255e06803004f7844e872dd214bac/EVM-Code/Screenshot%202025-05-30%20000507.png)


## Credits

- Developed by: *[Himanshu]*
- Arduino IDE: [https://www.arduino.cc/](https://www.arduino.cc/)
- MIT App Inventor: [https://appinventor.mit.edu/](https://appinventor.mit.edu/0
