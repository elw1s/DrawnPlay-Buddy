
# DrawnPlay Buddy


## Deployment

### a. Desktop Application

To launch the Desktop Application, double-click on the executable file named "scara_gui" inside the "drawnplay_buddy" folder. The program has been tested on Ubuntu 22.04. Windows support is not available.

In order to utilize the "Open Gazebo" feature, it is essential to have the latest Docker version installed on your computer. To run Gazebo Virtualization, execute the following command inside the "virtualization/docker" directory. The execution time may vary around 10 minutes depending on the hardware of your computer.

```bash
  sudo ./build-and-run.sh
```

### b. Mobile Application

The file with the .apk extension can be installed and run on the Android system.

### c. Embedded System

Firstly, the program needs to be run on Raspberry Pi. Connect to Raspberry Pi using the VNC Viewer program. Then navigate to the "Desktop/CSE396/BrachioGraphWithServer" folder. Open the terminal and execute the following command.

```bash
  cmake .. && make && clear && sudo ./server
```

After running the program on the Raspberry Pi, you should hear the motors running. The servos will move to their initial positions and be calibrated.


## Screenshots

![App Screenshot](https://via.placeholder.com/468x300?text=App+Screenshot+Here)
