#include<stdio.h>

int* make_array()
{
    int* x;
    int i=0;
    int a =1;
    while (a !=-1)
    {
        scanf("%d", &a);
        if (a!=-1)
        {
            x[i] = a;
            i++;
        }
    }
    x[i] = -1;
    return x;
}

int find_len(int* x)
{
    int i=0;
    while(x[i] !=-1)
        i++;
    return i;
}

float av(int* x)
{
    int sum=0;
    int i;
    for (i=0; x[i] != -1; i++)
    {
        sum += x[i];
    }
    return (float)sum/i;
}

int find_min(int* x)
{
    int min = x[0];
    for (int i=0; x[i]!=-1; i++)
    {
        if (x[i]<min)
            min = x[i];
    }
    return min;
}
int find_max(int* x)
{
    int max = x[0];
    for (int i=0; x[i]!=-1; i++)
    {
        if (x[i]>max)
            max = x[i];
    }
    return max;
}
int main()
{
    int* x = make_array();
    printf("The number of entries: %d\n", find_len(x));
    printf("The minimum: %d\n", find_min(x));
    printf("The maximum: %d\n", find_max(x));
    printf("The average: %f\n", av(x));
}