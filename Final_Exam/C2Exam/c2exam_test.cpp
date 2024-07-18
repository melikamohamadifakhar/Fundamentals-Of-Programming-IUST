#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "c2exam.h"
#include <string.h>

TEST_CASE( "q1 get max", "[simple]" ) {
    REQUIRE(q1_get_max(1, 2, 3) == 3);
    REQUIRE(q1_get_max(5, 1, 2) == 5);
    REQUIRE(q1_get_max(2, 4, 1) == 4);
}

TEST_CASE( "q2 is right angled", "[simple]" ) {
    REQUIRE(q2_is_right_angled(3, 4, 5));
    REQUIRE(q2_is_right_angled(3, 5, 4));
    REQUIRE(q2_is_right_angled(4, 5, 3));
    REQUIRE(q2_is_right_angled(4, 3, 5));
    REQUIRE(q2_is_right_angled(5, 3, 4));
    REQUIRE(q2_is_right_angled(5, 4, 3));

    REQUIRE(q2_is_right_angled(5, 12, 13));
    REQUIRE(q2_is_right_angled(15, 17, 8));

    REQUIRE(! q2_is_right_angled(1, 2, 3));
    REQUIRE(! q2_is_right_angled(4, 3, 2));
    REQUIRE(! q2_is_right_angled(2, 2, 2));
}

TEST_CASE( "q3 array sum", "[simple]" ) {
    int a[3] = {1,  2, 3};
    int b[3] = {-1, 3, 2};
    int c[3] = {1, -1, -2};

    REQUIRE( q3_array_fsum(a, b, c, 3) == 9);

    a[0] = 2; b[1] = -1; c[2] = -1;
    REQUIRE( q3_array_fsum(a, b, c, 3) == 1);

    c[0] = 2; b[1] = 2; a[2] = 1;
    REQUIRE( q3_array_fsum(a, b, c, 3) == 4);

    int a1[5] = {1,  2, 3, 2, 1};
    int b1[5] = {-1, 3, 2, -1, 3};
    int c1[5] = {1, -1, -2, 4, 2};
    REQUIRE( q3_array_fsum(a1, b1, c1, 5) == 16);    
}

TEST_CASE( "q4 string shuffle", "[intermediate]" ) {
    char str1[]="1032";
    q4_string_shuffle(str1);
    REQUIRE( strcmp(str1, "0123") == 0);

    char str2[]="badcfe";
    q4_string_shuffle(str2);
    REQUIRE( strcmp(str2, "abcdef") == 0);

    char str3[]="livoyeuo";
    q4_string_shuffle(str3);
    REQUIRE( str3[0] == 'i');
    REQUIRE( str3[2] == 'o');
    REQUIRE( str3[6] == 'o');
    REQUIRE( str3[4] == 'e');
}

// TEST_CASE( "q5 last index", "[advanced][!hide]" ) {
//     //           01234567
//     char s1[] = "abcabcab";
//     //              abc    
//     REQUIRE( q5_last_index_of(s1, (char*)"abc") == 3);

//     //01234567
//     //abcabcab
//     //      ab
//     REQUIRE( q5_last_index_of(s1, (char*)"ab") == 6);

//     //01234567
//     //abcabcab
//     //    bc
//     REQUIRE( q5_last_index_of(s1, (char*)"bc") == 4);

//     //01234567
//     //abcabcab
//     //    bc
//     REQUIRE( q5_last_index_of(s1, (char*)"ad") == -1);

//     //01234567
//     //abcabcab
//     //    bc
//     REQUIRE( q5_last_index_of(s1, (char*)"abcd") == -1);
// }

// TEST_CASE( "q6 sort", "[intermediate]" ) {
//     int a=5, b=1, c=2, d=-1;
//     q6_sort(&a, &b, &c, &d);
//     REQUIRE( (a == 5 && b == 2 && c == 1 && d == -1) );

//     b=6, d=4, a=-1, c=2;
//     q6_sort(&a, &b, &c, &d);
//     REQUIRE( (a == 6 && b == 4 && c == 2 && d == -1) );

//     q6_sort(&a, &b, &c, &d);
//     REQUIRE( (a == 6 && b == 4 && c == 2 && d == -1) );
// }

// TEST_CASE( "q7 generic sort", "[advanced][!hide]" ) {
//     int a=5, b=1, c=2, d=-1;
//     q7_generic_sort(&a, &b, &c, &d, is_smaller);
//     REQUIRE( (a == 5 && b == 2 && c == 1 && d == -1) );
//     q7_generic_sort(&a, &b, &c, &d, is_bigger);
//     REQUIRE( (d == 5 && c == 2 && b == 1 && a == -1) );

//     b=6, d=4, a=-1, c=2;
//     q7_generic_sort(&a, &b, &c, &d, is_smaller);
//     REQUIRE( (a == 6 && b == 4 && c == 2 && d == -1) );
//     q7_generic_sort(&a, &b, &c, &d, is_bigger);
//     REQUIRE( (d == 6 && c == 4 && b == 2 && a == -1) );

//     q7_generic_sort(&a, &b, &c, &d, is_bigger);
//     REQUIRE( (d == 6 && c == 4 && b == 2 && a == -1) );
// }


