#ifndef YEAR_H
#define YEAR_H

#include <vector>

using namespace std;

class Year {

private:
	int releaseYear;

public:
	void setReleaseYear(int _releaseYear);
	int getReleaseYear();
	void sortByReleaseYear();
};
#endif