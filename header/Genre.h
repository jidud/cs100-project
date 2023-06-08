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
        void setGenres(vector<string> names);
        vector<string> getGenres();
        void sortByGenre(vector<Movie*>*);
};

#endif
