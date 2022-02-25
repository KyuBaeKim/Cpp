#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const char *pstr = "Hello world!";

    pstr++;
    cout << pstr << endl;
    cout << "argc: " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "arg: " << argv[i];
    }
    return 0;
}