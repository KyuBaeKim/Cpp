
#pragma once

#include <string>
using namespace std;

class Car{
public:
    int speed;
    int gear;
    string color;

    void speedUp() {
        speed += 10;
    
    }

    void speedDown(){
        speed -= 10;
    }

};