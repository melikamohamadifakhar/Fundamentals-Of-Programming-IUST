#include<stdio.h>
int factorial(int* x)
{
    int j = *x;
    int a=1;
    for(int i=0; i<j; i++)
    {
        a = a * (*x);
        (*x)--;
    }
    printf("%d", a);
}
int main()
{
    int i;
    scanf("%d",&i);
    factorial(&i);
}
