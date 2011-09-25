#include "WProgram.h"
#include "Candle.h"

void Candle::setup(int pin) {
  _pin          = pin;
  _brightness   = 128;
  _flickerShift = 30;
  _nextFlicker  = 0;
  
  pinMode(_pin,OUTPUT);
}

void Candle::flicker() {
  unsigned long curr_time = millis();
  
  if(curr_time >= _nextFlicker) {
    _brightness = random(_brightness - _flickerShift, _brightness + _flickerShift);
    
    if(_brightness < 100) { _brightness = 100; }
    if(_brightness > 255) { _brightness = 255; }
    
    analogWrite(_pin,_brightness);
    
    _nextFlicker = curr_time + random(50,90);
  }
}