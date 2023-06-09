#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "../header/Display.h"
#include "../header/Genre.h"
#include "../header/Director.h"
#include "../header/Rating.h"
#include "../header/Year.h"
#include "../header/Title.h"
#include "../header/MovieList.h"
#include "../header/Movie.h"
#include "../header/Tag.h"
#include "../header/MovieDataLoad.h"

using namespace std;

void enterMovieName(string& userMovieName);
void displayRecommendationMovieList(MovieDataLoad& data1, Tag& tag1, vector<Movie*>& movieList);

int main() {
	vector<string> allGeners = {};
	vector<string> allDirectors = {};
	vector<string> allActors = {};
	vector<Movie*> movieList;
	Display menu1;
	string userOption = "";
	Tag tag1;
	string userMovieName = "";
	string ans = "1";

	//g++ main.cpp Display.cpp Tag.cpp Director.cpp Genre.cpp Movie.cpp MovieList.cpp Rating.cpp Title.cpp Year.cpp
	//

	//MovieList list1;
	//list1.parseData("movieData.csv");
	//list1.printFive();


	//
	MovieDataLoad data1;
	//data1.loadMovieData("test.txt");
	//data1.loadMovieData("movieData.csv");
	data1.loadMovieData("movieData2.csv");

	for (unsigned int i = 0; i < data1.getMovieData()->size(); ++i) {
		string currDirector = data1.getMovieData()->at(i)->movieDirector->getDirector();
		if (find(allDirectors.begin(), allDirectors.end(), currDirector) == allDirectors.end()) {
			allDirectors.push_back(currDirector);
		}

		vector<string>* currGenreList = data1.getMovieData()->at(i)->movieGenres->getGenres();
		for (unsigned int j = 0; j < currGenreList->size(); ++j) {
			string currGenre = currGenreList->at(j);
			if (find(allGeners.begin(), allGeners.end(), currGenre) == allGeners.end()) {
				allGeners.push_back(currGenre);
			}
		}
	}

	/*
	cout << "Directors" << endl;
	cout << endl;

	for (unsigned int i = 0; i < allDirectors.size(); ++i) {
		cout << (i + 1) << ". " << allDirectors.at(i) << endl;
	}
	cout << endl;
	*/

	menu1.displayMainMenu();
	
	getline(cin, userOption);

	if (userOption ==  "1") {
		while (ans != "6") {
			menu1.displayTagsSearch(&tag1);

			getline(cin, userOption);

			if (userOption == "1") {
				menu1.displayAllGeners(allGeners);

				getline(cin, userOption);
				string newTagGener = allGeners.at(stoi(userOption) - 1);

				tag1.addTagGener(newTagGener);
			}
			else if (userOption == "2") {
				menu1.displayAllDirectors(allDirectors);

				getline(cin, userOption);
				string newTagDirector = allDirectors.at(stoi(userOption) - 1);

				tag1.addTagDirector(newTagDirector);
			}
			else if (userOption == "3") {
				menu1.displayAllActor(allActors);

				getline(cin, userOption);
				string newTagActor = allActors.at(stoi(userOption) - 1);

				tag1.addTagActor(newTagActor);
			}
			else if (userOption == "4") {
				menu1.displaySortingCriteria();
				getline(cin, userOption);
				
				tag1.changeSortingCriteria(userOption);
			}
			else if (userOption == "5") {
				displayRecommendationMovieList(data1, tag1, movieList);
				return 0;
			}
			else if (userOption == "6") {
				return 0;
			}
			else {
				return 0;
			}
		}
	}
	else if (userOption == "2") {
		enterMovieName(userMovieName);

		for (unsigned int i = 0; i < data1.getMovieData()->size(); ++i) {
			if (userMovieName == data1.getMovieData()->at(i)->movieTitle->getTitle()) {
				string userMovieDirector = data1.getMovieData()->at(i)->movieDirector->getDirector();
				tag1.addTagDirector(userMovieDirector);

				vector<string>* userMovieGenreList = data1.getMovieData()->at(i)->movieGenres->getGenres();
				for (unsigned int j = 0; j < userMovieGenreList->size(); ++j) {
					tag1.addTagGener(userMovieGenreList->at(j));
				}
			}
		}

		displayRecommendationMovieList(data1, tag1, movieList);
		return 0;
	}
	else if (userOption == "3") {
		return 0;
	}
	else {
		return 0;
	}

	return 0;
}

