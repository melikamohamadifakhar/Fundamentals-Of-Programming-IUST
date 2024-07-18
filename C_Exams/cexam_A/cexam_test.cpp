#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "cexam.h"
#include <string.h>

TEST_CASE( "q1 sum", "[simple]" ) {
    REQUIRE(q1_sum(4, 5) == 9);
    REQUIRE(q1_sum(7, 5) == 12);
}

TEST_CASE( "q2 sum", "[simple]" ) {
    int s=0;    
    REQUIRE(q2_sum(4, 5, &s));
    REQUIRE(s == 9);
    
    REQUIRE(! q2_sum(7, 5, &s));
    REQUIRE(s == 12);
}

TEST_CASE( "q3 solve equation", "[simple]" ) {
    double x1=0, x2=0;
    REQUIRE(q3_solve_equation(1, -5, 6, &x1, &x2) == 2);
    REQUIRE(x1 == 2);
    REQUIRE(x2 == 3);   

    REQUIRE(q3_solve_equation(1, 4, 4, &x1, &x2) == 1);
    REQUIRE(x1 == -2);
    REQUIRE(x2 == -2);      

    REQUIRE(q3_solve_equation(5, 1, 5, &x1, &x2) == 0);
    REQUIRE(x1 == 0);
    REQUIRE(x2 == 0);      
}

TEST_CASE( "q4 add equations", "[simple]" ) {
    int a=0, b=0, c=0;
    q4_add_equations(1, 3, 4, 2, 5, 7, &a, &b, &c);
    REQUIRE(a == 3);
    REQUIRE(b == 8);
    REQUIRE(c == 11);

    q4_add_equations(-2, 1, 5, 0, 2, -4, &a, &b, &c);
    REQUIRE(a == -2);
    REQUIRE(b == 3);
    REQUIRE(c == 1);
}

TEST_CASE("q5 digit count", "[intermediate]") {
    REQUIRE( q5_digit_count(5) == 1);
    REQUIRE( q5_digit_count(-5) == 1);
    REQUIRE( q5_digit_count(15) == 2);
    REQUIRE( q5_digit_count(-15) == 2);
    REQUIRE( q5_digit_count(115) == 3);
    REQUIRE( q5_digit_count(-115) == 3);
    REQUIRE( q5_digit_count(123456) == 6);
}

// TEST_CASE("q6 number to string", "[hard][!hide]") {
//     char buf[10] = "";
//     q6_number_to_string(5, buf);
//     REQUIRE( strcmp(buf, "5") == 0);

//     q6_number_to_string(-5, buf);
//     REQUIRE( strcmp(buf, "-5") == 0);

//     q6_number_to_string(15, buf);
//     REQUIRE( strcmp(buf, "15") == 0);

//     q6_number_to_string(-15, buf);
//     REQUIRE( strcmp(buf, "-15") == 0);

//     q6_number_to_string(115, buf);
//     REQUIRE( strcmp(buf, "115") == 0);

//     q6_number_to_string(123456, buf);
//     REQUIRE( strcmp(buf, "123456") == 0);
// }

// TEST_CASE("q7 equation to string", "[hard]") {
//     char buf[100];
//     q7_equation_to_string(1,2,4, buf);
//     REQUIRE( strcmp(buf, "x^2+2x+4") == 0);

//     q7_equation_to_string(1,-2,5, buf);
//     REQUIRE( strcmp(buf, "x^2-2x+5") == 0);
// }

TEST_CASE("q8 fill array", "simple") {
    int array[3];
    q8_fill_array(array, 3, 52);
    for (int i=0; i<3; i++)
        REQUIRE(array[i] == 52);

    q8_fill_array(array, 3, 41);
    for (int i=0; i<3; i++)
        REQUIRE(array[i] == 41);

    int array2[5];
    q8_fill_array(array2, 5, 22);
    for (int i=0; i<5; i++)
        REQUIRE(array2[i] == 22);
}

TEST_CASE("q9 array copy", "simple") {
    int array1[] = {3, 2, 1, 4};
    int array2[4];
    q9_array_copy(array1, 4, array2);

    array1[0] = 0;
    array1[1] = 0;
    array1[2] = 0;
    array1[3] = 0;

    REQUIRE( array2[0] == 3);
    REQUIRE( array2[1] == 2);
    REQUIRE( array2[2] == 1);
    REQUIRE( array2[3] == 4);

    q9_array_copy(array1, 4, array2);
    for(int i=0; i<4; i++)
        REQUIRE(array2[i] == 0);
}

TEST_CASE("q10 max odd numbers", "[intermediate]") {
    int array1[] = {3, 2, 1, 4, 2, 2, 1, 5};
    int array2[] = {15, 11, 1, 12, 2, 4};

    REQUIRE( q10_max_odd_numbers(array1, 8) == 5);
    REQUIRE( q10_max_odd_numbers(array2, 6) == 15);
}

TEST_CASE("q11 sum odd positions", "[intermediate]") {
    int array1[] = {3, 2, 1, 4, 2, 2, 1, 5};
    int array2[] = {15, 11, 1, 12, 2, 4};

    REQUIRE( q11_max_odd_positions(array1, 8) == 5);
    REQUIRE( q11_max_odd_positions(array2, 6) == 12);
}

// TEST_CASE("q12 reverse odd positions", "[intermediate][!hide]") {
//     //            0123456789
//     char buf[] = "a1b2c3d4e5";
//     const char* expected = "a5b4c3d2e1";
//     q12_reverse_odd_positions(buf);
//     REQUIRE(strcmp(buf, expected) == 0);

