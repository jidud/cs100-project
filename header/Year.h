#ifndef YEAR_H
#define YEAR_H

#include <vector>
#include "../header/Movie.h"

using namespace std;

class Movie;

class Year {

private:
	int releaseYear;

public:
	void setReleaseYear(int _releaseYear);
	int getReleaseYear();
	void sortByReleaseYear(vector<Movie*>*);
};
#endif