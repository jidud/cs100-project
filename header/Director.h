#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <vector>
#include "../header/Movie.h"

using namespace std;

class Movie;

class Director {
    private:
        string directorName;
    public:
        Director();
        Director(string name);
        void setDirector(string name);
        string getDirector();
        void sortByDirector(vector<Movie*>*);
};

#endif