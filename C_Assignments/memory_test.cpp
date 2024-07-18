#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include"catch.hpp"
#include"memory.h"

TEST_CASE( "variable swap", "[memory]" ) {
    int a = 5;
    int b = 10;
    swap(&a, &b);
    REQUIRE( a == 10 );
    REQUIRE( b == 5  );

    a = 5;
    b = 10;

    SECTION("first NULL pointer"){
        swap(&a, nullptr);
        REQUIRE(a == 5);
    }

    SECTION("second NULL pointer"){
        swap(nullptr, &b);
        REQUIRE(b == 10);
    }    

    SECTION("second NULL pointer"){
        swap(nullptr, nullptr);
    }       
}


TEST_CASE( "byte of integer", "[memory]" ) {
    unsigned int n = 0xffaaeedd;
    unsigned char first_byte = 0xdd;
    unsigned char second_byte = 0xee;
    unsigned char third_byte = 0xaa;
    unsigned char forth_byte = 0xff;
    
    REQUIRE( first_byte == get_byte(n, 0) );
    REQUIRE( second_byte == get_byte(n, 1) );
    REQUIRE( third_byte == get_byte(n, 2) );
    REQUIRE( forth_byte == get_byte(n, 3) );
}

TEST_CASE( "pointer math", "[memory]" ) {
    char pch[15] = "abcdefghijkl";
    char* actual = address_plus(&(pch[2]), 4);
    char* expected = &(pch[6]);
    REQUIRE( actual == expected );

    actual = address_plus(&(pch[1]), 7);
    expected = &(pch[8]);
    REQUIRE( actual == expected );
}

TEST_CASE( "array as integer", "[memory][!hide]" ) {
    char pch[5] = "AAAA";
    int actual = array_as_int(pch);
    int expected = 0x41414141;
    REQUIRE( actual == expected );

    char pch2[4] = "BBB";
    actual = array_as_int(pch2);
    expected = 0x00424242;
    REQUIRE( actual == expected );

    pch[0] = 0;
    actual = array_as_int(pch);
    expected = 0x41414100;
    REQUIRE( actual == expected );
}
