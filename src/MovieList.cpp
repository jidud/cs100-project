#include "../header/MovieList.h"
#include "../header/Movie.h"
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

MovieList::MovieList() {}

void MovieList::parseData(string filename) {
    string line = "";
    
    ifstream infile;
    infile.open(filename);

    string movieTitle = "";
    string genre = "";
    vector<string> genres;
    string director = "";
    string year = "";
    string rating = "";

    if(!infile.is_open()) {
        cout << "Error opeing file: " << filename << endl;
        return;
    }

    while(getline(infile, line)) {
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
        int yearNum = stoi(year);
        double ratingDouble = atof(rating.c_str());

        Movie curMovie(movieTitle, genres, director, yearNum, ratingDouble);
        movieList.addMovie(curMovie);
        genres.clear();
    }
    
}

void MovieList::addMovie(Movie movie) {
    movieList.push_back(movie);
}

void MovieList::printFive() const {
    for(int i = 0; i < 5; ++i) {
        cout << endl;
        cout << i+1 << "." << endl;
        cout << "Movie Title: " << movieList[i].movieTitle.getTitle() << endl;
        cout << "Genres: " << movieList[i].movieGenres.getGenres() << endl;
        cout << "Director: " << movieList[i].movieDirector.getDirector() << endl;
        cout << "Release Year: " <<  movieList[i].movieYear.getReleaseYear() << endl;
        cout << "Rating: " << movieList[i].movieRating.getRating() << endl;
    }
}

void MovieList::sortByTitle(string title) {
    int count = 0;

    for(int i = 0; i < movieList.size(); ++i) {
        if(movieList[i].movieTitle.getTitle().contains(title) && count < 5) {
            swap(movieList[count], (movieList[i]));
            count++;
        }
    }
    printFive();
}

void MovieList::sortByGenre(string genre) {
    int count = 0;

    for(int i = 0; i < movieList.size(); ++i) {
        if(find(movieList[i].movieGenres.getGenres().begin(), movieList[i].movieGenres.getGenres().end(), genre) != movieList[i].movieGenres.getGenres().end()) {
            if(count < 5) {
                swap(movieList[count], movieList[i]);
                count++;
            }
        }
    }
    printFive();
}

void MovieList::sortByDirector(string director) {
    int count = 0;

    for(int i = 0; i < movieList.size(); ++i) {
        if(movieList[i].movieDirector.getDirector().contains(director) && count < 5) {
            swap(movieList[count], (movieList[i]));
            count++;
        }
    }
    printFive();
}

void MovieList::sortByReleaseYear(int year) {
    int count = 0;

    for(int i = 0; i < movieList.size(); ++i) {
        //contain does not work it int/double
        if(movieList[i].movieYear.getReleaseYear() == year && count < 5) {
            swap(movieList[count], (movieList[i]));
            count++;
        }
    }
    printFive();
}

void MovieList::sortByRating(double rating) {
    int count = 0;

    for(int i = 0; i < movieList.size(); ++i) {
        //contain does not work it int/double
        if(movieList[i].movieRating.getRating() == rating && count < 5) {
            swap(movieList[count], (movieList[i]));
            count++;
        }
    }
    printFive();
}