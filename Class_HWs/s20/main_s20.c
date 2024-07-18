#include<stdio.h>

int is_prime(int x)
{
    for(int i=2;i<x;i=i+1)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    for(int i=2;i<101;i++)
    {
        if (is_prime(i)==1)
        {
            printf("%d\n",i);
        }
    }
}