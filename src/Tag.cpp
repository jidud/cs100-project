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