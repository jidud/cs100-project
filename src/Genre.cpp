#include "Genre.h"

void Genre::setGenres(vector<string> names) {
	genreNames = names;
}

vector<string> Genre::getGenres() {
	return genreNames;
}

//find same genres
void Genre::sortByGenre(vector<Movie*>* movieList) {
	int i = 0;
	int j = 0;
}