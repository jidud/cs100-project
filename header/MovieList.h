#ifndef MOVIELIST_H
#define MOVIELIST_H

#include <iostream>

using namespace std; 

struct Node {
    string movieName;
    Node* next; 

    Node(string movie, Node* n) {
        movieName = movie;
        next = n;
    }
}

class MovieList {
    private:

    public:
        Node* head;
        void addMovie(Node*);
};

#endif 