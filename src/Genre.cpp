#include "Genre.h"

void Genre::setGenre(vector<string> names) {
	genreNames = names;
}

int Genre::getGenres() {
	return genreNames;
}

//find same genres
void Genre::sortByGenre(vector<Movie*>* movieList) {
	int i = 0;
	int j = 0;
}