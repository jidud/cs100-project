#include "../header/Movie.h"
#include "../header/Genre.h"
#include "../header/Director.h"
#include "../header/Rating.h"
#include "../header/Year.h"
#include "../header/Title.h"

Movie::Movie(string title, vector<string>* genres, string directorName, int releaseYear, double rating) {
    movieTitle = new Title(title);
    movieGenres = new Genre(genres);
    movieDirector = new Director(directorName);
    movieYear = new Year(releaseYear);
    movieRating = new Rating(rating);
}