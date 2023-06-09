#ifndef GENRE_H
#define GENRE_H
#include "../header/Movie.h"
#include <vector>
#include <string>
using namespace std;

class Movie;

class Genre {
    private:
        vector<string> genreNames;
    public:
        Genre();
        Genre(vector<string> names);
        void setGenres(vector<string> names);
        vector<string> getGenres();
};

#endif
