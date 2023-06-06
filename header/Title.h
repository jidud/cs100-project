#ifndef TITLE_H
#define TITLE_H
#include <vector>
#include <string>

using namespace std;

class Title {
    private:
        string title;
        
    public:
        void setTitle(string movieTitle);
        string getTitle();
        void sortByTitle(vector<Movie*>*);

};

#endif