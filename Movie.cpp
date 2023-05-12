#include "Movie.h"

Movie::Movie(const string& _title, const string& _genre, const string& _director, double _rating, int _releaseYear)
			: title(_title), genre(_genre), director(_director), rating(_rating), releaseYear(_releaseYear) { }

string Movie::getTitle() {
	return title;
}

string Movie::getGenre() {
	return genre;
}

string Movie::getDirector() {
	return director;
}

double Movie::getRating() {
	return rating;
}

int Movie::getReleaseYear() {
	return releaseYear;
}

void Movie::setTitle(const string& _title) {
	title = _title;
}

void Movie::setGenre(const string& _genre) {
	genre = _genre;
}

void Movie::setDirector(const string& _director) {
	director = _director;
}

void Movie::setRating(double _rating) {
	rating = _rating;
}

void Movie::setReleaseYear(int _releaseYear) {
	releaseYear = _releaseYear;
}