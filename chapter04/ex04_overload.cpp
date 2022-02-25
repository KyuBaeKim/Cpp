#include "PrintData.h"


int main(int argc, char const *argv[])
{
        PrintData prn;

        prn.print(1);
        prn.print(3.14);
        prn.print("C++ is cool.");
        prn.print();
   
   return 0;
}