# STM32F103_MSD_BOOTLOADER
STM32F103 Mass Storage Device Bootloader

Device: STM32F103C8T6 (Flash size: 128KB )

My example:
| Name | Address |
| --- | --- |
| Appcode starts from: | 0x0800_4000 - 0x0801_FFFF  (112KB) |
| (Unused) starts from: | 0x0800_3170 - 0x0800_3FFF (3.64KB)|
| Bootloader starts from: | 0x0800_0000 - 0x0800_316F (12.36KB)|

Simulate a USB removable disk (FAT32).
The content of firmware.bin is mapped to Appcode area. Hence, the size of firmware.bin is also 112KB.

Just drag and drop the intel hex file to update the appcode. The bootloader will automatically restart if EOF RecordType is found in the hex file.

Only tested on Windows 8 and MacOS Sierra<br />

During power up, the bootloader will check the content of 0x0800_4000 exists or not.
Hold PA0 (Connect to GND) during power up can force to enter bootloader mode.

Several examples are provided in "example-hex" to validate the bootloader feature.
####Test Procedure:
1. Hold PA0 during power up to enter bootloader mode.
2. A removable disk drive named "BOOTLOADER" is recognized.
3. Ensure PA0 is released.
4. Drag and drop STM32F103_FlashPC13LED_FAST.hex to the removable disk.
5. Since the iHex file contains EOF record type, the bootloader will be self-reset.
6. The bootloader jumps to Appcode. LED (PC13) blinks. 
