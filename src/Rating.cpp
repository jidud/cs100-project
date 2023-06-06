#include "../header/Rating.h"
#include "../header/Movie.h"

void Rating::setRating(double _rating) {
	rating = _rating;
}

double Rating::getRating() {
	return rating;
}

void Rating::sortByRating(vector<Movie*>* movieList) {
	int i = 0;
	int j = 0;
	int indexSmallest = 0;

	for (i = 0; i < movieList->size() - 1; ++i) {
		// Find index of smallest remaining element
		indexSmallest = 1;
		for (j = i + 1; j < movieList->size(); ++j) {
			if (movieList->at(j).getRating() < movieList->at(indexSmallest).getRating()) {
				indexSmallest = j;
			}
		}
		// Swap
		swap(movieList->at(i), movieList->at(indexSmallest));
	}
}