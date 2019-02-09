#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED

/*


             ___________
         1 O|           |O 2
            |           |
         3 O|___________|O 4

            This code only supports up to 8 motors. A pair of them connected to a motor driver.

*/

class BOT{
 private:
     int _pin1A, _pin1B, _pin2A, _pin2B, _pin3A, _pin3B, _pin4A, _pin4B;
 public:
     enum state {FORWARD, BACKWARD, LEFT, RIGHT, FREEZE} _state;
     BOT(int, int, int, int, int, int, int, int); // 4 motors
     bool _forward();
     bool _backward();
     bool _left();
     bool _right();
     bool _freeze();
     int _getState();
};



#endif // VEHICLE_H_INCLUDED
