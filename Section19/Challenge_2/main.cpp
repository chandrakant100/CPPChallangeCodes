// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;
int counter(string,string);
void print_header();
void display(string,int);
void print_footer();

int main() {
    string name,responses;

    ifstream file{"responses.txt",ios::in};
    double count = 0;
    int correct,total_students = 0;
    if (!file)
    {
        cerr<<"Error in opening the file!!"<<endl;
        return 1;
    }
    string correct_answer_key;
    file >> correct_answer_key;
    
    print_header();
    while(file >> name >> responses)
    {
        ++total_students;
        correct = counter(correct_answer_key,responses);
        count += correct;
        display(name,correct);
    }
    double avg;
    if (total_students != 0)
        avg = static_cast<double> (count / total_students);
    print_footer();
    cout<<setw(15)<<left<<"Average"
        <<setw(10)<<right<<avg<<endl;
    file.close();
    return 0;
}
void print_header()
{
    cout<<"Student"<<setw(20)<<"Score"<<endl;
    cout<<setw(30)
        <<setfill('-')
        <<""<<endl;
    cout<<setfill(' ');
}
int counter(string st,string ans)
{
    int count = 0;
    for (int i{0}; i < ans.length(); i ++)
    {
        if (st[i] == ans[i])
            count += 1;
    }
    return count;
}
void display(string name,int correct)
{
    cout<<setw(15)<<left<<name
        <<setw(10)<<right<<correct<<endl;
}
void print_footer()
{
    cout<<setw(30)
        <<setfill('-')
        <<""<<endl;
    cout<<setfill(' ');
}