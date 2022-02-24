#include <iostream>
#include <string>
using namespace std;
class Circle
{
public:
    int radius;   // 반지름
    string color; // tortkd

    double calcArea()
    {
        return 3.14 * radius * radius;
    }
};

int main(int argc, char const *argv[])
{
    Circle obj;
    obj.radius = 100;
    obj.color = "blue";
    cout << "원의 면적" << obj.calcArea() << endl;
    return 0;
}