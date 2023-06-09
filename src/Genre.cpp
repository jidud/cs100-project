#include "../header/Genre.h"
#include "../header/Movie.h"

Genre::Genre() {
	genreNames = {};
}
Genre::Genre(vector<string> names) {
	genreNames = names;
}

void Genre::setGenres(vector<string> names) {
	genreNames = names;
}

vector<string> Genre::getGenres() {
	return genreNames;
}

