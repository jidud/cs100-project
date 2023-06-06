#ifndef GENRE_H
#define GENRE_H
#include <vector>
#include <string>
using namespace std;

class Genre {
    private:
        vector<string> genreNames;
    public:
        void setGenres(vector<string> names);
        vector<string> getGenres();
        void sortByGenre(vector<Movie*>*);
};

#endif
