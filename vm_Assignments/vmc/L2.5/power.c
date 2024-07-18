#include<stdio.h>
int power(int* x, int* y)
{
    int m=*x;
    int i;
    if(*y==0)
        return 1;
    else
    {
        for(i=0; i<(*y)-1; i++)
        *x = (*x) * m;
    }
    return *x;
}
int main()
{
    int f = 5;
    int j = 4;
    printf("%d", power(&f, &j));
}

