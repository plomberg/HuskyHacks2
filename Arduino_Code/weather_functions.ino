
void overcast(void)
{
  // light LEDs cooler and/or dimmer
  for(int a=0; a<NUMPIXELS; a++) {
    strip.setPixelColor(a, [137, 175, 205]);
  }
  strip.show();
  // light water drip?
  
}

void partly_cloudy(void)
{
  blink_light(1);
  // Somewhat bright clouds, some sun animation but cooler color temp
  for (int b=0; b < NUMPIXELS; b++) {
  strip.setPixelColor(all, [231, 235, 86]);
  strip.show(); 
  for (x=0; x< NUMPIXELS; x++){
    strip.setPixelColor(x, [0, 255, 239]);
    strip.show();
    delay(5000);
    strip.setPixelColor(x, [231, 235, 86]);
    strip.show();
  }
  }
}

void mostly_cloudy(void)
{
  blink_light(2);
  // darker, cool color balance. Slow cool fading
  for (int c = 0; c < NUMPIXELS, c++){
  strip.setPixelColor(c, [220, 0, 0]);
  }
  strip.show();
  
}

void clear_weather(void)
{
  blink_light(3);
  // Warm, sunny color temperature
  for (int d = 0; d < NUMPIXELS, d++) {
  strip.setPixelColor(all, [234, 238, 127]);
  }
  strip.show();
    for (x=0; x< NUMPIXELS; x++){
    strip.setPixelColor(x, [0, 255, 239]);
    strip.show();
    delay(1000);
    strip.setPixelColor(x, [255, 255, 0]);
    strip.show();
  
}

void chance_of_rain(void)
{
  blink_light(4);
  for (int e = 0; e < NUMPIXELS; e++) {
  strip.setPixelColor(all, [128, 95, 3]);
  }
  strip.show();
}

void thunderstorm(void)
{
  blink_light(5);
  // Rain and flashing bright lights every few seconds
  for (int f = 0; f < NUMPIXELS; f++) {
    strip.setPixelColor(f, [255, 0, 0]);
  }
  delay(4000);
  for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, [0, 0, 0]);
  }
  strip.show();
  delay (100);
  strip.setPixelColor(4, [255, 255, 255]);
  strip.setPixelColor(10, [255, 255, 255]);
  strip.setPixelColor(12, [255, 255, 255]);
  strip.setPixelColor(18, [255, 255, 255]);
  strip.show;
  delay(200);
    for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, [0, 0, 0]);
  }
  strip.show();
  delay(100);
  strip.setPixelColor(4, [255, 255, 255]);
  strip.setPixelColor(10, [255, 255, 255]);
  strip.setPixelColor(12, [255, 255, 255]);
  strip.setPixelColor(18, [255, 255, 255]);
  delay(200);
    for (int f = 0; f < NUMPIXELS; f++) {
    strip.setPixelColor(f, [255, 0, 0]);
  }
  delay(7000);
      for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, [0, 0, 0]);
      }
  strip.show();
  delay(100);
  strip.setPixelColor(14, [255, 255, 255]);
  strip.setPixelColor(20, [255, 255, 255]);
  strip.setPixelColor(27, [255, 255, 255]);
  strip.setPixelColor(29, [255, 255, 255]);
  strip.show(); 
  delay (200);
        for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, [0, 0, 0]);
      }
      strip.show();
  delay(100);
  strip.setPixelColor(14, [255, 255, 255]);
  strip.setPixelColor(20, [255, 255, 255]);
  strip.setPixelColor(27, [255, 255, 255]);
  strip.setPixelColor(29, [255, 255, 255]);
  strip.show(); 
  delay (200);
    for (int f = 0; f < NUMPIXELS; f++) {
    strip.setPixelColor(f, [255, 0, 0]);
  }
  delay(5000);
        for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, [0, 0, 0]);
      }
      strip.show();
  delay(100);
  strip.setPixelColor(3, [255, 255, 255]);
  strip.setPixelColor(7, [255, 255, 255]);
  strip.setPixelColor(10, [255, 255, 255]);
  strip.setPixelColor(29, [255, 255, 255]);
  strip.show();
  delay (200);
    for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, [0, 0, 0]);
      }
  strip.show();
  delay(100);
  strip.setPixelColor(3, [255, 255, 255]);
  strip.setPixelColor(7, [255, 255, 255]);
  strip.setPixelColor(10, [255, 255, 255]);
  strip.setPixelColor(29, [255, 255, 255]);
  delay (200);        
  for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, [0, 0, 0]);
      }
      strip.show();
  delay(100);
    for (int f = 0; f < NUMPIXELS; f++) {
    strip.setPixelColor(f, [255, 0, 0]);
  }
  delay(8000);
      for (int g = 0; g < NUMPIXELS; g++) {
    strip.setPixelColor(g, [0, 0, 0]);
      }
  delay(100);
  strip.setPixelColor([8, 13, 17, 20], [255, 255, 255]);
  delay(200);
  strip.show();
  delay(100);
  strip.setPixelColor([8, 13, 17, 20], [255, 255, 255]);
  delay(200);
  strip.setPixelColor(all, [255, 0, 0]);
}

void chance_of_a_thunderstorm(void)
{
  blink_light(6);
  strip.setPixelColor(all, [255, 0, 0]);
  delay(8000);
  strip.show();
  delay(100);
  strip.setPixelColor([3, 5, 9], [255, 255, 255]);
  delay(200);
  strip.show();
  delay(100);
  strip.setPixelColor(all, [255, 0, 0]);
  delay(10000);
  strip.show();
  delay(100);
  strip.setPixelColor([17, 23, 26, 29], [255, 255, 255]);
  delay(200);
  strip.show();
  delay(100);
  strip.setPixelColor([17, 23, 26, 29], [255, 255, 255]);
  delay(200);
  strip.show();
  delay(100);
  strip.setPixelColor(all, [255, 0, 0]);
  
}

void light_rain(void)
{
  blink_light(7);
  // pwm'd rain?
  strip.setPixelColor(all, [205, 175, 137]);
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
