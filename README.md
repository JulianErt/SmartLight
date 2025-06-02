# Control any LED over Home Assistant

## needed hardware

- Soldering iron
- ESP (in my case im using a ESP8266 Node MCU)

## connect the ESP to the LEDs
![pinout 8266](https://i0.wp.com/randomnerdtutorials.com/wp-content/uploads/2019/05/ESP8266-NodeMCU-kit-12-E-pinout-gpio-pin.png?quality=100&strip=all&ssl=1 "pinout")


## ESPHome
first testing with Arduino IDE if the wiring is correct.
to upload to esp8266 you **need** to install the [CH340 Driver](https://sparks.gogo.co.nz/ch340.html)

Install the ESPHome addon in Home Assistant.

## ESPHome flashing
goto the [web installer](https://web.esphome.io/) from esphome

the interface looks like this:

![Dashboard web.esphome](/assets/images/esphome_dashboard.png "dashboard")


follow installation from ESPHOME
https://web.esphome.io/

