#include <iostream>
#include <string>
#include <string.h>
#include "Mystring.h"

using namespace std;

Mystring::Mystring(const char *s)
:str{nullptr}
{
    str = new char[strlen(s) + 1];
    strcpy(str,s);
}
Mystring::Mystring(const Mystring &source)
:Mystring(source.str)
{

}
Mystring::Mystring(Mystring &&source)
:str(source.str)
{
    source.str = nullptr;
}
Mystring::~Mystring()
{

}
Mystring &Mystring::operator=(const Mystring &rhs)
{
    if (this->str == rhs.str)
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str,rhs.str);

    return *this;
}
Mystring &Mystring::operator=(Mystring &&rhs)
{
    if (this->str == rhs.str)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    
    return *this;
}
Mystring &Mystring::operator-()
{
    char *buff = new char[strlen(this->str) + 1];

    for (unsigned i = 0; i < strlen(str);i++)
    {
        buff[i] = tolower(str[i]);
    }
    str = buff;
    return *this;
}
bool Mystring::operator==(const Mystring &rhs)
{
    if (strcmp(str,rhs.str) == 0)
        return true;
    
    return false;
}
bool Mystring::operator!=(const Mystring &rhs)
{
    if (strcmp(str,rhs.str) == 0)
        return false;
    
    return true;
}
bool Mystring::operator<(const Mystring &rhs)
{
    int temp;
    if (strlen(str) < strlen(rhs.str))
        temp = strlen(str);
    else
        temp = strlen(rhs.str);

    for (int i = 0; i < temp;i++)
    {
        if (str[i] == rhs.str[i])
            continue;
        else if (str[i] < rhs.str[i])
            return true;
    }
    return false;
}
bool Mystring::operator>(const Mystring &rhs)
{
    int temp;
    if (strlen(str) < strlen(rhs.str))
        temp = strlen(str);
    else
        temp = strlen(rhs.str);

    for (int i = 0; i < temp;i++)
    {
        if (str[i] == rhs.str[i])
            continue;
        else if (str[i] < rhs.str[i])
            return false;
    }
    return true;
}
Mystring Mystring::operator+(const Mystring &rhs)
{
     char *buff = new char[strlen(str) + strlen(rhs.str) + 1];

     strcpy(buff,str);
     strcat(buff,rhs.str);

    Mystring temp = buff;
    delete [] buff;

     return temp;
}
Mystring &Mystring::operator+=(const Mystring &rhs)
{
     char *buff = new char[strlen(str) + strlen(rhs.str) + 1];

     strcpy(buff,str);
     strcat(buff,rhs.str);

    if (str != nullptr)
        str = nullptr;
    str = buff;
     return *this;
}
string Mystring::operator*(const int num)
{
    char *buff = new char[strlen(str) * num];
    strcpy(buff,str);
    for (int i{0}; i < num -1; i++)
    {
        strcat(buff,str);
    }
    return buff;
}
Mystring &Mystring::operator*=(const int num)
{
    char *buff = new char[strlen(str) * num];
    strcpy(buff,str);
    for (int i{0}; i < num - 1; i++)
    {
        strcat(buff,str);
    }
    str = buff;
    return *this;
}



