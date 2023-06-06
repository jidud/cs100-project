#include <iostream>
#include <string>

using namespace std;

void displayMainMenu();
void displayTagsSearch();

int main() {

	displayMainMenu();

	return 0;
}


void displayMainMenu() {
	string option = "";

	cout << "Movie Recommender" << endl;
	cout << endl;

	cout << "Options:" << endl;
	cout << "1. Get movie recommendations based on tags (such as genres)" << endl;
	cout << "2. Get movie recommendations based on a movie name" << endl;
	cout << "3. Quit program" << endl;
	cout << endl;

	cout << "Please enter a number to select an option:" << endl;

	cin >> option;

	if (option == "1") {
		displayTagsSearch();
	}
	else if (option == "2") {
		enterMovieName();
	}
	else if (option == "3") {
		return;
	}
	else {
		return;
	}
}

void displayTagsSearch() {
	string option = "";

	cout << "Current Movie Tags:" << endl;
	cout << endl;
	cout << "Genres and Subgenres: " << endl;
	cout << "Directors: " << endl;
	cout << "Actors: " << endl;
	cout << endl;

	cout << "Current Sorting Criteria:" << endl;
	cout << endl;
	cout << "Rating: " << endl;
	cout << "Release date: " << endl;
	cout << endl;

	cout << "Options:" << endl;
	cout << "1. Add a tag on genres or subgenres" << endl;
	cout << "2. Add a tag on directors" << endl;
	cout << "3. Add a tag on actors" << endl;
	cout << "4. Change the sorting Criteria" << endl;
	cout << "5. Get a movie recommendation list" << endl;
	cout << "6. Go back" << endl;
	cout << endl;

	cout << "Please enter a number to select an option:" << endl;

	cin >> option;

	if (option == "1") {
		displayTagsSearch();
	}
	else if (option == "2") {
		addTagGener();
	}
	else if (option == "3") {
		addTagDirector();
	}
	else if (option == "4") {
		displaySortingCriteria();
	}
	else if (option == "5") {
		displayRecommendationMovieList();
	}
	else if (option == "6") {
		return;
	}
	else {
		return;
	}
}