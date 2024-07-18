#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include"catch.hpp"
#include"struct.h"

TEST_CASE( "simple struct", "[struct]" ) {
    _student std = {"Zhila", 17.5};
    add_grade(&std, 0.5);
    REQUIRE(std.grade == 18);

    add_grade(&std, -1);
    REQUIRE(std.grade == 17);

    REQUIRE(19 == add_grade(&std, 2)->grade);
}


TEST_CASE( "simple struct memory layout", "[struct]" ) {
    int_struct s = {.A=0xaaaaaaaa, .B=0xbbbbbbbb, .C=0xcccccccc, .D=0xdddddddd};
    // Use the following command in DEBUG CONSOLE to inspect memory:
    // -exec x/16bx &s
    unsigned int* ptr = get_some_ptr(&s);
    REQUIRE(*ptr == 0xccccbbbb);

    s.B = 0xffffffff;
    ptr = get_some_ptr(&s);
    REQUIRE(*ptr == 0xccccffff);    

    s.C = 0xeeeeeeee;
    ptr = get_some_ptr(&s);
    REQUIRE(*ptr == 0xeeeeffff);
}


TEST_CASE( "complex struct memory layout", "[struct]" ) {
    complex_struct s = {
        .A=0xaaaaaaaa, 
        .B="AAAAA", 
        .C=0xcccccccc,
        .D=1.19999993,
        .E=0xeeeeeeee};
    ((char*)&s)[10] = 0;
    ((char*)&s)[11] = 0;
    // Use the following command in DEBUG CONSOLE to inspect memory:
    // -exec x/32bx &s
    // Inspect the memory after each line and predict whether the test 
    // will pass or not before REQUIRE statements.
    unsigned long long * ptr = get_some_ptr2(&s);
    REQUIRE(*ptr == 0xcccc000000414141);

    ((char*)&s)[13] = 0x99;
    REQUIRE(*ptr == 0x99cc000000414141);
    REQUIRE(s.C == 0xcccc99cc);

    s.C = 0xffffffff;
    REQUIRE(*ptr == 0xffff000000414141);

    ((char*)&s)[6] = 0x42;
    REQUIRE(*ptr == 0xffff000000414142);
    REQUIRE(s.B[2] == 'B');
}

