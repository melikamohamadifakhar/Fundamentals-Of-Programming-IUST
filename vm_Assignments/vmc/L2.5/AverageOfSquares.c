#include<stdio.h>
float average_of_squares0(float* n)
{
    float sum=0;
    for(int i=0; i<*n; i++)
        sum = sum + (i*i);
    float av = sum/(*n - 1);
    return av;
}
float average_of_squares1(float* n)
{
    float sum=0;
    for(int i=1; i<=*n; i++)
        sum = sum + (i*i);
    float av = sum/(*n);
    return av;
}

int main()
{
    float i = 3;
    printf("%f\n", average_of_squares0(&i));
    printf("%f", average_of_squares1(&i));
}

