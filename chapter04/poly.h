#pragma once // 클래스를 한번만 include 할 수 있도록 함

#include <string>
using namespace std;


// 데이터 은닉
// private: 비공개
// protected: 자식에게만 공개
// public: 공개

// 멤버 변수 <- 비공개
// 멤버 함수 <- 공개
class Shape
{
protected:
    int x, y;

public:
    void draw() {}
    void move() {}
};

class Reactangle : public Shape
{
protected:
    int width;
    int height;

public:
    int calcAres()
    {
        return width * height;
    }
};