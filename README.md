Atreus62
===

A 62 key variant of the Atreus keyboard using the STM32F103 BluePill board and QMK firmware.
WS2812 RGB LED stick attached to SPI1 of the board.

BluePill Board: https://www.sgbotic.com/index.php?dispatch=products.view&product_id=3043
BoardManufacturer Github: https://github.com/WeActTC/BluePill-Plus

Board came with its own HID bootloader which is not compatible with the QMK toolbox or df_utils.
Had to buy a ST Link V2 to flash the STM32Duino bootloader to get it to successfully flash the firmware.
Bootloader Link: https://github.com/WeActTC/BluePill-Plus/tree/master/SDK/STM32F103C8T6/Arduino/Bootloader

Original: https://github.com/profet23/atreus62
Handwired with the QMK handwire guide: https://beta.docs.qmk.fm/using-qmk/guides/keyboard-building/hand_wire

See [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) then the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

Drag this into the atreus keyboard setting.