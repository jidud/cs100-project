#include "../header/Title.h"
#include "../header/Movie.h"

Title::Title() {
    title = "";
}
Title::Title(string movieTitle) {
    title = movieTitle;
}

void Title::setTitle(string movieTitle) {
    title = movieTitle;
}

string Title::getTitle() {
    return title;
}
