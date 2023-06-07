#ifndef Rating_H
#define Rating_H

#include <vector>

using namespace std;

class Rating {

private:
	int rating;

public:
	void setRating(double _rating);
	double getRating();
	void sortByRating(vector<Movie*>*);
};
#endif