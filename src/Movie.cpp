#include "Movie.h"

Movie::Movie(string title, vector<string> genres, string directorName, int releaseYear, double rating) {
    movieTitle.setTitle(title);
    movieGenres.setGenres(genres);
    movieDirector.setDirector(directorName);
    movieYear.setReleaseYear(releaseYear);
    movieRating.setRating(rating);
}