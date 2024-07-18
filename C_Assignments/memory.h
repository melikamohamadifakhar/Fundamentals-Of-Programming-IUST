#include<stdio.h>
#include<stdbool.h>

void swap(int* a, int* b)
{
    if (a == nullptr || b == nullptr)
        return;
    int z = *a;
    *a = *b;
    *b = z;
}

unsigned char get_byte(unsigned int n, int m)
{
    n = n >> m*8;
    n = n & 0xff;
    return (unsigned char)n;
}


char* address_plus(char* element,int n)
{
    for(int i = 0; i< n; i++)
    {
        element++;
    }
    return element;
}

int array_as_int(char* array)
{
    int* result = (int*)array;
    return *result;
}