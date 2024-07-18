#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_pointer.h"

TEST_CASE( "apply single one parameter function pointer", "[function_pointer]" ) {
    int n = 5;
    apply(&n, _plus2);
    REQUIRE(n == 7);

    apply(&n, _mult2);
    REQUIRE(n == 14);

    apply(&n, _negate);
    REQUIRE(n == -14);

    apply(&n, _plus2);
    REQUIRE(n == -12);
}

TEST_CASE( "apply single two parameter function pointer", "[function_pointer]" ) {
    int a=1, b=3, c;
    apply2(a, b, &c, _add);
    REQUIRE(c == 4);

    apply2(a, b, &c, _sub);
    REQUIRE(c == -2);

    apply2(a, b, &c, _max);
    REQUIRE(c == 3);

    apply2(a, b, &c, _min);
    REQUIRE(c == 1);
}


TEST_CASE( "apply function pointer list to single value", "[function_pointer]" ) {
    int (*fn_list[])(int) = {_plus2, _mult2, _negate};
    int n=1;
    apply_fn_list(&n, fn_list, 3);    
    REQUIRE(n == -6);

    apply_fn_list(&n, fn_list, 3);
    REQUIRE(n == 8);
}


TEST_CASE( "return function pointer", "[function_pointer]" ) {
    int actual = get_func('+')(5,4);
    REQUIRE( actual == 9);

    actual = get_func('-')(5,4);
    REQUIRE( actual == 1);

    actual = get_func('*')(5,4);
    REQUIRE( actual == 20);

    actual = get_func('/')(5,4);
    REQUIRE( actual == 1);

    actual = get_func('+')(5,4);
    REQUIRE( actual == 9);

    REQUIRE( nullptr == get_func('a'));
}


TEST_CASE( "return self struct with fn ptr", "[function_pointer]" ) {
    _self p = {0, self_func};
    p.f(&p);
    REQUIRE(p.n == 1);

    p.f(&p)->f(&p);
    REQUIRE(p.n == 3);

    p.f(&p)->f(&p)->f(&p);
    REQUIRE(p.n == 6);

    p.f(&p)->f(&p)->f(&p)->f(&p)->f(&p);
    REQUIRE(p.n == 11);
}

