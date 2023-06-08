#ifndef MOVIELIST_H
#define MOVIELIST_H

#include <iostream>
#include <vector>
using namespace std; 

class MovieList {
    private:
        vector<Movie> movieList;
    public:
        MovieList();
        void parseData(string filename);
        void addMovie(Movie movie);
        void printFive() const;

        void sortByTitle(string title);
        void sortByGenre(string genre);
        void sortByDirector(string director);
        void sortByReleaseYear(int year);
        void sortByRating(double rating);     
};

#endif