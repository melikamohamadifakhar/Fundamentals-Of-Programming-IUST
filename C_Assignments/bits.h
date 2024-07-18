#include<stdio.h>
#include<stdbool.h>
int count_on_bits(int num)
{
    int i;
    int count=0;
    int changed=1;
    for(i=0; changed>0; i++)
    {
        changed = num >> i;
        if(changed & 1)
            count++;
    }
    return count;
}

int make_bits(int n, int m)
{
    int result=0;
    int x=0;
    for(int i=0; i<n; i++)
    {
        result += pow(2, x);
        x += m+1;
    }
    return result;
}

