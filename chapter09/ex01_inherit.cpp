#include <iostream>
#include <string>
using namespace std;

class Shape
{
    int x;
    int y;

public:
    Shape()
    {
        cout << "Shape() 생성자" << endl;
    }

    Shape(int xloc, int yloc) : x(xloc), y(yloc)
    {
        cout << "Shape(xloc, yloc 생성자" << endl;
    }

    ~Shape()
    {
        cout << "~Shape() 소멸자" << endl;
    }
};

class Rectangle : public Shape
{
    int width, height;

public:
    Rectangle() // Rectangle() : Shape 자동으로 호출
    {
        cout << "Rectangle() 생성자" << endl;
    }

    Rectangle(int x, int y, int w, int h) : Shape(x, y), width(w), height(h)
    {
        cout << "Rectangle(x,y,w,h) 생성자" << endl;
    }

    ~Rectangle()
    {
        cout << "Rectangle() 소멸자" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Rectangle r1;
    cout << endl;
    Rectangle r2(0, 0, 100, 100);
    cout << endl;

    return 0;
}