
# DrawnPlay Buddy

A painter and gamer robot

## Positioning
Before running the program, adjust the robot's arms as follows.
![WhatsApp Image 2024-01-05 at 09 47 52](https://github.com/elw1s/DrawnPlay-Buddy/assets/66280976/df8ca493-87e6-4a27-8094-4462ff3ff596)

## Deployment

### a. Desktop Application

The graphical interface has been developed using Qt 6.6.1 on Ubuntu 22.04. Currently, there is no .deb or AppImage creator available for the specified Qt version. A .deb project has been prepared using "cpack," but for it to run, Qt 6.6.1 needs to be installed on the computer.

[Download for Ubuntu 22.04](https://drive.google.com/file/d/17MyQS3QuPF5W_aw8DlFgdDgftv5PlcJc/view?usp=sharing)

The most suitable method to run the program is to download the Qt Creator program, then open the project by selecting "Open Project" and choosing the "CMakeLists.txt" file (located in the folder where the source code is). Afterward, the program can be run with either the Debug or Release versions.

[Download Qt](https://www.qt.io/download-qt-installer-oss?hsCtaTracking=99d9dd4f-5681-48d2-b096-470725510d34%7C074ddad0-fdef-4e53-8aa8-5e8a876d6ab4)

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

## Usage

After the embedded system is running, open either the Desktop or Mobile application. For the Desktop application, connect to the embedded system by entering the IP and Port in the Settings menu. Then, use the desired features of the applications to make the robot draw or play games. Have fun!
