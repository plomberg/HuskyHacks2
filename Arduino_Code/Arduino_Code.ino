#include <Adafruit_DotStar.h>

#include <Adafruit_DotStar.h>
#include <SPI.h>

#define NUM_CONDITIONS 8
#define NUM_CHARACTERS 30
#define DATAPIN 4
#define CLOCKPIN 5
#define NUMPIXELS 4

Adafruit_DotStar strip = Adafruit_DotStar (
   NUMPIXELS, DATAPIN, CLOCKPIN, DOTSTAR_BRG);


const char *conditions[] = 
{
    "\0",
    "Overcast",
    "Partly Cloudy",
    "Mostly Cloudy",
    "Clear",
    "Chance of Rain",
    "Thunderstorm",
    "Chance of a Thunderstorm",
    "Light Rain"
};

String condition_read_string;
char condition_read[NUM_CHARACTERS];

uint8_t rain_pin = 5; // change this to proper pin
uint8_t mode_pin = 6; 
uint8_t led_pin = 13;
uint8_t condition_num;

Adafruit_DotStar init_dotstar(void);

void setup() {
  Serial.begin(9600);
  while (!Serial) {} 

  pinMode(mode_pin, INPUT);
  digitalWrite(mode_pin, HIGH); // enable pullup
  pinMode(led_pin, OUTPUT);
  pinMode(rain_pin, OUTPUT); 

  strip.begin();
  strip.show();

  }


uint8_t condition_string_to_num(char condition_read[]);
void weather_demo(void);
void overcast(void);
void partly_cloudy(void);
void mostly_cloudy(void);
void clear_weather(void);
void chance_of_rain(void);
void thunderstorm(void);
void chance_of_a_thunderstorm(void);
void light_rain(void);
void unknown_condition(void);
void blink_light(uint8_t blinks);

void loop() {

  // check if demo mode enabled (high = on)
  if (digitalRead(mode_pin)) { weather_demo(); }

  // Receive data from weather API if available
  // check for this every once and a while (put in an ISR?)
  condition_read_string = Serial.readString();
  strcpy(condition_read, condition_read_string.c_str());
  
  // Determine weather states
  if (condition_read)
  {
    condition_num = condition_string_to_num(condition_read);
  }
  
  switch (10)
  {
    // no value read
    case 0 :
      break;
    case 1 :
      overcast();
      break;
    case 2 :
      partly_cloudy();
      break;
    case 4 :
      mostly_cloudy();
      break;
    case 5 :
      clear_weather();
      break;
    case 6 :
      chance_of_rain();
      break;
    case 7 :
      thunderstorm();
      break;
    case 8 :
      chance_of_a_thunderstorm();
      break;
    case 9 :
      light_rain();
      break;
    case 10:
      weather_demo();
    default :
      unknown_condition();
      break;
  }
  delay(2000);
}

uint8_t condition_string_to_num(char condition_read[])
{
  // compare through conditions[] until there's a match
  uint8_t iii;
  for (iii=0; iii<NUM_CONDITIONS; iii++)
  {
    if (!strcmp(condition_read,conditions[iii])) // strings match
      return iii;
  }
  
  return 0;
}


void blink_light(uint8_t blinks)
{
  uint8_t i;
  for (i=0; i<blinks; i++)
  {
    digitalWrite(led_pin, HIGH);
    delay(100);
    digitalWrite(led_pin, LOW);
    delay(100);
  }

}

