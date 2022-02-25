#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int number = 0;
    int number2 = 100;
    int *p = &number;

    cout << p << endl;
    cout << *p << endl;

    p = &number2;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}