#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

using namespace std;

class Movie {

private:
	string title;
	string genre;
	string director;
	double rating;
	int releaseYear;

public:
	Movie(const string& _title, const string& _genre, const string& _director, double _rating, int _releaseYear);
	string getTitle();
	string getGenre();
	string getDirector();
	double getRating();
	int getReleaseYear();
	void setTitle(const string& _title);
	void setGenre(const string& _genre);
	void setDirector(const string& _director);
	void setRating(double rating);
	void setReleaseYear(int _releaseYear);
};
#endif