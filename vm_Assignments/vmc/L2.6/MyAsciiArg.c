#include<stdio.h>
void print_cone(int n)
{
    if(n%2 !=0)
    {
        int center = (n+1)/2;
        for(int i=1; i<center; i++)
            printf(" ");
            printf("^\n");
            for(int j=1; j<center; j++)
            {
                for(int i=1; i<center-j; i++)
                {
                    printf(" ");
                }
                for(int i=1; i<=j; i++)
                {
                    printf("%c", '/');
                }
                printf("%c", '|');
                for(int i=1; i<=j; i++)
                {
                    printf("%c", '\\');
                }
                printf("\n");
                }
            }
}
int main()
{
    print_cone(7);
}