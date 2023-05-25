#include <iostream>
#include <string>

using namespace std;

void displayMainMenu();

int main() {
	displayMainMenu();
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