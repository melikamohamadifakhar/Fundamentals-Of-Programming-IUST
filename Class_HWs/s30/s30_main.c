#include<stdio.h>
#include<stdlib.h>
char* duplicate_string(const char* string)
{
    return (char*) string;
}

typedef struct employee
{
    int number;
    char name[20];
    float salary;

}emp;

int main()
{
    // struct  employee* ptr;
    // ptr = (struct employee*)malloc(sizeof(struct employee));
    emp n1;
    n1.number = 2;

}


typedef int* ptr;
