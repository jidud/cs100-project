#include <iostream>
#include <string>
#include <vector>

#include "Display.h"

using namespace std;

int main() {
	vector<string> allGeners = { "g1", "g2", "g3"};
	Display menu1;
	string userOption = "";
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
				//addTagDirector();
			}
			else if (userOption == "3") {
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
		//enterMovieName(userMovieName);
	}
	else if (userOption == "3") {
		return 0;
	}
	else {
		return 0;
	}

	return 0;
}