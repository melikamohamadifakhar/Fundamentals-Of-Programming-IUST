#include<stdio.h>
void print_left_triangle(int base)
{
    for(int i=1; i<=base; i++)
    {
        if(i%2==0)
        {
            for(int d=1; d<=i; d++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(int d=1; d<=i; d++)
            {
                printf("%c",'%');
            }
            printf("\n");
        }
    }
}
int main()
{
    print_left_triangle(4);
}
