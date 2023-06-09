#include "../header/Director.h"
#include "../header/Movie.h"

Director::Director() {
	directorName = "";
}
Director::Director(string name) {
	directorName = name;
}

void Director::setDirector(string name) {
	directorName = name;
}

string Director::getDirector() {
	return directorName;
}

//dont know if we need this i added this in the movielist file of the MovieList-class-vector branch
void Director::sortByDirector(vector<Movie*>* movieList) {
	int i = 0;
	int j = 0;
}