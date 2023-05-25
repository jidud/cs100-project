#include "Genre.h"

void Genre::setGenre(int name) {
	genreName = name;
}

int Genre::getGenre() {
	return genreName;
}

void Genre::sortByGenre(vector<Movie*>* movieList) {
	int i = 0;
	int j = 0;
	int indexSmallest = 0;

	for (i = 0; i < movieList->size() - 1; ++i) {
		// Find index of smallest remaining element
		indexSmallest = 1;
		for (j = i + 1; j < movieList->size(); ++j) {
			if (movieList->at(j)->getGenre() < movieList->at(indexSmallest)->getGenre()) {
				indexSmallest = j;
			}
		}
		swap(movieList->at(i), movieList->at(indexSmallest));
	}
}