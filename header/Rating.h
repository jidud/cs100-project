#ifndef Rating_H
#define Rating_H

#include <vector>
#include "../header/Movie.h"

using namespace std;

class Movie;

class Rating {

private:
	int rating;

public:
	void setRating(double _rating);
	double getRating();
	void sortByRating(vector<Movie*>*);
};
#endif