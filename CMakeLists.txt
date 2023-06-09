cmake_minimum_required(VERSION 3.20)
project(unit-test)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS --coverage)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
add_subdirectory(googletest)

add_executable(runAllTests
  src/test.cpp 
  src/Genre.cpp
  src/Director.cpp
  src/Title.cpp
  src/Rating.cpp
  src/Year.cpp
  src/MovieList.cpp
  src/Movie.cpp

)

target_link_libraries(runAllTests gmock gtest gtest_main)
