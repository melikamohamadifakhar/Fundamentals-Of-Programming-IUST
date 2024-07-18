#include<stdio.h>
int fibonacci(int n)
{
    int x1=1;
    int x2=1;
    printf("%d   %d   ",x1, x2);
    for(int i=0; i<n-2; i++)
    {
        int x3 = x1 + x2;
        printf("%d   ", x3);
        x1 = x2;
        x2 = x3;
    }
}
int main()
{
    fibonacci(10);
}