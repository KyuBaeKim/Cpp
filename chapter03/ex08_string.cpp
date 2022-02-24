#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "When in Rome, do as thr Romans.";

    int size = s.size(); //문자열의 길이 출력
    int index = s.find("Rome");

    cout << size << endl;
    cout << index << endl;
    return 0;
}