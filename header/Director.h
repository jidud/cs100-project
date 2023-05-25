#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <vector>
using namespace std;

class Year {
    private:
        string directorName;
    public:
        void setDirector(string name);
        int getDirector();
        void sortByDirector();
};

#endif
