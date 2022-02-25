#include <iostream>
#include <string>
#include "Time.h"

using namespace std;

int main()
{
    Time a;
    Time b(10, 25);
    Time c(10);

    a.print();
    b.print();
    c.print();

    return 0;
}