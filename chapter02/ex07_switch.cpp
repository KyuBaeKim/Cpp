#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cout << "숫자를 입력하세요:";
    cin >> number;
    switch (number)
    {
    case 0:
        cout << "zero\n";
        break;
    case 1:
        cout << "one\n";
        break;
    case 2:
        cout << "two\n";
        break;
    case 3:
        cout << "three\n";
        break;
    }
    return 0;
}
