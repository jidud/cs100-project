
#include "gtest/gtest.h"
#include "../header/Genre.h"
#include "../header/MovieList.h"

//Testing set and get for Genre
TEST(GenreTest, SetandGetGenre) {
    Genre genre;
    vector<string> genres = {"Action", "Adventure", "Sci-Fi"};
    genre.setGenres(genres);

    EXPECT_EQ(genre.getGenres(), genres);
}

//Testing SortByGenre()
TEST(GenreTest, SortByGenre) {
    Genre genre;
    vector<Movie*> movieList;

    // Create some movies with different genres
    Movie movie1("Guardians of the Galaxy", {"Action", "Adventure", "Sci-Fi"}, "James Gunn", 2014, 8.1);
    Movie movie2("Prometheus", {"Adventure", "Mystery", "Sci-Fi"}, "Ridley Scott", 2012, 7.0);
    Movie movie3("Split", {"Horror", "Thriller"}, "M. Night Shyamalan", 2016, 7.3);
    Movie movie4("Sing", {"Animation", "Comedy", "Family"}, "Christophe Lourdelet", 2016, 7.2);
    Movie movie5("Suicide Squad", {"Action", "Adventure", "Fantasy"}, "David Ayer", 2016, 6.2);

    // Add movies to the movieList
    movieList.push_back(&movie1);
    movieList.push_back(&movie2);
    movieList.push_back(&movie3);
    movieList.push_back(&movie4);
    movieList.push_back(&movie5);

    //Sorting movies by Action
    genre.sortByGenre(&movieList);

    // Check if the movies are sorted correctly
    EXPECT_EQ(movieList[0]->getTitle(), "Guardians of the Galaxy");
    EXPECT_EQ(movieList[1]->getTitle(), "Suicide Squad");
}

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
