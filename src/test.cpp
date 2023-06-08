#include <gtest/gtest.h>
#include "../header/Genre.h"
#include "../header/Director.h"
#include "../header/Rating.h"
#include "../header/Year.h"
#include "../header/Title.h"
#include "../header/MovieList.h"
#include "../header/Movie.h"

//Testing set and get for Genre
TEST(GenreTest, SetandGetGenre) {
    Genre genre;
    vector<string> genres = {"Action", "Adventure", "Sci-Fi"};
    genre.setGenres(genres);

    EXPECT_EQ(genre.getGenres(), genres);
}

//Testing SortByGenre()
TEST(GenreTest, SortByGenre) {
    MovieList ml;

    ml.sortByGenre("Action");

    ml.printFive();
}


// /*---------------------------Tests for Director.cpp---------------------------*/

TEST (DirectorTest, SetDirector) {
    string testName = "Shelby Mitsuko";
    Director director;
    director.setDirector(testName);
    EXPECT_EQ(director.getDirector(), testName);
}

//test sortByDirector
TEST(TitleTest, SortDirector) {
    MovieList movieList;

    // Sorts by genre
    movieList.sortByDirector("John");

    // Print the sorted movies
    movieList.printFive();
}

// /*---------------------------------------------------------------------------*/
//test for set and get title
TEST(TitleTest, SetandGetTitle) {
    Title title;
    title.setTitle("Ironman");

    EXPECT_EQ(title.getTitle(), "Ironman");
}

//test SortByTitle()
TEST(TitleTest, SortTitle) {
    MovieList movieList;

    // Sorts by genre
    movieList.sortByTitle("The");

    // Print the sorted movies
    movieList.printFive();
}

/*---------------------------------------------------------------------------*/
//test for set and get rating
TEST(RatingTest, SetandGetRating){
    Rating rating;
    rating.setRating(5.0);

    EXPECT_TRUE(rating.getRating() == 5.0);
}

// //test for sortByRating
TEST(RatingTest, SortByRating) {
    MovieList ml;

    ml.sortByRating(7.0);

    ml.printFive();

}

/*---------------------------------------------------------------------------*/
//test for set and get year
TEST(YearTest, SetandGetYear) {
    Year year;
    year.setReleaseYear(2023);

    EXPECT_TRUE(year.getReleaseYear() == 2023);
}

//test for sortByYear
TEST(YearTest, SortByYear) {
    MovieList ml;

    ml.sortByReleaseYear(2020);

    ml.printFive();
}

// /*--------------------------Tests for MovieList.cpp--------------------------*/

// //test parseData()
// TEST (MovieListTest, ParseData) {
//     MovieList ml;
//     ml.parseData("movieData.csv");


//     EXPECT_EQ(ml[0].getTitle(), "Movie 1");
//     EXPECT_EQ(ml[1].getDirector().getDirector(), "Director 2");
    
// }

/*---------------------------------------------------------------------------*/

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
