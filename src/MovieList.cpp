#include "../header/Genre.h"
#include "../header/Director.h"
#include "../header/Rating.h"
#include "../header/Year.h"
#include "../header/Title.h"
#include "../header/MovieList.h"
#include "../header/Movie.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

MovieList::MovieList() {}

void MovieList::parseData(string filename) {
    string line = "";
    
    ifstream infile;
    infile.open(filename);

    string movieTitle = "";
    string genre = "";
    vector<string> genres {};
    string director = "";
    string year = "";
    string rating = "";

    if(!infile.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }

    while(getline(infile, line)) {
        movieTitle = "";
        genre = "";
        director = "";
        year = "";
        rating = "";
        
        int i = 0;
        //get movie title
        while(line[i] != ',') {
            movieTitle += line[i];
            i++;
        }
        //skip the comma and the open quote to first letter
        i += 2;
        //get genres
        while(line[i] != '"') {
            if(line[i] == ',') {
                genres.push_back(genre);
            } else {
                genre += line[i];
            }
            i++;
        }
        //skip the open quote and comma
        i += 2;
        //get director
        while(line[i] != ',') {
            director += line[i];
            i++;
        }
        i++;
        while(line[i] != ',') {
            year += line[i];
            i++;
        }
        i++;
        while(i < line.size()) {
            rating += line[i];
            i++;
        }
        int yearNum = atoi(year.c_str());
        double ratingDouble = atol(rating.c_str());

        Movie curMovie(movieTitle, genres, director, yearNum, ratingDouble);
        addMovie(curMovie);
    }
}


void MovieList::addMovie(Movie movie) {
    movieList.push_back(movie);
}

void MovieList::printFive() const {
    for(int i = 0; i < 5 && i < movieList.size(); ++i) {
        cout << endl;
        cout << i+1 << "." << endl;
        cout << "Movie Title: " << movieList.at(i).movieTitle->getTitle() << endl;
        vector<string>listGenres;
        listGenres = movieList.at(i).movieGenres->getGenres();
        cout << "Genres: ";
        for (int j = 0; j < listGenres.size(); ++j) {
            if(j != listGenres.size()-1) {
                cout << listGenres[j] << ", ";
            } else {
                cout << listGenres[j] << endl;
            }
        }
        cout << "Director: " << movieList.at(i).movieDirector->getDirector() << endl;
        cout << "Release Year: " <<  movieList.at(i).movieYear->getReleaseYear() << endl;
        cout << "Rating: " << movieList.at(i).movieRating->getRating() << endl;
    }
}
Movie MovieList::at(int index) {
    return movieList.at(index);
}


void MovieList::sortByTitle(string title) {
    int count = 0;

    for(int i = 0; i < movieList.size(); ++i) {
        if(movieList.at(i).movieTitle->getTitle().find(title) != -1 && count < 5) {
            swap(movieList.at(count), (movieList.at(i)));
            count++;
        }
        if(count >= 5) {
            break;
        }
    }
    printFive();
}

void MovieList::sortByGenre(string genre) {
    int count = 0;

    for(int i = 0; i < movieList.size(); ++i) {
        if(find(movieList.at(i).movieGenres->getGenres().begin(), movieList.at(i).movieGenres->getGenres().end(), genre) != movieList.at(i).movieGenres->getGenres().end()) {
            if(count < 5) {
                swap(movieList.at(count), movieList.at(i));
                count++;
            }
        }
        if(count >= 5) {
            break;
        }
    }
    printFive();
}

void MovieList::sortByDirector(string director) {
    int count = 0;

    for(int i = 0; i < movieList.size(); ++i) {
        if(movieList.at(i).movieDirector->getDirector().find(director) != -1 && count < 5) { 
            swap(movieList.at(count), (movieList.at(i)));
            count++;
        }
        if(count >= 5) {
            break;
        }
    }
    printFive();
}

void MovieList::sortByReleaseYear(int year) {
    int count = 0;

    for(int i = 0; i < movieList.size(); ++i) {
        //contain does not work with int/double
        if(movieList.at(i).movieYear->getReleaseYear() == year && count < 5) {
            swap(movieList.at(count), (movieList.at(i)));
            count++;
        }
        if(count >= 5) {
            break;
        }
    }
    printFive();
}

void MovieList::sortByRating(double rating) {
    int count = 0;

    for(int i = 0; i < movieList.size(); ++i) {
        //contain does not work with int/double
        if(movieList.at(i).movieRating->getRating() == rating && count < 5) {
            swap(movieList.at(count), (movieList.at(i)));
            count++;
        }
        if(count >= 5) {
            break;
        }
    }
    printFive();
}
