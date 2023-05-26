#include "Year.h"

void Year::setReleaseYear(int _releaseYear) {
	releaseYear = _releaseYear;
}

int Year::getReleaseYear() {
	return releaseYear;
}

void Year::sortByReleaseYear(vector<Movie*>* movieList) {
	int i = 0;
	int j = 0;
	int indexSmallest = 0;

	for (i = 0; i < movieList->size() - 1; ++i) {
		// Find index of smallest remaining element
		indexSmallest = 1;
		for (j = i + 1; j < movieList->size(); ++j) {
			if (movieList->at(j)->getReleaseYear() < movieList->at(indexSmallest)->getReleaseYear()) {
				indexSmallest = j;
			}
		}
		// Swap
		swap(movieList->at(i), movieList->at(indexSmallest));
	}
}