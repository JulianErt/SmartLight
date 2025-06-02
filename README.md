# Control any LED over Home Assistant
in my case I want to connect my Audi Quattro with LED lights to my Home Assistant
![Audi Quattro](/assets/images/audi_quattro_on.png)


## needed hardware

- Soldering iron
- ESP (in my case im using a ESP8266 Node MCU)

## connect the ESP to the LEDs
first step is to check the pinout from your ESP
![pinout 8266](https://i0.wp.com/randomnerdtutorials.com/wp-content/uploads/2019/05/ESP8266-NodeMCU-kit-12-E-pinout-gpio-pin.png?quality=100&strip=all&ssl=1 "pinout")

I have three different lights, and I want to be able to control them independently. To achieve this, I soldered the cables together and plugged them into the appropriate ports.

```
int front = 5;      // Connected the cable to GPIO5
int back = 4;       // Connected the cable to GPIO4
int interior = 14;  // Connected the cable to GPIO14

```

First, test the wiring using the Arduino IDE to ensure everything is connected correctly.
To upload code to the ESP8266, you  **must** install the [CH340 Driver](https://sparks.gogo.co.nz/ch340.html)

If everything works as expected, you can proceed to installing ESPHome

## ESPHome

Install the ESPHome addon in Home Assistant.

### ESPHome flashing
goto the [web installer](https://web.esphome.io/) from esphome

the interface looks like this:

![Dashboard web.esphome](/assets/images/esphome_dashboard.png "dashboard")


To connect, you need to use a browser that supports WebSerial—Chrome or Microsoft Edge should work.
Click on Connect and follow the installation dialog.

After a successful installation, you’ll connect to Wi-Fi using the dialog. This should automatically add your Wi-Fi SSID and password to the secrets.yaml file.

![dashboard ESPhome](https://alexheller.dev/_next/image?url=https%3A%2F%2Fcdn.sanity.io%2Fimages%2Fzn6598rc%2Fproduction%2F2f5ce680768f7c13d166cd06b34267fbcf5d97a8-1710x941.png&w=1080&q=75)
In Home Assistant, you can either adopt the device or click on 'Take Control' to add it to your ESPHome setup.
To add the switches to the ESP, click on Edit.

![esphome edit](/assets/images/esphome_edit.png)
In the editor, you can add the function like I did [here](/ESP8266/esphome-web-e01766.yaml)

er that, download the file manually and upload it to the ESP using the ESPHome web installer.

