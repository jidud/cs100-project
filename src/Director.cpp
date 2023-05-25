#include "Director.h"

void Director::setDirector(int name) {
	directorName = name;
}

int Director::getDirector() {
	return directorName;
}

void Director::sortByDirector(vector<Movie*>* movieList) {
	int i = 0;
	int j = 0;
	int indexSmallest = 0;

	for (i = 0; i < movieList->size() - 1; ++i) {
		// Find index of smallest remaining element
		indexSmallest = 1;
		for (j = i + 1; j < movieList->size(); ++j) {
			if (movieList->at(j)->getDirector() < movieList->at(indexSmallest)->getDirector()) {
				indexSmallest = j;
			}
		}
		swap(movieList->at(i), movieList->at(indexSmallest));
	}
}