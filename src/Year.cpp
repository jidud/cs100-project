#include "../header/Year.h"
#include "../header/Movie.h"

Year::Year() {
	releaseYear = 0;
}

Year::Year(int year) {
	releaseYear = year;
}

void Year::setReleaseYear(int _releaseYear) {
	releaseYear = _releaseYear;
}

int Year::getReleaseYear() {
	return releaseYear;
}
