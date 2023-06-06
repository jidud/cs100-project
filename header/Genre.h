#ifndef GENRE_H
#define GENRE_H
#include <vector>
using namespace std;

class Genre {
    private:
        vector<string> genreNames;
    public:
        void setGenres(vector<string> names);
        int getGenres();
        void sortByGenre();
};

#endif
