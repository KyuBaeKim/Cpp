#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    cout << "1부터 10까지 정수의 합= " << sum << endl;
    return 0;
}