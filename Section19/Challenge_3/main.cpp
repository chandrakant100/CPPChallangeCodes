// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>

using namespace std;
bool check_substring(string,string);
int main() {
    
    string input_data,temp;
    int total_words = 0;
    int count_words = 0;

    ifstream file{"romeoandjuliet.txt"};
    if (!file)
    {
        cerr<<"file can't be opened!!"<<endl;
    }
    cout<<"Enter the substring to search for: ";
    cin>>input_data;
    while(file >> temp)
    {
        ++ total_words;
        if(check_substring(input_data,temp))
        {
            count_words += 1;
        }
    }
    cout<<total_words<<" words were searched ....."<<endl;
    cout<<"The Substring "<<input_data<<" was found "<<count_words<<" times"<<endl;
    
    file.close();
    cout << endl;
    return 0;
}
bool check_substring(string input,string temp)
{
    int found = temp.find(input);
    if (found != string::npos)
        return true;
    
    return false;
}
