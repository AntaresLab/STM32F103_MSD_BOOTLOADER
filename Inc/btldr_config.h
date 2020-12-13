/*************************************************************************************
# Released under MIT License

Copyright (c) 2020 SF Yip (yipxxx@gmail.com)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**************************************************************************************/

#ifndef _BTLDR_CONFIG_H_
#define _BTLDR_CONFIG_H_

// STM32F103C8T6 - 128KB Flash Size
#define DEV_CODE_ADDR           0x08000000
#define DEV_FLASH_SIZE          (128*1024)

#define APP_ADDR                (DEV_CODE_ADDR + 0x4000)
#define APP_SIZE                (DEV_FLASH_SIZE - 0x4000)

#define CONFIG_READ_FLASH                   1u
#define CONFIG_SOFT_RESET_AFTER_IHEX_EOF    1u

#endif
