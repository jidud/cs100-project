#include <iostream>
#include <string>
#include <vector>

#include "../header/Display.h"
#include "../header/Genre.h"
#include "../header/Director.h"
#include "../header/Rating.h"
#include "../header/Year.h"
#include "../header/Title.h"
#include "../header/MovieList.h"
#include "../header/Movie.h"



using namespace std;

int main() {
	Display menu1;
	string userOption = "";
	string inpTitle = "";
	string inpGenre = "";
	string inpDirector = "";
	int inpYear = 0;
	double inpRating = 0.0;
	string ans = "";

	//g++ main.cpp Display.cpp Director.cpp Genre.cpp Movie.cpp MovieList.cpp Rating.cpp Title.cpp Year.cpp
	//
	MovieList list1;
	list1.parseData("movieData.csv");
	//

	menu1.displayMainMenu();
	cout << endl;
	cout << "Enter a number (1-6): ";
	getline(cin, userOption);
	cout << endl;
	while (ans != "6") {
		if (userOption == "1") {
			cout << "Enter a keyword to filter: " << endl;
			getline(cin, inpTitle);
			list1.sortByTitle(inpTitle);
			cout << endl;
			cout << "-------------------------------------------------------------" << endl;
			list1.printFive();
			cout << "-------------------------------------------------------------" << endl;
			cout << endl;
			userOption = 6;
		}
		else if (userOption == "2") {
			cout << "Enter a genre to sort by: " << endl;
			getline(cin, inpGenre);
			list1.sortByGenre(inpGenre);
			cout << endl;
			cout << "-------------------------------------------------------------" << endl;
			list1.printFive();
			cout << "-------------------------------------------------------------" << endl;
			userOption = 6;
		}
		else if (userOption == "3") {
			cout << "Enter a director to filter by: " << endl;
			getline(cin, inpDirector);
			list1.sortByDirector(inpDirector);
			cout << endl;
			cout << "-------------------------------------------------------------" << endl;
			list1.printFive();
			cout << "-------------------------------------------------------------" << endl;
			userOption = 6;
		}
		else if (userOption == "4") {
			cout << "Enter a year to filer by: " << endl;
			cin >> inpYear;
			list1.sortByReleaseYear(inpYear);
			cout << endl;
			cout << "-------------------------------------------------------------" << endl;
			list1.printFive();
			cout << "-------------------------------------------------------------" << endl;
			userOption = 6;
		}
		else if (userOption == "5") {
			cout << "Enter a rating to filer by: " << endl;
			cin >> inpRating;
			list1.sortByRating(inpRating);
			cout << endl;
			cout << "-------------------------------------------------------------" << endl;
			list1.printFive();
			cout << "-------------------------------------------------------------" << endl;
			userOption = 6;
		}
		else if (userOption == "6") {
			return 0;
		}
		else {
			menu1.displayMainMenu();
			cout << endl;
			cout << "Enter a number (1-6): ";
			getline(cin, userOption);
			cout << endl;
		}
	}
}
