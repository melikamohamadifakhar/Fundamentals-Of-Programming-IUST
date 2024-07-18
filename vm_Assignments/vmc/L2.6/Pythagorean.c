#include<stdio.h>
void Pythagorean()
{
    for(int a=1; a<100; a++)
    {
        for(int b=1; b<100; b++)
        {
            for(int c=1; c<100; c++)
            {
                if(a<b && (a*a)+(b*b)==(c*c))
                printf("a=%d  b=%d  c=%d\n", a, b, c);
            }
        }
    }
}
int main()
{
    Pythagorean();
}
