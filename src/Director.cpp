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

