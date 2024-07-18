#include<stdio.h>
int compute_sum(int n)
{
    int sum=0;
    for(int i=1; i<n+1; i++)
        sum += i;
    return sum;
}
int main()
{
    printf("N           compute_sum(N)\n");
    printf("--------------------------\n");
    for(int i=9; i>0; i--)
        printf("%d\t\t%d\n",i, compute_sum(i));
}
