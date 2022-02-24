#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    ch = 'a';
    //  ch = '한'; 한글은 3바이트라 출력이 안됨 
    // 작은 따옴표는 1바이트 한 글자만 출력이 된다.
    cout << ch;
    return 0;

}