#pragma once // 클래스를 한번만 include 할 수 있도록 함

#include <string>
using namespace std;

class Car
{
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