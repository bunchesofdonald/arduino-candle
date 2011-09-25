## Arduino-Candle

Turns an LED that is connected to a PWM into a flickering candle.

I created this for a halloween project last year. I wanted a semi-realistic 'candle' to go inside of my animatronic pumpkin (The Chomp-O-Lantern). 

## Usage

1. Include candle.h
2. Declare a candle:

    Candle candle

3. In setup() call candle.setup, specifying the pin number:
    candle.setup(11);

4. In your main loop simply call candle.flicker();
