#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include "Sprites.h"

//////////////////////////////////////////
//                BUTTONS               //
//////////////////////////////////////////
#define BUTTON_FEED 2
#define BUTTON_DRINK 3
#define BUTTON_SLEEP 4

//////////////////////////////////////
//              BUZZER              //
//////////////////////////////////////
#define BUZZER 6

//////////////////////////////////////////////////////
//                      DISPLAY                     //
//////////////////////////////////////////////////////
//DISPLAY CONNECTIONS:                              //
//GND - GND         (GROUND)                        //
//VCC - 5V          (VOLTAGE)                       //
//SCL - Digital 13  (SPI BUS CLOCK)                 //
//SDA - Digital 11  (SPI BUS DATA OUT FROM ARDUINO) //
//RES - Digital 8   (RESET INPUT)                   //
//DC  - Digital 9   (DATA INSTRUCTION SELECT PIN)   //
//CS  - Digital 10  (SPI BUS "CHIP SELECT")         //
//BLK - NONE        (BACKLIGHT)                     //
//////////////////////////////////////////////////////
//Declare the LCD display                           //
//////////////////////////////////////////////////////
#define TFT_RST        8
#define TFT_DC         9
#define TFT_CS        10
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

////////////////////////////////////////////
//                TAMAGOTCHI              //
////////////////////////////////////////////
//        Declare tamagotchi needs        //
////////////////////////////////////////////
float HEALTH = 100, HUNGER = 0, THIRST = 0, SLEEPINESS = 0;
uint8_t X = 50, Y = 50;
bool QUACK = 0, SIDE = 1, DECREASE_STATUS = 0, FORCED = 0, SPRITE = 0, RESET_DEATH;

///////////////////////////////////////////////////////////
//                      ACTIONS                          //
///////////////////////////////////////////////////////////
void feed(){
  while(HUNGER > 0){
    if(!SPRITE){
      tft.drawRGBBitmap(X, Y, duckFeeding1, 18, 20);
      delay(100);
      SPRITE = !SPRITE;
    }else{
      tft.drawRGBBitmap(X, Y, duckFeeding2, 18, 20);
      delay(200);
      SPRITE = !SPRITE;
    }
    (HUNGER - 5) < 0 ? HUNGER = 0 : HUNGER -= 5;
  }
  SPRITE = 0;
  if(QUACK) QUACK = 0;
}

void drink(){
  while(THIRST > 0){
    if(!SPRITE){
      tft.drawRGBBitmap(X, Y, duckDrinking1, 18, 20);
      delay(100);
      SPRITE = !SPRITE;
    }else{
      tft.drawRGBBitmap(X, Y, duckDrinking2, 18, 20);
      delay(200);
      SPRITE = !SPRITE;
    }
    (THIRST - 5) < 0 ? THIRST = 0 : THIRST -= 5;
  }
  SPRITE = 0;
  if(QUACK) QUACK = 0;
}

void sleep(){
  while(SLEEPINESS > 0){
    if(!SPRITE){
      tft.drawRGBBitmap(X, Y, duckSleeping1, 18, 20);
      delay(500);
      SPRITE = !SPRITE;
    }else{
      tft.drawRGBBitmap(X, Y, duckSleeping2, 18, 20);
      delay(500);
      SPRITE = !SPRITE;
    }
    (SLEEPINESS - 5) < 0 ? SLEEPINESS = 0 : SLEEPINESS -= 5;
    (HUNGER + 0.25) > 100 ? HUNGER = 100 : HUNGER + 0.25;
    (THIRST + 0.25) > 100 ? THIRST = 100 : THIRST + 0.25;
    if(FORCED){
      (HUNGER + 5) > 100 ? HUNGER = 100 : HUNGER + 5;
      (THIRST + 5) > 100 ? THIRST = 100 : THIRST + 5;
    }
  }
  SPRITE = 0;
  !FORCED ? : FORCED = 0;
}

