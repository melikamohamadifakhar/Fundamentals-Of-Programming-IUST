#include<stdio.h>
#include <assert.h>
int average(int* list, int len)
{
    float sum=0;
    int i;
    for(i=0; i<len; i++)
        sum += list[i];
    float av = (sum)/len;
    return av;
}
int main()
{
    int list[] = {1, 2, 4, 5};
    assert(average(list, 4) == 3);
}