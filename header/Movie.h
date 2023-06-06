#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include "Title.h"
#include "Genre.h"
#include "Director.h"
#include "Year.h"
#include "Rating.h"

using namespace std;

class Movie {
    public:
        Title movieTitle;
        Genre movieGenres;
        Director movieDirector;
        Year movieYear;
        Rating movieRating;

        Movie(string title, vector<string> genres, string directorName, int releaseYear, double rating);
}

#endif