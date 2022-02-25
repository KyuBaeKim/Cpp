#include <iostream>
#include <string>
using namespace std;
class Pizza
{
public:
    int size;
    Pizza(int s) : size(s) {}
};

int main(int argc, char const *argv[])
{

    Pizza p(10);
    Pizza *ptr = &p;
    cout << p.size << endl;
    cout << ptr->size << endl;
    // p 주소를 저장하고 있는 ptr이 size에 접근하는법
    return 0;
}