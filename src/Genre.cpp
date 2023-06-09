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


//find same genres
void Genre::sortByGenre(vector<Movie*>* movieList) {
	int i = 0;
	int j = 0;

}
