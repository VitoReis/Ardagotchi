# Ardagotchi
Tamagotchi game made for arduino using 0.96" 80x160 (RGB) IPS

## Requirements:
#### Hardware:
* Arduino Uno
* Display 0.96" 80x160 (RGB) IPS
* 3 Push buttons
* 1 Buzzer
* 3 resistors (10KΩ)
#### Software:
* My [modified version of Adafruit ST7735 Library](https://github.com/VitoReis/Adafruit-ST7735-Library-Modified) (I modified this library to add my display).
  * You can find the original version [here](https://github.com/adafruit/Adafruit-ST7735-Library).

## Connections:
#### Display 0.96" 80x160 (RGB) IPS:
| Entry | Pin |
| ------------ | ------------ |
| GND | GROUND |
| VCC | 5V |
| SCL | DIGITAL 13 |
| SDA | DIGITAL 11 |
| RES | DIGITAL 8 |
| DC | DIGITAL 9 |
| CS | DIGITAL 10 |
| BLK | NONE | 

#### Buttons:
| Entry | Pin |
| ------------ | ------------ |
| FEED BUTTON | DIGITAL 2 |
| DRINK BUTTON | DIGITAL 3 |
| SLEEP BUTTON | DIGITAL 4 | 

#### Buzzer:
| Entry | Pin |
| ------------ | ------------ |
| SIGNAL | DIGITAL 6 |
| GND | GROUND | 

## Comments: 
If you're not using the same display that i'm using, you will need to make some modifications on the code, maybe you can even use the original Adafruit ST7735 library. 
