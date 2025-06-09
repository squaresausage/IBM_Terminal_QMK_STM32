# STM32 Keyboard converter for IBM terminal keyboard

Fork of the IBM Terminal USB converter keyboard definition for QMK adding support for STM32 (specifically the F042G6)

This is a port of TMK's converter/terminal_usb to QMK.

It supports PS/2 Scan Code Set 3 and runs on USB STM32 chips.
Currently I have only tested this on an STM32F042G6.


Original converter article: http://geekhack.org/index.php?topic=27272.0


## Connection

Keyboard | STM32F042G6
:------- | :---------
Data     |  A14
Clock    |  A15

And VCC and GND, of course. See Resource section for keyboard connector pin assign.

A14 and A15 should/will be changed as they conflict with the SWD interface


## Build

```
git clone https://github.com/qmk/qmk_firmware.git
cd qmk_firmware
make converter/ibm_terminal:default
```

## Resource

- Soarer's Converter: http://geekhack.org/index.php?topic=17458.0
- 102keys(1392595): http://geekhack.org/index.php?topic=10737.0
- 122keys(1390876): http://www.seasip.info/VintagePC/ibm_1390876.html
- KbdBabel: http://www.kbdbabel.org/
- RJ45 Connector: http://www.kbdbabel.org/conn/kbd_connector_ibmterm.png
- DIN Connector: http://www.kbdbabel.org/conn/kbd_connector_ibm3179_318x_319x.png

