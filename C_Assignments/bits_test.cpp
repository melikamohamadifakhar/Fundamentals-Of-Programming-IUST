#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include"catch.hpp"
#include"bits.h"

TEST_CASE( "count ON bits", "[memory]" ) {
    int actual = count_on_bits(5);
    int expected = 2;
    REQUIRE( actual == expected );

    actual = count_on_bits(16);
    expected = 1;
    REQUIRE( actual == expected );

    actual = count_on_bits(0xf0);
    expected = 4;
    REQUIRE( actual == expected );    

    actual = count_on_bits(0xa00a);
    expected = 4;
    REQUIRE( actual == expected );    
}

TEST_CASE( "make bit stream", "[memory]" ) {
    int actual = make_bits(3, 3);
    int expected = 0x111; // 100010001
    REQUIRE( actual == expected );

    actual = make_bits(5, 3);
    expected = 0x11111; // 1000100010001
    REQUIRE( actual == expected );

    actual = make_bits(4, 1);
    expected = 0x55; // 1010101
    REQUIRE( actual == expected );    

    actual = make_bits(4, 2);
    expected = 0x249; // 1001001001
    REQUIRE( actual == expected );    
}