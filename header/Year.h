#ifndef YEAR_H
#define YEAR_H

#include "../header/Movie.h"

using namespace std;

class Movie;

class Year {

private:
	int releaseYear;

public:
	Year();
	Year(int year);
	void setReleaseYear(int _releaseYear);
	int getReleaseYear();
};
#endif