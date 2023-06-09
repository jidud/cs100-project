#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include <string>
#include <vector>

#include "../header/Tag.h"

using namespace std;

class Display {
	private:

	public:
		void displayMainMenu();
		void displayTagsSearch(Tag* tag1);
		void displayAllGenres(const vector<string>& allGeners);
		void displayAllDirectors(const vector<string>& allDirectors);
		void displayAllActor(const vector<string>& allActors);
		void displaySortingCriteria();
};
#endif