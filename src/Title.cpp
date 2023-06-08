#include "../header/Title.h"
#include "../header/Movie.h"

void Title::setTitle(string movieTitle) {
    title = movieTitle;
}

string Title::getTitle() {
    return title;
}

//sort by title
void Title::sortByTitle(vector<Movie*>* movieList) {
    int i = 0;
    int j = 0;
}