///////////////////////////////////////////////////////////
//              DECREASE TAMAGOTCHI STATUS               //
///////////////////////////////////////////////////////////
void decreaseStatus(){
  (HUNGER + 1) > 100 ? HUNGER = 100 : HUNGER += 0.1;
  (THIRST + 2) > 100 ? THIRST = 100 : THIRST += 0.2;
  (SLEEPINESS + 0.5) > 100 ? SLEEPINESS = 100 : SLEEPINESS += 0.05;
  // CHECK STATUS COLORS
  checkStatusColors();
}

///////////////////////////////////////////////////////////
//                CHECK STATUS COLORS                    //
///////////////////////////////////////////////////////////
void checkStatusColors(){
  // HEALTH
  if(HEALTH >= 75){
    tft.drawRGBBitmap(0, 0, healthFull, 10, 9);
  }else if(HEALTH >= 25 && HEALTH < 75){
    tft.drawRGBBitmap(0, 0, healthMedium, 10, 9);
  }else{
    tft.drawRGBBitmap(0, 0, healthEmpty, 10, 9);
  }

  // HUNGER
  if(HUNGER >= 0 && HUNGER < 25){
    tft.drawRGBBitmap(20, 0, hungryFull, 7, 9);
  }else if(HUNGER >= 25 && HUNGER < 75){
    tft.drawRGBBitmap(20, 0, hungryMedium, 7, 9);
  }else{
    tft.drawRGBBitmap(20, 0, hungryEmpty, 7, 9);
  }

  // THIRST
  if(THIRST >= 0 && THIRST < 25){
     tft.drawRGBBitmap(37, 0, thirstFull, 8, 9);
  }else if(THIRST >= 25 && THIRST < 75){
    tft.drawRGBBitmap(37, 0, thirstMedium, 8, 9);
  }else{
    tft.drawRGBBitmap(37, 0, thirstEmpty, 8, 9);
  }

  // SLEEPINESS
  if(SLEEPINESS >= 0 && SLEEPINESS < 25){
    tft.drawRGBBitmap(55, 0, sleepFull, 8, 9);
  }else if(SLEEPINESS >= 25 && SLEEPINESS < 75){
    tft.drawRGBBitmap(55, 0, sleepMedium, 8, 9);
  }else{
    tft.drawRGBBitmap(55, 0, sleepEmpty, 8, 9);
  }
}

///////////////////////////////////////////////////////////
//                    DRAW SCENARIO                      //
///////////////////////////////////////////////////////////
void scenario(){
  // SKY
  tft.fillScreen(BLUE);
  // GROUND
  tft.fillRect(0, 70, 160, 74, ST77XX_BLACK);
  tft.fillRect(0, 71, 160, 73, ST77XX_GREEN);
  tft.fillRect(0, 75, 160, 80, BROWN);
  // SUN
  tft.fillCircle(150, 10, 21, ST77XX_BLACK);
  tft.fillCircle(150, 10, 20, ST77XX_YELLOW);
  // CLOUDS
  tft.fillCircle(10, 25, 11, ST77XX_BLACK);
  tft.fillCircle(20, 20, 11, ST77XX_BLACK);
  tft.fillCircle(30, 25, 11, ST77XX_BLACK);
  tft.fillCircle(10, 25, 10, ST77XX_WHITE);
  tft.fillCircle(20, 20, 10, ST77XX_WHITE);
  tft.fillCircle(30, 25, 10, ST77XX_WHITE);
  // EGG
  tft.drawRGBBitmap(X, Y + 3, egg1, 14, 17);
}

///////////////////////////////////////////////////////////
//                    MAIN AND LOOP                      //
///////////////////////////////////////////////////////////
void setup(){
  // START DISPLAY
  tft.initR(INITR_MINI160x80_MOD);   // MODIFIED DISPLAY 0.96' 80x160(RGB) IPS
  // BUTTONS
  pinMode(BUTTON_FEED, INPUT);
  pinMode(BUTTON_DRINK, INPUT);
  pinMode(BUTTON_SLEEP, INPUT);
  // BUZZER
  pinMode(BUZZER, OUTPUT);
  scenario();
}

