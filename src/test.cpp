#include "gtest/gtest.h"
#include "../header/Director.h"
#include "../header/Genre.h"
#include "../header/MovieList.h"

/*---------------------------Tests for Director.cpp---------------------------*/

TEST(DirectorTest, SetDirector) {
    string testName = "Shelby Mitsuko";
    director.setDirector(testName);
    EXPECT_EQ(director.getDirector(), testName);
}

/*---------------------------------------------------------------------------*/

/*----------------------------Tests for Genre.cpp----------------------------*/

TEST(GenreTest, SetGenres) {
    Genre genre;
    vector<string> testGenres = {"Horror", "Comedy", "Romance"};
    genre.setGenres(testGenres);
    EXPECT_EQ(genre.getGenres(), testGenres);
}

TEST(GenreTest, GetGenres) {
    Genre genre;
    vector<string> testGenres = {"Horror", "Comedy", "Romance"};
    genre.setGenres(testGenres);

    vector<string> actualGenres = genre.getGenres();

    EXPECT_EQ(actualGenres, testGenres);
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