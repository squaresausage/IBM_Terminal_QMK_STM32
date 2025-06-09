# STM32 Keyboard converter for IBM terminal keyboard

Fork of the IBM Terminal USB converter keyboard definition for QMK adding support for STM32 (specifically the F042G6)

This is a port of TMK's converter/terminal_usb to QMK.

It supports PS/2 Scan Code Set 3 and runs on USB STM32 chips.
Currently I have only tested this on an STM32F042G6.


Original converter article: http://geekhack.org/index.php?topic=27272.0


## Connection

Keyboard | STM32F042G6
:------- | :---------
Data     |  B3
Clock    |  A15

And VCC and GND, of course. See Resource section for keyboard connector pin assign.




## Build

Follow the QMK setup guide: https://docs.qmk.fm/newbs_getting_started
```
cd ~/qmk_firmware/keyboards/converter
git clone https://github.com/squaresausage/IBM_Terminal_QMK_STM32.git ibm_terminal_stm32
cd ~/qmk_firmware
qmk compile -kb converter/ibm_terminal_stm32 -km default
```

## Program
Within the ~/qmk_firmware folder

STM32 must be connected to the host in bootloader mode
```
dfu-util -D .build/converter_ibm_terminal_stm32_default.bin -a 0 -s 0x8000000:leave
```

## Resource

- Soarer's Converter: http://geekhack.org/index.php?topic=17458.0
- 102keys(1392595): http://geekhack.org/index.php?topic=10737.0
- 122keys(1390876): http://www.seasip.info/VintagePC/ibm_1390876.html
- KbdBabel: http://www.kbdbabel.org/
- RJ45 Connector: http://www.kbdbabel.org/conn/kbd_connector_ibmterm.png
- DIN Connector: http://www.kbdbabel.org/conn/kbd_connector_ibm3179_318x_319x.png

