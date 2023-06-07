#include "gtest/gtest.h"
#include "../header/Movielist.h"

/*---------------------------Tests for Director.cpp---------------------------*/

TEST (DirectorTest, SetDirector) {
    string testName = "Shelby Mitsuko";
    director.setDirector(testName);
    EXPECT_EQ(director.getDirector(), testName);
}

/*---------------------------------------------------------------------------*/

/*--------------------------Tests for MovieList.cpp--------------------------*/

//test parseData()
TEST (MovieListTest, ParseData) {
    movieList.parseData("movieData.csv");
    
}

/*---------------------------------------------------------------------------*/

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}