#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i : arr)
    {
        cout << i << " "; // 1 2 3 4 5
    }
    cout << endl;

    for (int &i : arr)
    {
        i *= 2; // i = i * 2
    }
    cout << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}