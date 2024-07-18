#include<stdio.h>
int absolute_value(int x)
{
    if(x>=0)
        return x;
    return(-1*x);
}
int main()
{
    printf("%d\n", absolute_value(100));
    printf("%d\n", absolute_value(-1));
    printf("%d\n", absolute_value(0));
    printf("%d\n", absolute_value(1));
    printf("%d\n", absolute_value(1000));
}