#include "Arduino.h"
#include "BOT.h"

BOT::BOT(int pin1A, int pin1B, int pin2A, int pin2B, int pin3A, int pin3B, int pin4A, int pin4B){
    _pin1A = pin1A;
    _pin1B = pin1B;
    _pin2A = pin2A;
    _pin2B = pin2B;
    _pin3A = pin3A;
    _pin3B = pin3B;
    _pin4A = pin4A;
    _pin4B = pin4B;
    pinMode(_pin1B, OUTPUT);
    pinMode(_pin1A, OUTPUT);
    pinMode(_pin2B, OUTPUT);
    pinMode(_pin2A, OUTPUT);
    pinMode(_pin3B, OUTPUT);
    pinMode(_pin3A, OUTPUT);
    pinMode(_pin4B, OUTPUT);
    pinMode(_pin4A, OUTPUT);
}

bool BOT::_forward() {
    digitalWrite(_pin1A, HIGH);
    digitalWrite(_pin1B, LOW);
    digitalWrite(_pin2A, HIGH);
    digitalWrite(_pin2B, LOW);
    digitalWrite(_pin3A, HIGH);
    digitalWrite(_pin3B, LOW);
    digitalWrite(_pin4A, HIGH);
    digitalWrite(_pin4B, LOW);
    _state = FORWARD;
    return true;
}

bool BOT::_backward() {
    digitalWrite(_pin1A, LOW);
    digitalWrite(_pin1B, HIGH);
    digitalWrite(_pin2A, LOW);
    digitalWrite(_pin2B, HIGH);
    digitalWrite(_pin3A, LOW);
    digitalWrite(_pin3B, HIGH);
    digitalWrite(_pin4A, LOW);
    digitalWrite(_pin4B, HIGH);
    _state = BACKWARD;
    return true;
}

bool BOT::_right(){
    digitalWrite(_pin1A, HIGH);
    digitalWrite(_pin1B, LOW);
    digitalWrite(_pin2A, LOW);
    digitalWrite(_pin2B, HIGH);
    digitalWrite(_pin3A, HIGH);
    digitalWrite(_pin3B, LOW);
    digitalWrite(_pin4A, LOW);
    digitalWrite(_pin4B, HIGH);
    _state = RIGHT;
    return true;
}

bool BOT::_left() {
    digitalWrite(_pin1A, LOW);
    digitalWrite(_pin1B, HIGH);
    digitalWrite(_pin2A, HIGH);
    digitalWrite(_pin2B, LOW);
    digitalWrite(_pin3A, LOW);
    digitalWrite(_pin3B, HIGH);
    digitalWrite(_pin4A, HIGH);
    digitalWrite(_pin4B, LOW);
    _state = LEFT;
    return true;
}

bool BOT::_freeze() {
    digitalWrite(_pin1A, HIGH);
    digitalWrite(_pin1B, HIGH);
    digitalWrite(_pin2A, HIGH);
    digitalWrite(_pin2B, HIGH);
    digitalWrite(_pin3A, HIGH);
    digitalWrite(_pin3B, HIGH);
    digitalWrite(_pin4A, HIGH);
    digitalWrite(_pin4B, HIGH);
    _state = FREEZE;
    return true;
}

int BOT::_getState() {
    return _state;
}
