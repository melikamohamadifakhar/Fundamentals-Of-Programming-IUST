#include<stdlib.h>
#include<malloc.h>
#include<stdio.h>

int* repeat_value(int value,int count)
{
    int i;
    int* result = (int*) malloc(count * sizeof(int));
    for(i=0; i<count; i++)
    {
        result[i] = value;
    }
    return result;
}

int* range(int from, int to)
{
    int d = to-from+1;
    int idx=0;
    int i;
    int* result = (int*) malloc(d * sizeof(int));
    for(i=from; i<=to; i++)
    {
        result[idx]=i;
        idx++;
    }
    result[idx]=0;
    return result;
}

typedef struct point
{
    int x;
    int y;
    int z;
}Point;
int main()
{
    Point a;
    a.y = 45;
}


