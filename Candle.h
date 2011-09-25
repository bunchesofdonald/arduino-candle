#ifndef Candle_h
#define Candle_h

#include "WProgram.h"

class Candle
{
  public:
    void setup(int pin);
    void flicker();
    
  private:
    int _pin;
    int _brightness;
    int _flickerShift;
    
    unsigned long _nextFlicker;
};


#endif