//     //             0123456789 10
//     char buf2[] = "0a1b2c3d4e5";
//     const char* expected2 = "0e1d2c3b4a5";
//     q12_reverse_odd_positions(buf2);
//     REQUIRE(strcmp(buf2, expected2) == 0);
// }

TEST_CASE("q13 matrix compare", "[intermediate]") {
    int m11[] = {1,2,2}, m12[]={2,1,3};
    int* m1[] = {m11, m12};
    int m21[] = {3,2,0}, m22[] = {-1,1,1};
    int* m2[] = { m21, m22 };
    int m31[] = {1,2,2}, m32[]={2,1,3};
    int* m3[] = {m31, m32};

    int m41[]={1,2,2,2}, m42[] ={2,1,1,3} , m43[] ={2,1,1,3};
    int* m4[] = {m41, m42, m43};
    int m51[]={1,2,1,2}, m52[]={2,4,1,3}, m53[]={2,1,1,3};
    int* m5[] = {m51, m52, m53};
    int m61[]={1,2,2,2}, m62[]={2,1,1,3}, m63[]={2,1,1,3};
    int* m6[] = {m61, m62, m63};

    REQUIRE(q13_matrix_compare(m1, m2, 2, 3) == false);
    REQUIRE(q13_matrix_compare(m1, m3, 2, 3) == true);
    REQUIRE(q13_matrix_compare(m2, m3, 2, 3) == false);
    REQUIRE(q13_matrix_compare(m4, m5, 3, 4) == false);
    REQUIRE(q13_matrix_compare(m4, m6, 3, 4) == true);
    REQUIRE(q13_matrix_compare(m5, m6, 3, 4) == false);
}

TEST_CASE("q14 matrix add", "[intermediate][!hide]") {
    int m11[] = {1,2,2}, m12[] = {2,1,3};
    int* m1[] = {m11, m12};

    int m21[] = {3,2,0}, m22[] = {-1,1,1};
    int* m2[] = {m21, m22};
    const int ex[][3] = { {4,4,2}, {1,2,4}};

    int** sum = q14_matrix_add(m1, m2, 2, 3);
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            REQUIRE(sum[i][j] == ex[i][j]);

    for(int i=0; i<2; i++)
        free(sum[i]);
    free(sum);

    int ma11[]={1,2,2,2}, ma12[] ={2,1,1,3} , ma13[] ={2,1,1,3};
    int* ma1[] = {ma11, ma12, ma13};
    int ma21[]={1,2,1,2}, ma22[]={2,4,1,3}, ma23[]={2,1,1,3};
    int* ma2[] = {ma21, ma22, ma23};
    const int exa[][4] = { {2,4,3,4}, {4,5,2,6},{4,2,2,6}};
    sum = q14_matrix_add(ma1, ma2, 3, 4);

    for(int i=0; i<3; i++)
        for(int j=0; j<4; j++)
            REQUIRE(sum[i][j] == exa[i][j]);

    for(int i=0; i<3; i++)
        free(sum[i]);
    free(sum);
}

TEST_CASE("q15 complex number", "[intermediate]") {
    complex_number* pcn = q15_create_complex_number(5, 4);
    REQUIRE(pcn->i == 5);
    REQUIRE(pcn->r == 4);
    free(pcn);

    pcn = q15_create_complex_number(-1, 3);
    REQUIRE(pcn->i == -1);
    REQUIRE(pcn->r == 3);
    free(pcn);
}

TEST_CASE("q16 add complex numbers", "[intermediate]") {
    complex_number pcn1 = {5.1, 3.2};
    complex_number pcn2 = {3.9, 4.8};
    q16_add_complex_number(&pcn1, &pcn2);

    REQUIRE(pcn1.i == 9);
    REQUIRE(pcn1.r == 8);
    REQUIRE(pcn2.i == 3.9);
    REQUIRE(pcn2.r == 4.8);

    complex_number pcna = {1.1, 3.3};
    complex_number pcnb = {-2.2, 5.5};
    q16_add_complex_number(&pcna, &pcnb);

    REQUIRE(pcna.i == -1.1);
    REQUIRE(pcna.r == 8.8);
    REQUIRE(pcnb.i == -2.2);
    REQUIRE(pcnb.r == 5.5);
}


// TEST_CASE( "q17_view_memory", "[hard][!hide]" ) {
//     complex_number* pcn = q15_create_complex_number(32343.14152831, 11112121.83838);
//     char* ptr1 = q17_get_cn_ptr1(pcn);
//     char* ptr2 = q17_get_cn_ptr2(pcn);
//     int w = *ptr1;
//     w <<= 8;
//     w |= *ptr2;
//     REQUIRE( w == 0x0e3a);
//     free(pcn);    

//     pcn = q15_create_complex_number(9328347.23847192, 3834718.1238738);
//     ptr1 = q17_get_cn_ptr1(pcn);
//     ptr2 = q17_get_cn_ptr2(pcn);
//     w = *ptr1;
//     w <<= 8;
//     w |= *ptr2;
//     REQUIRE( w == 0x670f);
//     free(pcn);    
// }


TEST_CASE( "q18_function pointer", "[intermediate]" ) {
    int array1[] = {7, 4, 2, 9, 11, -1, 3, 7, 2};
    REQUIRE( q18_aggregate(array1, 9, get_max) == 11);
    REQUIRE( q18_aggregate(array1, 9, get_min) == -1);
    REQUIRE( q18_aggregate(array1, 9, get_sum) == 44);

    int array2[] = {-12, 2, 18, 2, 4, 7, -2};
    REQUIRE( q18_aggregate(array2, 7, get_max) == 18);
    REQUIRE( q18_aggregate(array2, 7, get_min) == -12);
    REQUIRE( q18_aggregate(array2, 7, get_sum) == 19);
}
