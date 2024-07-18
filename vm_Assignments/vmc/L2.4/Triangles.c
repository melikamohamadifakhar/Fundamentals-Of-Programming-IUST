#include<stdio.h>
void print_left_triangle(char c, int base)
{
    int i;
    int j;
    for (i = 1; i <= base; i++) 
    {
        for (j =1; j <=i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}
void print_right_triangle(char c, int base)
{
    int i;
    int s;
    int j;
    int x= base;
    for(i=1; i<=base; i++)
    {
        for(s=x-2; s>=0; s--)
        {
            printf(" ");
        }
        for (j =1; j <=i; j++) 
        {
            printf("*");
        }
        printf("\n");
        x--;
    }
}
int main()
{
    char c = '*';
    int base = 5;
    print_left_triangle(c, base);
    printf("\n");
    print_right_triangle(c, base);
    return 0;
}




// import math
// def print_left_triangle(char, base):
//     for i in range(1, base+1):
//         x = i * char
//         print(x)

// def print_right_triangle(char, base):
//     for i in range(1, base+1):
//         x = i * char
//         y = " " * (base-i)
//         print(y + x)

// print_left_triangle("*", 3)
// print_right_triangle("*", 5)