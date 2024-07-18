#include<stdio.h>
void compute_change(int m)
{
    int n = 100 - m;
    int quarter = n/25;
    int dime = ((n % 25)/10);
    int nickel = (((n % 25)%10)/5);
    int pennis = n -(25*quarter + 10*dime + 5*nickel);
    printf("%d quarters\n", quarter);
    printf("%d dime\n", dime);
    printf("%d nickel\n", nickel);
    printf("%d pennis\n", pennis);
}


int main()
{
    compute_change(8);
}