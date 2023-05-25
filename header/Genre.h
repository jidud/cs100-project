#ifndef GENRE_H
#define GENRE_H
#include <vector>
using namespace std;

class Genre {
    private:
        string genreName;
    public:
        void setGenre(string name);
        int getGenre();
        void sortByGenre();
};

#endif
