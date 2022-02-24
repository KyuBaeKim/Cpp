#include <iostream>
#include <string>
using namespace std;

//다른 파일 불러오는법
#include "Circle.cpp" // 현재 디렉토리에서 먼저 찾아라..
// #include <Circle.cpp> // 라이브러리 디렉토리만 찾아라....

int main(int argc, char const *argv[])
{
    Circle obj;
    obj.radius = 100;
    obj.color = "blue";
    cout << "원의 면적" << obj.calcArea() << endl;
    return 0;
}