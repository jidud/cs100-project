#include "gtest/gtest.h"
#include "../header/Movielist.h"

//test parseData()
TEST (MovieListTest, ParseData) {
    movieList.parseData("movieData.csv");
    
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}