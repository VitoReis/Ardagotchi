////////////////////////////////////////////
//                  COLORS                //
////////////////////////////////////////////
#define BLACK ST77XX_BLACK
#define WHITE ST77XX_WHITE
#define RED ST77XX_RED
#define GREEN ST77XX_GREEN
#define BLUE ST77XX_BLUE
#define CYAN ST77XX_CYAN
#define MAGENTA ST77XX_MAGENTA
#define YELLOW ST77XX_YELLOW
#define ORANGE ST77XX_ORANGE
#define BROWN 0x9b00

///////////////////////////////////////////////////////////
//                      SPRITES                          //
///////////////////////////////////////////////////////////
// RESOLUTION = 10x9
const uint16_t healthFull[90] PROGMEM = {
  BLUE, BLACK, BLACK, BLACK, BLUE, BLUE, BLACK, BLACK, BLACK, BLUE, 
  BLACK, GREEN, GREEN, GREEN, BLACK, BLACK, GREEN, WHITE, WHITE, BLACK, 
  BLACK, GREEN, GREEN, GREEN, GREEN, GREEN, GREEN, GREEN, WHITE, BLACK, 
  BLACK, GREEN, GREEN, GREEN, GREEN, GREEN, WHITE, GREEN, GREEN, BLACK,
  BLACK, GREEN, GREEN, GREEN, GREEN, GREEN, GREEN, GREEN, GREEN, BLACK,
  BLUE, BLACK, GREEN, GREEN, GREEN, GREEN, GREEN, GREEN, BLACK, BLUE,
  BLUE, BLUE, BLACK, GREEN, GREEN, GREEN, GREEN, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, GREEN, GREEN, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE
};
const uint16_t healthMedium[90] PROGMEM = {
  BLUE, BLACK, BLACK, BLACK, BLUE, BLUE, BLACK, BLACK, BLACK, BLUE, 
  BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLACK, YELLOW, WHITE, WHITE, BLACK, 
  BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, WHITE, BLACK, 
  BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, WHITE, YELLOW, YELLOW, BLACK,
  BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK,
  BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE
};
const uint16_t healthEmpty[90] PROGMEM = {
  BLUE, BLACK, BLACK, BLACK, BLUE, BLUE, BLACK, BLACK, BLACK, BLUE, 
  BLACK, RED, RED, RED, BLACK, BLACK, RED, WHITE, WHITE, BLACK, 
  BLACK, RED, RED, RED, RED, RED, RED, RED, WHITE, BLACK, 
  BLACK, RED, RED, RED, RED, RED, WHITE, RED, RED, BLACK,
  BLACK, RED, RED, RED, RED, RED, RED, RED, RED, BLACK,
  BLUE, BLACK, RED, RED, RED, RED, RED, RED, BLACK, BLUE,
  BLUE, BLUE, BLACK, RED, RED, RED, RED, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, RED, RED, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE
};
// RESOLUTION = 7x9
const uint16_t hungryFull[72] PROGMEM = {
  BLUE, BLUE, BLACK, GREEN, BLACK, BLUE, BLUE, 
  BLUE, BLACK, GREEN, GREEN, GREEN, BLACK, BLUE,
  BLUE, BLACK, GREEN, GREEN, GREEN, GREEN, BLACK,
  BLUE, BLACK, GREEN, GREEN, GREEN, GREEN, BLACK,
  BLUE, BLUE, BLACK, GREEN, GREEN, GREEN, BLACK,
  BLUE, BLUE, BLACK, GREEN, GREEN, GREEN, BLACK,
  BLUE, BLACK, GREEN, GREEN, GREEN, BLACK, BLUE,
  BLACK, GREEN, GREEN, BLACK, BLACK, BLUE, BLUE,
  BLACK, GREEN, BLACK, BLUE, BLUE, BLUE, BLUE
};
const uint16_t hungryMedium[72] PROGMEM = {
  BLUE, BLUE, BLACK, WHITE, BLACK, BLUE, BLUE, 
  BLUE, BLACK, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLUE, BLUE, BLACK, GREEN, GREEN, GREEN, BLACK,
  BLUE, BLUE, BLACK, GREEN, GREEN, GREEN, BLACK,
  BLUE, BLACK, GREEN, GREEN, GREEN, BLACK, BLUE,
  BLACK, GREEN, GREEN, BLACK, BLACK, BLUE, BLUE,
  BLACK, GREEN, BLACK, BLUE, BLUE, BLUE, BLUE
};
const uint16_t hungryEmpty[72] PROGMEM = {
  BLUE, BLUE, BLACK, WHITE, BLACK, BLUE, BLUE, 
  BLUE, BLACK, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLUE, BLUE, BLACK, WHITE, WHITE, WHITE, BLACK,
  BLUE, BLUE, BLACK, WHITE, WHITE, WHITE, BLACK,
  BLUE, BLACK, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLACK, WHITE, WHITE, BLACK, BLACK, BLUE, BLUE,
  BLACK, WHITE, BLACK, BLUE, BLUE, BLUE, BLUE
};
// RESOLUTION = 8x9
const uint16_t thirstFull[72] PROGMEM = {
  BLUE, BLUE, BLUE, BLACK, BLACK, BLUE, BLUE, BLUE, 
  BLUE, BLUE, BLACK, BLUE, BLUE, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLACK, BLUE, BLUE, BLACK, BLUE, BLUE, 
  BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLUE,
  BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLUE,
  BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK,
  BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK,
  BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLUE,
  BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE
};
const uint16_t thirstMedium[72] PROGMEM = {
  BLUE, BLUE, BLUE, BLACK, BLACK, BLUE, BLUE, BLUE, 
  BLUE, BLUE, BLACK, WHITE, WHITE, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLACK, WHITE, WHITE, BLACK, BLUE, BLUE, 
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK,
  BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK,
  BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLUE,
  BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE
};
const uint16_t thirstEmpty[72] PROGMEM = {
  BLUE, BLUE, BLUE, BLACK, BLACK, BLUE, BLUE, BLUE, 
  BLUE, BLUE, BLACK, WHITE, WHITE, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLACK, WHITE, WHITE, BLACK, BLUE, BLUE, 
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE
};
const uint16_t sleepFull[72] PROGMEM = {
BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK,
BLACK, GREEN, GREEN, GREEN, GREEN, GREEN, GREEN, BLACK,
BLACK, BLACK, BLACK, BLACK, BLACK, GREEN, GREEN, BLACK,
BLUE, BLUE, BLUE, BLACK, GREEN, GREEN, BLACK, BLUE,
BLUE, BLUE, BLACK, GREEN, GREEN, BLACK, BLUE, BLUE,
BLUE, BLACK, GREEN, GREEN, BLACK, BLUE, BLUE, BLUE,
BLACK, GREEN, GREEN, BLACK, BLACK, BLACK, BLACK, BLACK,
BLACK, GREEN, GREEN, GREEN, GREEN, GREEN, GREEN, BLACK,
BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK
};
const uint16_t sleepMedium[72] PROGMEM = {
BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK,
BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK,
BLACK, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK,
BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLUE,
BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
BLUE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, BLACK,
BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK,
BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK
};
const uint16_t sleepEmpty[72] PROGMEM = {
BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK,
BLACK, RED, RED, RED, RED, RED, RED, BLACK,
BLACK, BLACK, BLACK, BLACK, BLACK, RED, RED, BLACK,
BLUE, BLUE, BLUE, BLACK, RED, RED, BLACK, BLUE,
BLUE, BLUE, BLACK, RED, RED, BLACK, BLUE, BLUE,
BLUE, BLACK, RED, RED, BLACK, BLUE, BLUE, BLUE,
BLACK, RED, RED, BLACK, BLACK, BLACK, BLACK, BLACK,
BLACK, RED, RED, RED, RED, RED, RED, BLACK,
BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK
};
// RESOLUTION = 14x17
const uint16_t egg1[238] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLACK, BLUE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE, BLUE,
  BLUE, BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK, BLUE,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK,
  BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLUE, BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK, BLUE,
  BLUE, BLUE, BLACK, BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE
};
const uint16_t egg2[238] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, BLACK, WHITE, WHITE, BLACK, WHITE, BLACK, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, WHITE, WHITE, BLACK, WHITE, WHITE, WHITE, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, BLACK, WHITE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLACK, BLUE, WHITE, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE, BLUE,
  BLUE, BLACK, BLACK, WHITE, WHITE, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK, BLUE,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, WHITE, WHITE, WHITE, BLACK, BLACK,
  BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, WHITE, WHITE, WHITE, BLACK,
  BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK,
  BLACK, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK,
  BLUE, BLACK, WHITE, WHITE, WHITE, WHITE, WHITE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLUE,
  BLUE, BLACK, BLACK, WHITE, WHITE, WHITE, BLACK, WHITE, WHITE, WHITE, WHITE, BLACK, BLACK, BLUE,
  BLUE, BLUE, BLACK, BLACK, BLACK, WHITE, WHITE, BLACK, WHITE, BLACK, BLACK, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE
};
// RESOLUTION = 18x20
const uint16_t duckRight1[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, WHITE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, ORANGE, ORANGE, BLACK, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE
};
const uint16_t duckRight2[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, WHITE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, ORANGE, ORANGE, BLACK, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE
};
const uint16_t duckLeft1[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, WHITE, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, ORANGE, ORANGE, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE
};
const uint16_t duckLeft2[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, WHITE, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, ORANGE, ORANGE, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE
};
const uint16_t duckSleeping1[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, ORANGE, ORANGE, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE
};
const uint16_t duckSleeping2[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, ORANGE, ORANGE, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE
};
const uint16_t duckFeeding1[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, WHITE, WHITE, YELLOW, BLACK, BLUE,
  BLACK, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLUE,
  BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE,
  BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLACK, ORANGE, BLACK, BLUE, BLUE,
  BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLUE, BLACK, ORANGE, BLACK, BLUE,
  BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLACK, BLACK, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE
};
const uint16_t duckFeeding2[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLUE, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLACK, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, WHITE, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLUE, ORANGE, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE,
  BLUE, BLUE, ORANGE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, ORANGE, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, ORANGE, BLACK, BLACK, BLUE, BLUE, BLUE,
  BLUE, ORANGE, ORANGE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE
};
const uint16_t duckDrinking1[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, WHITE, WHITE, YELLOW, BLACK, BLUE,
  BLACK, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLUE,
  BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE,
  BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLACK, ORANGE, BLACK, BLUE, BLUE,
  BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLUE, BLACK, ORANGE, BLACK, BLUE,
  BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLACK, BLACK, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE, WHITE, BLUE, BLUE, WHITE,
  BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE, WHITE, BLUE, BLUE, WHITE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, WHITE, BLUE, BLUE, WHITE,
  BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, WHITE, BLUE, BLUE, WHITE,
  BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, BLUE, WHITE, BLUE, BLUE, WHITE,
  BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, BLUE, WHITE, WHITE, WHITE, WHITE
};
const uint16_t duckDrinking2[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, WHITE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, ORANGE, ORANGE, BLACK, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, BLUE,
  BLUE, BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, BLACK, WHITE, BLUE, BLUE, WHITE,
  BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLACK, BLUE, WHITE, BLUE, BLUE, WHITE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, WHITE, BLUE, BLUE, WHITE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, WHITE, BLUE, BLUE, WHITE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, BLUE, BLUE, ORANGE, BLUE, BLUE, BLUE, BLUE, WHITE, BLUE, BLUE, WHITE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, ORANGE, ORANGE, BLUE, ORANGE, ORANGE, BLUE, BLUE, BLUE, WHITE, WHITE, WHITE, WHITE
};
const uint16_t duckDead[360] PROGMEM = {
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, RED, RED, BLUE, RED, RED, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, RED, RED, RED, BLUE, RED, RED, RED, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, RED, RED, RED, BLUE, RED, RED, RED, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, RED, RED, BLUE, RED, RED, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, RED, BLUE, RED, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE,
  BLUE, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK, BLACK, BLUE, BLUE,
  BLACK, YELLOW, BLACK, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLUE, BLACK, YELLOW, YELLOW, YELLOW, BLACK, BLUE,
  BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLACK, YELLOW, BLACK,
  BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK,
  BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLUE, YELLOW, YELLOW, BLACK,
  BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, BLUE,
  BLUE, BLUE, BLACK, YELLOW, BLACK, YELLOW, YELLOW, YELLOW, YELLOW, YELLOW, BLACK, YELLOW, BLACK, BLACK, BLACK, ORANGE, BLACK, BLUE,
  BLUE, BLUE, BLACK, YELLOW, YELLOW, BLACK, BLACK, BLACK, BLACK, BLACK, YELLOW, YELLOW, BLACK, BLUE, BLUE, BLACK, ORANGE, BLACK,
  BLUE, ORANGE, ORANGE, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLUE, BLUE, BLUE, BLUE, BLACK, BLACK
};
