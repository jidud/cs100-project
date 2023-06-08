#include "../header/Display.h"

void Display::displayMainMenu() {
	cout << "Movie Recommender" << endl;
	cout << endl;

	cout << "Options:" << endl;
	cout << "1. Get movie recommendations based on tags (such as genres)" << endl;
	cout << "2. Get movie recommendations based on a movie name" << endl;
	cout << "3. Quit the program" << endl;
	cout << endl;

	cout << "Please enter a number to select an option:" << endl;
}

void Display::displayTagsSearch(Tag* tag1) {
	cout << "Current Movie Tags:" << endl;
	cout << endl;
	cout << "Geners and Subgeners: " << endl;
	tag1->displayTagGener();
	cout << "Directors: " << endl;
	tag1->displayTagDirector();
	cout << "Actors: " << endl;
	tag1->displayTagActor();
	cout << endl;

	cout << "Current Sorting Criteria:" << endl;
	cout << endl;
	cout << "Rating: " << endl;
	if (tag1->getTagRating() == true) {
		cout << "From high to low" << endl;
	}
	else {
		cout << "From low to high" << endl;
	}
	cout << "Release date: " << endl;
	if (tag1->getTagDate() == true) {
		cout << "From new to old" << endl;
	}
	else {
		cout << "From old to new" << endl;
	}
	cout << endl;

	cout << "Options:" << endl;
	cout << "1. Add a tag on geners or subgeners" << endl;
	cout << "2. Add a tag on directors" << endl;
	cout << "3. Add a tag on actors" << endl;
	cout << "4. Change the sorting Criteria" << endl;
	cout << "5. Get a movie recommendation list" << endl;
	cout << "6. Go back" << endl;
	cout << endl;

	cout << "Please enter a number to select an option:" << endl;
}

void Display::displayAllGeners(const vector<string>& allGeners) {
	cout << "Geners and Subgeners" << endl;
	cout << endl;

	for (unsigned int i = 0; i < allGeners.size(); ++i) {
		cout << (i + 1) << ". " << allGeners.at(i) << endl;
	}
	cout << endl;

	cout << "Please enter a number to select a gener:" << endl;
}

void Display::displayAllDirectors(const vector<string>& allDirectors) {
	cout << "Directors" << endl;
	cout << endl;

	for (unsigned int i = 0; i < allDirectors.size(); ++i) {
		cout << (i + 1) << ". " << allDirectors.at(i) << endl;
	}
	cout << endl;

	cout << "Please enter a number to select a director:" << endl;
}

void Display::displayAllActor(const vector<string>& allActors) {
	cout << "Actors" << endl;
	cout << endl;

	for (unsigned int i = 0; i < allActors.size(); ++i) {
		cout << (i + 1) << ". " << allActors.at(i) << endl;
	}
	cout << endl;

	cout << "Please enter a number to select a actor:" << endl;
}

void Display::displaySortingCriteria() {
	cout << "Sorting Criteria:" << endl;
	cout << endl;

	cout << "Current Sorting Criteria:" << endl;
	cout << endl;
	cout << "Rating: " << endl;
	cout << "Release date: " << endl;
	cout << endl;

	cout << "By rating:" << endl;
	cout << "1. From high to low: " << endl;
	cout << "2. From low to high: " << endl;
	cout << endl;

	cout << "By release date:" << endl;
	cout << "3. From new to old" << endl;
	cout << "4. From old to new" << endl;
	cout << endl;

	cout << "Please enter a number to select an option:" << endl;
}