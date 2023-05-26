#include "Title.h"

void Title::setTitle(string movieTitle) {
    movieTitle = title;
}

string Title::getTitle() {
    return title;
}

void Title::sortByTitle(ector<Movie*>* movieList) {
    sort(movieList->begin(), movieList->end());
}