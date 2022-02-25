#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Circle objArray[10];
    // 배열 cout<< objArray << endl; 을 해보면 주소값이 16진수로 출력된다 <- 상수
    // 상수는 변경이 안된다. 그러므로 주소값은 변경이 안된다.

    for (Circle& c : objArray)
    {
        c.x = rand() % 500;      // 0~499 random한 수
        c.y = rand() % 300;      // 0~299 random한 수
        c.radius = rand() % 100; // 0~99 random한 수
    }

    for (Circle c : objArray)
    {
        c.print();
    }
    return 0;
}