void displayRecommendationMovieList(MovieDataLoad& data1, Tag& tag1, vector<Movie*>& movieList) {
	for (unsigned int i = 0; i < tag1.getTagDirector()->size(); ++i) {
		for (unsigned int j = 0; j < data1.getMovieData()->size(); ++j) {
			if (tag1.getTagDirector()->at(i) == data1.getMovieData()->at(j)->movieDirector->getDirector()) {
				Movie* movieMacth = data1.getMovieData()->at(j);
				if (find(movieList.begin(), movieList.end(), movieMacth) == movieList.end()) {
					movieList.push_back(movieMacth);
				}
			}
		}
	}
	
	for (unsigned int i = 0; i < tag1.getTagGener()->size(); ++i) {
		for (unsigned int j = 0; j < data1.getMovieData()->size(); ++j) {
			vector<string>* currMovieGenre = data1.getMovieData()->at(j)->movieGenres->getGenres();
			for (unsigned int k = 0; k < currMovieGenre->size(); ++k) {
				if (tag1.getTagGener()->at(i) == currMovieGenre->at(k)) {
					Movie* movieMacth = data1.getMovieData()->at(j);
					if (find(movieList.begin(), movieList.end(), movieMacth) == movieList.end()) {
						movieList.push_back(movieMacth);
					}
				}
			}
		}
	}
	
	if (tag1.getTagDate() == true) {
		int i = 0;
		int j = 0;
		int indexLargest = 0;

		for (i = 0; i < movieList.size() - 1; ++i) {
			// Find index of smallest remaining element
			indexLargest = i;
			for (j = i + 1; j < movieList.size(); ++j) {
				if (movieList.at(j)->movieYear->getReleaseYear() > movieList.at(indexLargest)->movieYear->getReleaseYear()) {
					indexLargest = j;
				}
			}
			// Swap
			swap(movieList.at(i), movieList.at(indexLargest));
		}
	}
	else if (tag1.getTagDate() == false) {
		int i = 0;
		int j = 0;
		int indexSmallest = 0;

		for (i = 0; i < movieList.size() - 1; ++i) {
			// Find index of smallest remaining element
			indexSmallest = i;
			for (j = i + 1; j < movieList.size(); ++j) {
				if (movieList.at(j)->movieYear->getReleaseYear() < movieList.at(indexSmallest)->movieYear->getReleaseYear()) {
					indexSmallest = j;
				}
			}
			// Swap
			swap(movieList.at(i), movieList.at(indexSmallest));
		}
	}
	
	if (tag1.getTagRating() == true) {
		int i = 0;
		int j = 0;
		int indexLargest = 0;

		for (i = 0; i < movieList.size() - 1; ++i) {
			// Find index of smallest remaining element
			indexLargest = i;
			for (j = i + 1; j < movieList.size(); ++j) {
				if (movieList.at(j)->movieRating->getRating() > movieList.at(indexLargest)->movieRating->getRating()) {
					indexLargest = j;
				}
			}
			// Swap
			swap(movieList.at(i), movieList.at(indexLargest));
		}
	}
	else if (tag1.getTagRating() == false) {
		int i = 0;
		int j = 0;
		int indexSmallest = 0;

		for (i = 0; i < movieList.size() - 1; ++i) {
			// Find index of smallest remaining element
			indexSmallest = i;
			for (j = i + 1; j < movieList.size(); ++j) {
				if (movieList.at(j)->movieRating->getRating() < movieList.at(indexSmallest)->movieRating->getRating()) {
					indexSmallest = j;
				}
			}
			// Swap
			swap(movieList.at(i), movieList.at(indexSmallest));
		}
	}
	
	for (unsigned int i = 0; i < movieList.size(); ++i) {
		cout << movieList.at(i)->movieTitle->getTitle() << ", ";
		cout << "\"";
		for (unsigned int j = 0; j < movieList.at(i)->movieGenres->getGenres()->size(); ++j) {
			cout << movieList.at(i)->movieGenres->getGenres()->at(j) << ",";
		}
		cout << "\", ";
		cout << movieList.at(i)->movieDirector->getDirector() << ", ";
		cout << movieList.at(i)->movieYear->getReleaseYear() << ", ";
		cout << movieList.at(i)->movieRating->getRating() << endl;
	}
}

void enterMovieName(string& userMovieName) {
	cout << "Please enter a movie name:" << endl;
	getline(cin, userMovieName);
	//cout << userMovieName;
}