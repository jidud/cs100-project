#include "../header/MovieDataLoad.h"

using namespace std;

void MovieDataLoad::loadMovieData(const string& fileName) {
	ifstream infile;
	infile.open(fileName);
	string line, movieName, allGenre, genre, director, actor, year, rating;
	char quotationMark, comma;

	while (getline(infile, line)) {
		stringstream lineStr(line);
		
		while (getline(lineStr, movieName, ',')) {
			lineStr >> quotationMark;
			getline(lineStr, allGenre, '"');
			stringstream genreStr(allGenre);

			vector<string>* genreList = new vector<string>;
			while (getline(genreStr, genre, ',')) {
				genreList->push_back(genre);
			}
			lineStr >> comma;

			getline(lineStr, director, ',');
			//getline(lineStr, actor, ',');
			getline(lineStr, year, ',');
			getline(lineStr, rating, ',');

			//cout << movieName << endl;
			//cout << director << endl;
			//cout << year << endl;
			//cout << rating << endl;

			Movie* newMovie = new Movie(movieName, genreList, director, stoi(year), stod(rating));
			
			movieData.push_back(newMovie);
		}

	}

	/*
	for (unsigned int i = 0; i < movieData.size(); ++i) {
		cout << movieData.at(i)->movieTitle->getTitle() << ", ";
		cout << "\"";
		for (unsigned int j = 0; j < movieData.at(i)->movieGenres->getGenres()->size(); ++j) {
			cout << movieData.at(i)->movieGenres->getGenres()->at(j) << ", ";
		}
		cout << "\", ";
		cout << movieData.at(i)->movieDirector->getDirector() << ", ";
		cout << movieData.at(i)->movieYear->getReleaseYear() << ", ";
		cout << movieData.at(i)->movieRating->getRating() << endl;
	}
	*/
	//for (unsigned int i = 0; i < v1.size(); ++i) {
	//	cout << (i + 1) << ". " << v1.at(i) << endl;
	//}
}

vector<Movie*>* MovieDataLoad::getMovieData() {
	return &movieData;
}