#ifndef TITLE_H
#define TITLE_H
#include "../header/Movie.h"
#include <string>

using namespace std;

class Movie;

class Title {
    private:
        string title;
        
    public:
        Title();
        Title(string movieTitle);
        void setTitle(string movieTitle);
        string getTitle();

};

#endif