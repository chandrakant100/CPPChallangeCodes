#include <iostream>
#include "Movies.h"
 using namespace std;

 Movies::Movies(){

 }
 Movies::~Movies(){

 }
 bool Movies::add_movie(string name,string rating,int watched)
 {
     for (const Movie &movies:movies)
     {
         if (movies.get_name() == name)
            return false;
     }
     Movie temp {name,rating,watched};
     movies.push_back(temp);
    return true;
 }
 bool Movies::increment_watched(string name)
 {
     for (Movie &movie:movies)
     {
         if (movie.get_name() == name)
         {
             int temp = movie.get_watched();
             movie.set_watched(temp+1);
             return true;
         }
     }
     return false;
 }
 void Movies::display() const
 {
    if (movies.size() == 0)
    {
        cout<<"No movies available!!";

    }
    else{
        for (Movie movies:movies)
        {
            movies.display();
        }
    }    
 }