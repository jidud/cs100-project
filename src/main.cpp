#include <iostream>
#include <string>
#include <vector>

#include "../header/Display.h"
#include "../header/Tag.h"

using namespace std;

void enterMovieName(string& userMovieName);

int main() {
	vector<string> allGeners = { "g1", "g2", "g3"};
	vector<string> allDirectors = { "d1", "d2", "d3" };
	vector<string> allActors = { "a1", "a2", "a3" };
	Display menu1;
	string userOption = "";
	Tag tag1;
	string userMovieName = "";
	string ans = "1";

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
				//addTagActor();
			}
			else if (userOption == "4") {
				//displaySortingCriteria();
			}
			else if (userOption == "5") {
				//displayRecommendationMovieList();
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
	}
	else if (userOption == "3") {
		return 0;
	}
	else {
		return 0;
	}

	return 0;
}

void enterMovieName(string& userMovieName) {
	cout << "Please enter a movie name:" << endl;
	getline(cin, userMovieName);
	//cout << userMovieName;
}