void loop(){
  // HATCH EGG
  uint8_t pressed = 0;
  while(pressed < 10){
    if(digitalRead(BUTTON_FEED) || digitalRead(BUTTON_DRINK) || digitalRead(BUTTON_SLEEP)){
      tft.drawRGBBitmap(X, Y + 3, egg2, 14, 17);
      pressed++;
      delay(200);
      tft.drawRGBBitmap(X, Y + 3, egg1, 14, 17);
    }
  }
  // DRAW TAMAGOTCHI NEEDS
  checkStatusColors();
  RESET_DEATH = 0;
  while(!RESET_DEATH){
    // CHECK IF THE DUCK DIED
    if(HEALTH <= 0){
      tone(BUZZER, 900, 200);
      tft.drawRGBBitmap(X, Y, duckDead, 18, 20);
      while(true){
        if(digitalRead(BUTTON_FEED) || digitalRead(BUTTON_DRINK) || digitalRead(BUTTON_SLEEP)){
          HEALTH = 100; HUNGER = 0; THIRST = 0; SLEEPINESS = 0;
          X = 50; Y = 50;
          QUACK = 0; SIDE = 1;DECREASE_STATUS = 0; FORCED = 0; RESET_DEATH = !RESET_DEATH;
          scenario();
          break;
        }
      }
      if(RESET_DEATH){
        break;
      }
    }
    // CHECK IF THE DUCK IS STARVING | DYING OF THIRST | PASSING OUT
    if(HUNGER >= 100 || THIRST >= 100){
      HEALTH -= 2;
      checkStatusColors();
    }else{
    // HEALING THE DUCK
      if(HEALTH < 100){
        (HEALTH + 4) > 25 ? HEALTH = 100 : HEALTH + 4;
      }
      checkStatusColors();
    }
    if(SLEEPINESS >= 100){
      FORCED = 1;
      sleep();
    }
    // HUNGRY/THIRST DUCK SOUND IF HE IS 
    if(!QUACK && HUNGER > 75 || !QUACK && THIRST > 75){     
      tone(BUZZER, 600, 100);
      delay(200);
      tone(BUZZER, 600, 100);
      QUACK = 1;
    }
    // ACTIONS
    if(digitalRead(BUTTON_FEED)){
      feed();
      checkStatusColors();
    }
    if(digitalRead(BUTTON_DRINK)){
      drink();
      checkStatusColors();
    }
    if(digitalRead(BUTTON_SLEEP)){
      sleep();
      checkStatusColors();
    }
    // DUCK WALKING
    if(SIDE){
      if(X % 2 == 0){
        tft.drawRGBBitmap(X, Y, duckRight1, 18, 20);
        X += 1;
        delay(100);
      }else{
        tft.drawRGBBitmap(X, Y, duckRight2, 18, 20);
        X += 1;
        delay(100);
      }
      if(X >= 141){ // SCREEN WIDTH - SPRITE WIDTH => EX: 160 - 18 = 141
        SIDE = !SIDE;
      }
    }else{
      if(X % 2 == 0){
        tft.drawRGBBitmap(X, Y, duckLeft1, 18, 20);
        X -= 1;
        delay(100);
      }else{
        tft.drawRGBBitmap(X, Y, duckLeft2, 18, 20);
        X -= 1;
        delay(100);
      }
      if(X <= 0){
        SIDE = !SIDE;
      }
    }
    // DECREASE STATUS OVER TIME
    DECREASE_STATUS = !DECREASE_STATUS;
    if(DECREASE_STATUS){
      decreaseStatus();
      DECREASE_STATUS = !DECREASE_STATUS;
    }
  }
}
