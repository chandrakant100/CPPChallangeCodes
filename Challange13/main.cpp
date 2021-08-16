#include <iostream>
#include <string>
#include "Movies.h"

using namespace std;
void check_movies(bool);
void check_watched(bool);

int main()
{
    Movies my_movies;
    char ch;
    int num;
    string mov_name,mov_rating;
    int mov_watched;

    do{
        cout<<"=======Welcome to Movie-Galaxy==========="<<endl;
        cout<<"Please select below options to continues:"<<endl;
        cout<<"1: Add movie\n2: Increment watch count\n3: 3: Display all movies"<<endl<<"========================================"<<endl;
        cin >> num;
        switch(num){
            case 1:
                cout<<"Enter the movie mov_name: ";
                cin>>ws;
                getline(cin,mov_name);
                cout<<"\nEnter the mov_rating(G,PG,PG-13,R): ";
                cin>>ws;
                getline(cin,mov_rating);
                cout<<"\nEnter the mov_watched count: ";
                cin>>mov_watched;
                check_movies(my_movies.add_movie(mov_name,mov_rating,mov_watched));
                break;
            case 2:
                cout<<"Enter movie mov_name: ";
                cin>>mov_name;
                check_watched(my_movies.increment_watched(mov_name));
                break;
            case 3:
                my_movies.display();
                break;
            default:
                cout<<"Invalid Input!"<<endl;
                return 1;
        }
        cout<<"\nWant to continue?(y/n): ";
        cin>>ws;
        cin>>ch;
    }while(ch == 'y' || ch == 'Y');
return 0;
}
void check_movies(bool val)
{
    if (val)
        cout<<"Successfully added!"<<endl;
    else
        cout<<"unsuccessful! Movie already exist!"<<endl;
}
void check_watched(bool val)
{
    if (val)
        cout<<"Successfully incrementes!"<<endl;
    else
        cout<<"unsuccessful! Movie don't exist!"<<endl;
}
