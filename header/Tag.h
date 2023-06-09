#ifndef TAG_H
#define TAG_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tag {
	private:
		vector<string> tagGener;
		vector<string> tagDirector;
		vector<string> tagActor;
		bool isHighToLow;
		bool isNewToOld;

	public:
		Tag();
		void addTagGener(const string& newTagGener);
		void displayTagGener();
		void addTagDirector(const string& newTagDirector);
		void displayTagDirector();
		void addTagActor(const string& newTagActor);
		void displayTagActor();
		void changeSortingCriteria(const string& userOption);
		bool getTagRating();
		bool getTagDate();
		vector<string>* getTagGener();
		vector<string>* getTagDirector();
		vector<string>* getTagActor();
};
#endif