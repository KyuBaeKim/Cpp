#pragma once // 클래스를 한번만 include 할 수 있도록 함

#include <string>
using namespace std;

// Circle 클래스의 원형(Prototype, signiture)
class Circle
{
public:
    int radius;   // 반지름
    string color; // 색상

    double calcArea()
    {
        return 3.14 * radius * radius;
    }
};
