#pragma once // 클래스를 한번만 include 할 수 있도록 함

#include <iostream>
using namespace std;
int hour = 14;
int minute = 14;
void print()
{
    cout << hour << ":" << minute << endl;
}

class Time
{
protected:
    int hour;
    int minute;

public: //생성자
    // Time()
    // {
    //     hour = 0;
    //     minute = 0;
    // }

    // 매개변수는 지역변수이다.
    Time(int hour = 0, int minute = 0) : hour(hour), minute(minute) // 멤버 초기화 리스트 <- 이것을 사용하면 this-> 안해도됨
    {
        // 변수의 해석 순서 : 지역변수 -> 멤버 변수 -> 전역 변수
        // this : 현재 인스턴스 (self(참조)랑 비슷함 다른점은 this는 포인터이다.)
        // 포인터 : ->
        // this->hour = hour;
        // this->minute = minute;

        // cout << "globar hour : " << ::hour << endl;
        // :: 전역변수로 해당
        // 멤버 함수 호출
        print();

        // 전역 함수 호출
        ::print();

        // 함수도 변수처럼 해석 순서가 같다
    }

    // 소멸자
    ~Time()
    {
        cout << "destructor call" << endl;
    }

    void print()
    {
        cout << hour << ":" << minute << endl;
    }
};