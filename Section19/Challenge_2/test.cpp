#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ifstream file{"responses.txt"};
    string a,b,c,d,e;
    file >> a>>b>>c>>d>>e;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
    return 0;
}