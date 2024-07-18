#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "string.h"

TEST_CASE( "string length", "[string]" ) {
    char buf[100] = "abcdefghijklmno";
    int len = str_len(buf);
    REQUIRE( len == 15 );

    buf[10] = 0;
    len = str_len(buf);
    REQUIRE( len == 10  );

    buf[5] = 0;
    len = str_len(buf);
    REQUIRE(len == 5);
}


TEST_CASE( "string compare", "[string]" ) {
    char pch1[11] = "Best";
    char pch2[10] = "Best";    
    REQUIRE( str_compare(pch1, 10, pch2, 11) );

    pch1[5] = 'k';
    pch2[5] = 'l';
    REQUIRE( str_compare(pch1, 10, pch2, 11) );

    pch1[4] = 'a';
    pch2[4] = 'a';
    REQUIRE(! str_compare(pch1, 10, pch2, 11) );
}

TEST_CASE( "string copy", "[string]" ) {
    char src_buf[10] = "Exactly";
    char tgt_buf[10];
    str_copy(src_buf, 10, tgt_buf, 10);
    REQUIRE( str_compare(src_buf, 10, tgt_buf, 10) );
}

TEST_CASE( "string append", "[string]" ) {
    char buf[10] = "Corr";
    char str[5] = "ect";
    char expected[10] = "Correct";
    str_append(buf, 10, str);
    REQUIRE( str_compare(buf, 10, expected, 10) );
}