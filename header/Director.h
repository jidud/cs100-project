#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <vector>
using namespace std;

class Director {
    private:
        string directorName;
    public:
        void setDirector(string name);
        string getDirector();
        void sortByDirector();
};

#endif