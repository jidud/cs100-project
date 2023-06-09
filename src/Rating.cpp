#include "../header/Rating.h"
#include "../header/Movie.h"

Rating::Rating() {
	rating = 0.0;
}
Rating::Rating(double _rating) {
	rating = _rating;
}

void Rating::setRating(double _rating) {
	rating = _rating;
}

double Rating::getRating() {
	return rating;
}
