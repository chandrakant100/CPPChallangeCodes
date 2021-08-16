#ifndef _Mystring_
#define _Mystring_
#include <iostream>
#include <string>
using namespace std;

class Mystring
{
    private:
        char *str;
    public:
        Mystring(const char *s);
        Mystring(const Mystring &source);
        Mystring(Mystring &&source);
        ~Mystring();

        Mystring &operator=(const Mystring &rhs);
        Mystring &operator=(Mystring &&rhs);
        Mystring &operator-();
        bool operator==(const Mystring &rhs);
        bool operator!=(const Mystring &rhs);
        bool operator<(const Mystring &rhs);
        bool operator>(const Mystring &rhs);
        Mystring operator+(const Mystring &rhs);
        Mystring &operator+=(const Mystring &rhs);
        string operator*(const int num);
        Mystring &operator*=(const int num);

        void display(){cout<<"The string is: "<<str<<endl;}
};

#endif