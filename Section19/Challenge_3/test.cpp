// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s1 = "mynameisckj";
    string s2 = "hola";
    if (s1.find(s2) != std::string::npos) {
    std::cout << "found!" << '\n';}
    else
        cout<<"not found!"<<endl;
    cout<<string::npos;
    cout << endl;
    return 0;
}

