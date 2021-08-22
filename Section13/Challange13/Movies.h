#ifndef _Movies_
#define _Movies_

#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"
using namespace std;

class Movies
{
    private:
        vector<Movie> movies;
    public:
        Movies();
        ~Movies();
        bool add_movie(string,string,int);
        bool increment_watched(string);
        void display()const;
};
#endif