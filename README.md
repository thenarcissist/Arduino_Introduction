# Elektronica Arduino Introductory Session 

### Basic Requirements
* Arduino IDE (That's it!) :wink:  

##  Arduino IDE Installation Guide


### Windows
  Download and run the Arduino IDE setup - [Arduino-1.8.5-windows.exe](https://downloads.arduino.cc/arduino-1.8.5-windows.exe). <br/>
        
### MacOS
    1. Download the Application zip file - [Arduino-1.8.5-macosx.zip](https://downloads.arduino.cc/arduino-1.8.5-macosx.zip).<br/>

  2. Extract the zip file.
  
  3. Open the extracted folder.
    ![Image](https://www.arduino.cc/en/uploads/Guide/Mac_Download.jpg)
  
  4. Copy the Arduino application into the Applications folder 
    ![image](https://www.arduino.cc/en/uploads/Guide/MAC_App.jpg)
  
  5. You are done! 

### Ubuntu (Linux)
   1. Download the package which fits your system. (For  64 Bit go to [Arduino-1.8.5-linux64.tar.xz])(https://downloads.arduino.cc/arduino-1.8.5-linux64.tar.xz)<br/>
     
   2. Go to your downloads folder and extract the archive.
   
   3. Open the terminal and change the working directory to Downloads.
   ```Shell
cd Downloads
   ```
   4. Delete the archive. 
   3. Open the terminal and change the working directory to Downloads.
   ```Shell
sudo rm -r arduino-1.8.5-linux64.tar.gz
   ```
   5. Change your working directory to the extracted folder.
   ```Shell
cd /arduino-1.8.5
   ```
  6. Open the install shell script with an editor and if necessary change the line "RESOURCE_NAME=cc.arduino.arduinoide" to "RESOURCE_NAME=arduino-arduinoide".
 ```Shell
sudo nano install.sh
 ```
The result should look like this:  
  ![Image](http://i67.tinypic.com/2mnkocj.png)

  7. Make the file executable and run it.
  ```Shell
   sudo chmod +x install.sh
./install.sh
  ```
  8. You are done! :sunglasses:
