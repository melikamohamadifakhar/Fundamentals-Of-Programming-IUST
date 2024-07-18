#include<malloc.h>
#include<math.h>
typedef struct 
{
    char* name;
    double grade;    
}_student;


_student* add_grade(_student* pstd,double plus)
{
    (*pstd).grade += plus;
    return pstd;
}

typedef struct
{
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
}int_struct;
// unsigned int* get_some_ptr(int_struct* ptr)
// {
//     unsigned int* sum =(unsigned int*) malloc(64);
//     *sum=0;
//     unsigned int c = (*ptr).C<<16;
//     unsigned int b = (*ptr).B>>16;
//     *sum = c + b;
//     return sum;
// }

unsigned int* get_some_ptr(int_struct* ptr)
{
    char* a = (char*) ptr;
    for (int i=0; i<6; i++)
    {
        a++;
    }
    unsigned int* x = (unsigned int*) a;
    return x;
}

typedef struct
{
    unsigned int A;
    char B[6];
    unsigned int C;
    double D;
    unsigned int E;
}complex_struct;

unsigned long long * get_some_ptr2(complex_struct* ptr)
{
    char* a = (char*) ptr;
    for (int i=0; i<6; i++)
    {
        a++;
    }
    unsigned long long * x = (unsigned long long *) a;
    return x;
}