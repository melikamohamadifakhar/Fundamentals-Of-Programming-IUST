#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

unsigned int Factorial( unsigned int number ) 
{
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) 
{
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}
int get_len(char* pch)
{
    int i;
    for (i=0; *pch!=0; i++)
    {
    pch++;
    }
    return i;
}

TEST_CASE("getting len","[get_len]")
{
    char c[10]="aria!";
    // char* b = &c[0];
    REQUIRE( get_len(c) == 5 );
}