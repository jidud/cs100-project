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
	cout << "Actors: " << endl;
	cout << endl;

	cout << "Current Sorting Criteria:" << endl;
	cout << endl;
	cout << "Rating: " << endl;
	cout << "Release date: " << endl;
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