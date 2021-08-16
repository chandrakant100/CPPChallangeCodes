#include <iostream>
#include <string>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring obj1{"Ck"};
    Mystring obj2{"hi"};
    Mystring obj3{obj1};

    obj1.display();
    obj2.display();
    obj3.display();
   
    obj2 = obj1 + obj3;
    obj2.display();


    return 0;
}