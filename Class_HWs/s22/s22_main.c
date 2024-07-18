#include <math.h>
#include <stdio.h>

void is_on(int number, int bit)
{
    int result = pow(2, (bit -1));
    if (number &= result)
    {
        printf("true");
    }
}
void is_on1(int number, int bit)
{
    int result = number >> (bit-1);
    if(result &= 1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
}

int shift(int i, int c)
{
    int y = i >> c;
    printf("%d", y);
}


int main()
{
    is_on1(4, 3);
    // int a,b,c;
    // printf("Please enter any two numbers: \n");
    // scanf("%d %d", &a, &b);
    // c =  a + b;
    // printf("The addition of two number is: %d", c);
    // int w = 5;
    // w = w |= 3;
    // int s = w &=4;
    // is_on(5, 3);
    // shift(8, 2);
    return 0;
}
