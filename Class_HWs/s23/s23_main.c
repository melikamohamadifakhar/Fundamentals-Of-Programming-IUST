#include<stdio.h>
#include<stdbool.h>


bool is_bit_on(int num, int bit, bool* is_bit_on)
{   
    *is_bit_on = (num >> (bit-1)) & 1 == 1;
}


int get_max(int a, int b, int* pmin, int* pmax)
{
    if (a > b)
    {
        *pmin = *&b;
        *pmax = *&a;
    }
    else
    {
        *pmin = *&a;
        *pmax = *&b;
    }
}

void swap(int* pX, int* pY) 
{ 
    int z = *pX; 
    *pX = *pY; 
    *pY = z; 
} 

int main() 
{
    int x=3;
    int y=4;
    is_bit_on(y, x);
    swap(&x, &y);
    printf("%d, %d", x, y);


    int a1 = 5;
    int b1 = 4;
    int m;
    int n;
    get_max(4, 8, &m, &n);
    printf("%d\t %d\n", *&n, *&m);
    // int* pa1 = &a1;
    // // a1 = 6;
    // // printf("%d \t %x\n", a1, *pa1);
    // printf("%d, %d\n", a1, b1);
    // swap(a1, b1);
    // printf("%d, %d\n", a1, b1);
    // return 0; 
}
