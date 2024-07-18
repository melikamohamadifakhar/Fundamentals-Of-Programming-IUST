#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include"catch.hpp"
#include"myarray.h"

TEST_CASE( "sum array", "[array]" ) {
    int vec[5] = {5, 2, 12, 4, 3};
    int actual = array_sum(vec, 5);

    REQUIRE( 26 == actual);

    actual = array_sum(vec, 4);
    REQUIRE( 23 == actual);

    int vec2[3] = {5,4,3};
    actual = array_sum(vec2, 3);
    REQUIRE(12 == actual);
}

TEST_CASE( "sum array ptr", "[array]" ) {
    int vec[5] = {5, 2, 12, 4, 3};
    int actual = array_sum_ptr((int*)vec, 5);
    REQUIRE( 26 == actual);

    actual = array_sum_ptr((int*)vec, 4);
    REQUIRE( 23 == actual);

    int vec2[3] = {5,4,3};
    actual = array_sum_ptr((int*)vec2, 3);
    REQUIRE(12 == actual);
}

TEST_CASE( "sum array 2d", "[array]" ) {
    int vec[2][2] = {{1, 5},{4, 3}};
    int actual = array_sum2d(2, 2, vec);
    REQUIRE( 13 == actual);

    int vec2[3][2] = {{1, 5},{4, 3},{1, 1}};
    actual = array_sum2d(3, 2, vec2);
    REQUIRE( 15 == actual);

    int vec3[4][2] = {{1, 5},{4, 3},{1, 1},{3, 2}};
    actual = array_sum2d(4, 2, vec3);
    REQUIRE( 20 == actual);    
}

TEST_CASE( "sum array 2d ptr", "[array]" ) {
    int vec[2][2] = {{1, 5},{4, 3}};
    int actual = array_sum2d_ptr(2, 2, (int*)vec);
    REQUIRE( 13 == actual);

    int vec2[3][2] = {{1, 5},{4, 3},{1, 1}};
    actual = array_sum2d_ptr(3, 2, (int*)vec2);
    REQUIRE( 15 == actual);

    int vec3[4][2] = {{1, 5},{4, 3},{1, 1},{3, 2}};
    actual = array_sum2d_ptr(4, 2, (int*)vec3);
    REQUIRE( 20 == actual);    
}

TEST_CASE( "sum 2d jagged array", "[array]" ) {
    int row1[] = {1, 2};   // Row1 Size: 2
    int row2[] = {1, 2, 3};// Row2 Size: 3
    int* jagged_vector[] = {row1, row2};
    int size_vector[] = {2, 3};
    int row_count = 2;
    int actual = jagged_array_sum(jagged_vector, size_vector, row_count);
    REQUIRE( 9 == actual);

    int row3[] = {1, 2, 3, 4, 5}; // Row3 Size: 5
    int* jagged_vector2[] = {row1, row2, row3};
    int size_vector2[] = {2, 3, 5};
    row_count = 3;
    actual = jagged_array_sum(jagged_vector2, size_vector2, row_count);
    REQUIRE( 24 == actual);
}

TEST_CASE( "sum 2d jagged array ptr", "[array]" ) {
    int row1[] = {1, 2};   // Row1 Size: 2
    int row2[] = {1, 2, 3};// Row2 Size: 3
    int* jagged_vector[] = {row1, row2};
    int size_vector[] = {2, 3};
    int row_count = 2;
    int actual = jagged_array_sum_ptr((int**)jagged_vector, (int*)size_vector, row_count);
    REQUIRE( 9 == actual);

    int row3[] = {1, 2, 3, 4, 5}; // Row3 Size: 5
    int* jagged_vector2[] = {row1, row2, row3};
    int size_vector2[] = {2, 3, 5};
    row_count = 3;
    actual = jagged_array_sum_ptr((int**)jagged_vector2, (int*)size_vector2, row_count);
    REQUIRE( 24 == actual);
}


