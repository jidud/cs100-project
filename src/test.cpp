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
// TEST(GenreTest, SortByGenre) {
//     Genre genre;
//     vector<Movie*> movieList;

//     // Create some movies with different genres
//     Movie movie1("Guardians of the Galaxy", {"Action", "Adventure", "Sci-Fi"}, "James Gunn", 2014, 8.1);
//     Movie movie2("Prometheus", {"Adventure", "Mystery", "Sci-Fi"}, "Ridley Scott", 2012, 7.0);
//     Movie movie3("Split", {"Horror", "Thriller"}, "M. Night Shyamalan", 2016, 7.3);
//     Movie movie4("Sing", {"Animation", "Comedy", "Family"}, "Christophe Lourdelet", 2016, 7.2);
//     Movie movie5("Suicide Squad", {"Action", "Adventure", "Fantasy"}, "David Ayer", 2016, 6.2);

//     // Add movies to the movieList
//     movieList.push_back(&movie1);
//     movieList.push_back(&movie2);
//     movieList.push_back(&movie3);
//     movieList.push_back(&movie4);
//     movieList.push_back(&movie5);

//     //Sorting movies by Action
//     genre.sortByGenre(&movieList);

//     // Check if the movies are sorted correctly
//     EXPECT_EQ(movieList[0]->movieTitle.getTitle(), "Guardians of the Galaxy");
//     EXPECT_EQ(movieList[1]->movieTitle.getTitle(), "Suicide Squad");
// }

// /*---------------------------Tests for Director.cpp---------------------------*/

TEST (DirectorTest, SetDirector) {
    string testName = "Shelby Mitsuko";
    Director director;
    director.setDirector(testName);
    EXPECT_EQ(director.getDirector(), testName);
}

// /*---------------------------------------------------------------------------*/
//test for set and get title
TEST(TitleTest, SetandGetTitle) {
    Title title;
    title.setTitle("Ironman");

    EXPECT_EQ(title.getTitle(), "Ironman");
}

// //test SortByTitle()
// TEST(TitleTest, SortTitle) {
//     MovieList ml;

//     Movie movie1("The Great Wall", {"g1"}, "d1", 2021, 1.0);
//     Movie movie2("Their Finest", {"g2"}, "d2", 2022, 2.0);
//     Movie movie3("The Lost City of Z", {"g3"}, "d3", 2023, 3.0);

//     //add movies
//     ml.addMovie(movie1);
//     ml.addMovie(movie2);
//     ml.addMovie(movie3);

//     //sort
//     ml.sortByTitle("The");

//     EXPECT_EQ(ml[0].getTitle(), "The Great Wall");
//     EXPECT_EQ(ml[1].getTitle(), "The Lost City of Z");
// }

/*---------------------------------------------------------------------------*/
//test for set and get rating
TEST(RatingTest, SetandGetRating){
    Rating rating;
    rating.setRating(5.0);

    EXPECT_TRUE(rating.getRating() == 5.0);
}

// //test for sortByRating
// TEST(RatingTest, SortByRating) {
//     Rating rating;
//     vector<Movie*> ml;

//     Movie movie1("Guardians of the Galaxy", {"Action", "Adventure", "Sci-Fi"}, "James Gunn", 2014, 8.1);
//     Movie movie2("Prometheus", {"Adventure", "Mystery", "Sci-Fi"}, "Ridley Scott", 2012, 7.0);
//     Movie movie3("Split", {"Horror", "Thriller"}, "M. Night Shyamalan", 2016, 7.3);

//     ml.push_back(movie1);
//     ml.push_back(movie2);
//     ml.push_back(movie3);

//     rating.sortByRating(&ml);

//     EXPECT_EQ(ml[0]->getTitle(), "Guardians of the Galaxy");
//     EXPECT_EQ(ml[1]->getTitle(), "Split");
//     EXPECT_EQ(ml[2]->getTitle(), "Prometheus");
// }

/*---------------------------------------------------------------------------*/
//test for set and get year
TEST(YearTest, SetandGetYear) {
    Year year;
    year.setReleaseYear(2023);

    EXPECT_TRUE(year.getReleaseYear() == 2023);
}

// //test for sortByYear
// TEST(YearTest, SortByYear) {
//     Year year;
//     MovieList ml;

//     Movie movie1("Guardians of the Galaxy", {"Action", "Adventure", "Sci-Fi"}, "James Gunn", 2014, 8.1);
//     Movie movie2("Prometheus", {"Adventure", "Mystery", "Sci-Fi"}, "Ridley Scott", 2012, 7.0);
//     Movie movie3("Split", {"Horror", "Thriller"}, "M. Night Shyamalan", 2016, 7.3);

//     ml.addMovie(movie1);
//     ml.addMovie(movie2);
//     ml.addMovie(movie3);

//     ml.sortByReleaseYear(2012);

//     EXPECT_EQ(ml[0].getReleaseYear(), 2012);
//     EXPECT_EQ(ml[1].getReleaseYear(), 2014);
//     EXPECT_EQ(ml[2].getReleaseYear(), 2016);
// }


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
