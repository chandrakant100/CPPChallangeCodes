#ifndef _Iprint_
#define _Iprint_

#include <iostream>
using namespace std;

class I_Printable 
{
    friend ostream &operator<<(ostream &os,const I_Printable &obj);
    public:
        virtual void print(ostream &os) const = 0;
        virtual ~I_Printable() = default;
};

#endif