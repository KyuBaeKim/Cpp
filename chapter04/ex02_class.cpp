#include <iostream>
#include <string>
using namespace std;
#include "Circle.h"
#include "Circle.h"
//#include <Circle.h> <> 라이브러리를 찾아라.
int main(int argc, char const *argv[])
{
   Circle pizza1, pizza2;

   pizza1.radius = 100;
   pizza1.color = "yellow";
   cout << "area1 " << pizza1.calcArea() << endl;

   pizza2.radius = 200;
   pizza2.color = "white";
   cout << "area2 " << pizza2.calcArea() << endl;

   return 0;
}