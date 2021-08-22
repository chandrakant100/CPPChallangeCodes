// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    
    ifstream file_in{"romeoandjuliet.txt"};
    ofstream file_out{"romeoandjuliet_output.txt"};
    string temp;

    if (!file_in.is_open())
    {
        cerr<<"Error in opening!!";
        exit(1);
    }
    if(!file_out)
    {
        cerr<<"Error in writing!!";
        exit(1);
    }
    int i{0};
    while(getline(file_in,temp))
    {
        if (temp == "")
        {
            file_out<<endl;
        }
        else
        {
            ++i;
            file_out<< std::setw(7) << std::left <<i
                     <<": "<< temp << std::endl;
        }
    }
    cout<<"File copying in number format is Successful!"<<endl;
    file_in.close();
    file_out.close();

    return 0;
}

