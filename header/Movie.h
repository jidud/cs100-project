#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <vector>
#include "../header/Title.h"
#include "../header/Director.h"
#include "../header/Year.h"
#include "../header/Rating.h"
#include "../header/Genre.h"

using namespace std;

class Genre;
class Director;
class Title;
class Rating;
class Year;

class Movie {
    public:
        Title* movieTitle;
        Genre* movieGenres;
        Director* movieDirector;
        Year* movieYear;
        Rating* movieRating;

        Movie(string title, vector<string> genres, string directorName, int releaseYear, double rating);
};



#endif