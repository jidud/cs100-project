#ifndef TAG_H
#define TAG_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tag {

private:
	vector<string> tagGener;

public:
	void addTagGener(const string& newTagGener);
	void displayTagGener();
	void addTagDirector(const string& newTagDirector);
	void displayTagDirector();
};
#endif