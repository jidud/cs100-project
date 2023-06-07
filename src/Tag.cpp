#include "../header/Tag.h"

void Tag::addTagGener(const string& newTagGener) {
	tagGener.push_back(newTagGener);

	cout << tagGener.at(0);
}

void Tag::displayTagGener() {
	for (unsigned int i = 0; i < tagGener.size(); ++i) {
		cout << (i + 1) << ". " << tagGener.at(i) << endl;
	}
}

void Tag::addTagDirector(const string& newTagDirector) {
	tagDirector.push_back(newTagDirector);
}

void Tag::displayTagDirector() {
	for (unsigned int i = 0; i < tagDirector.size(); ++i) {
		cout << (i + 1) << ". " << tagDirector.at(i) << endl;
	}
}

void Tag::addTagActor(const string& newTagActor) {
	tagActor.push_back(newTagActor);
}