
void overcast(void)
{
  // light LEDs cooler and/or dimmer
  for(int a=0; a<NUMPIXELS; a++) {
    strip.setPixelColor(a, 0x89AFCD);
  }
  strip.show();
  // light water drip?
  
}

void partly_cloudy(void)
{
  blink_light(1);
  // Somewhat bright clouds, some sun animation but cooler color temp
  for (int b=0; b < NUMPIXELS; b++) {
  strip.setPixelColor(b, 0x56EBE7);
  }
  strip.show(); 
  for (int x=0; x< NUMPIXELS; x++){
    strip.setPixelColor(x, 0xE7EB56);
    strip.show();
    delay(5000);
    strip.setPixelColor(x, 0x00FFEF);
    strip.show();
  }
}

void mostly_cloudy(void)
{
  blink_light(2);
  // darker, cool color balance. Slow cool fading
  for (int c = 0; c < NUMPIXELS; c++){
  strip.setPixelColor(c, 0x0000DC);
  }
  strip.show();
  
}

void clear_weather(void)
{
  blink_light(3);
  // Warm, sunny color temperature
  for (int d = 0; d < NUMPIXELS; d++) {
  strip.setPixelColor(d, 0x0000DC);
  }
  strip.show();
    for ( int x=0; x< NUMPIXELS; x++){
    strip.setPixelColor(x, 0xE1E100);
    strip.show();
    delay(1000);
    strip.setPixelColor(x, 0x0000DC);
    strip.show();
    }
}

void chance_of_rain(void)
{
  blink_light(4);
  for (int e = 0; e < NUMPIXELS; e++) {
  strip.setPixelColor(e, 0x035F80);
  }
  strip.show();
}

void thunderstorm(void)
{
  blink_light(5);
  // Rain and flashing bright lights every few seconds
  for (int f = 0; f < NUMPIXELS; f++) {
    strip.setPixelColor(f, 0x0000FF);
  }
  delay(4000);
  for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
  }
  strip.show();
  delay (100);
  strip.setPixelColor(4, 0xFFFFFF);
  strip.setPixelColor(10, 0xFFFFFF);
  strip.setPixelColor(12, 0xFFFFFF);
  strip.setPixelColor(18, 0xFFFFFF);
  strip.show();
  delay(200);
    for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
  }
  strip.show();
  delay(100);
  strip.setPixelColor(4, 0xFFFFFF);
  strip.setPixelColor(10, 0xFFFFFF);
  strip.setPixelColor(12, 0xFFFFFF);
  strip.setPixelColor(18, 0xFFFFFF);
  delay(200);
    for (int f = 0; f < NUMPIXELS; f++) {
    strip.setPixelColor(f, 0x0000FF);
  }
  delay(7000);
      for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
  strip.show();
  delay(100);
  strip.setPixelColor(14, 0xFFFFFF);
  strip.setPixelColor(20, 0xFFFFFF);
  strip.setPixelColor(27, 0xFFFFFF);
  strip.setPixelColor(29, 0xFFFFFF);
  strip.show(); 
  delay (200);
        for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
      strip.show();
  delay(100);
  strip.setPixelColor(14, 0xFFFFFF);
  strip.setPixelColor(20, 0xFFFFFF);
  strip.setPixelColor(27, 0xFFFFFF);
  strip.setPixelColor(29, 0xFFFFFF);
  strip.show(); 
  delay (200);
    for (int f = 0; f < NUMPIXELS; f++) {
    strip.setPixelColor(f, 0x0000FF);
  }
  delay(5000);
        for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
      strip.show();
  delay(100);
  strip.setPixelColor(3, 0xFFFFFF);
  strip.setPixelColor(7, 0xFFFFFF);
  strip.setPixelColor(10, 0xFFFFFF);
  strip.setPixelColor(29, 0xFFFFFF);
  strip.show();
  delay (200);
    for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
  strip.show();
  delay(100);
  strip.setPixelColor(3, 0xFFFFFF);
  strip.setPixelColor(7, 0xFFFFFF);
  strip.setPixelColor(10, 0xFFFFFF);
  strip.setPixelColor(29, 0xFFFFFF);
  strip.show();
  delay (200);        
  for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
      strip.show();
  delay(100);
    for (int f = 0; f < NUMPIXELS; f++) {
    strip.setPixelColor(f, 0x0000FF);
  }
  strip.show();
  delay(8000);
      for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
  delay(100);
  strip.setPixelColor(8, 0xFFFFFF);
  strip.setPixelColor(13, 0xFFFFFF);
  strip.setPixelColor(17, 0xFFFFFF);
  strip.setPixelColor(20, 0xFFFFFF);
  strip.show();
  delay(200);
    for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
      strip.show();
  delay(100);
    strip.setPixelColor(8,0xFFFFFF);
  strip.setPixelColor(13, 0xFFFFFF);
  strip.setPixelColor(17, 0xFFFFFF);
  strip.setPixelColor(20, 0xFFFFFF);
  strip.show();
  delay(200);
  for (int f = 0; f < NUMPIXELS; f++) {
  strip.setPixelColor(f, 0x0000FF);
  }
  strip.show();
}

void chance_of_a_thunderstorm(void)
{
  blink_light(6);
   for (int f = 0; f < NUMPIXELS; f++) {
  strip.setPixelColor(f, 0x0000FF);
  }
  strip.show();
  delay(8000);
      for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
  strip.show();
  delay(100);
  strip.setPixelColor(3, 0xFFFFFF);
  strip.setPixelColor(5, 0xFFFFFF);
  strip.setPixelColor(9, 0xFFFFFF);
  strip.show();
  delay(200);
 for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
  strip.show();
  delay(100);
  for (int f = 0; f < NUMPIXELS; f++) {
  strip.setPixelColor(f, 0x0000FF);
  }
  strip.show();
  delay(10000);
   for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
  strip.show();
  delay(100);
  strip.setPixelColor(17, 0xFFFFFF);
  strip.setPixelColor(23, 0xFFFFFF);
  strip.setPixelColor(26, 0xFFFFFF);
  strip.setPixelColor(29, 0xFFFFFF);
  strip.show();
  delay(200);
     for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
  strip.show();
  delay(100);
  strip.setPixelColor(17, 0xFFFFFF);
  strip.setPixelColor(23, 0xFFFFFF);
  strip.setPixelColor(26, 0xFFFFFF);
  strip.setPixelColor(29, 0xFFFFFF);
  strip.show();
  delay(200);
  for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, 0x000000);
      }
  strip.show();
  delay(100);
    for (int f = 0; f < NUMPIXELS; f++) {
  strip.setPixelColor(f, 0x0000FF);
  }
  strip.show();
  
}

void light_rain(void)
{
  blink_light(7);
  // pwm'd rain?
  int k = 0;
  for (k; k < NUMPIXELS; k++) {
  strip.setPixelColor(k, 0x89AFCD);
  }
  strip.show();
}

void unknown_condition(void)
{
  blink_light(20);
  // ??? maybe fade through colors
}

void weather_demo(void)
{
  // cycle lights night-day fairly slowly (rotation of light source)

  // have a rain event for ~15 seconds?

  // lightning during the rainstorm

  // if switch switched back, go back
  if (digitalRead(mode_pin))
    return;
}
