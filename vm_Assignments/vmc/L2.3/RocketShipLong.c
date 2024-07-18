#include<stdio.h>
void cone_part(int n)
{
    if(n%2 !=0)
    {
        int center = (n+1)/2;
        for(int i=1; i<=center; i++)
            printf(" ");
            printf("^\n");
            for(int j=1; j<center; j++)
            {
                for(int i=1; i<=center-j; i++)
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
void body(int n)
{

    for(int i=0; i<4; i++)
    {
        printf("+");
        for(int j=0;j<=n-1 ;j++)
            printf("*");
        printf("+\n");
    }
    printf("+");
    for(int j=0;j<=n-1 ;j++)
        printf("-");
        printf("+\n");

    for(int i=0; i<4; i++)
    {
        printf("+");
        for(int j=0;j<=n-1 ;j++)
            printf("*");
        printf("+\n");
    }
        printf("+");
    for(int j=0;j<=n-1 ;j++)
        printf("-");
        printf("+\n");
}

void main()
{
    cone_part(7);
    body(7);
    cone_part(7);
}