#ifndef MOVIEDATALOAD_H
#define MOVIEDATALOAD_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "../header/Movie.h"

using namespace std;

class MovieDataLoad {
    private:
        vector<Movie*> movieData;
    public:
        void loadMovieData(const string& fileName);
        vector<Movie*>* getMovieData();
};

#endif