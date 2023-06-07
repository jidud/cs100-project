#include "../header/Tag.h"

void Tag::addTagGener(const string& newTagGener) {
	tagGener.push_back(newTagGener);

	cout << tagGener.at(0);
}