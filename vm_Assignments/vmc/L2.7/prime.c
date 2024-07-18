#include<stdbool.h>
#include<stdio.h>
#include<math.h>
bool is_divisible(int a, int b)
{
    if(a%b ==0)
        return true;
    else
    {
        return false;
    }
}

bool is_prime(int number)
{
    if(number>1)
    {
        for(int i=2; i<number; i++)
        {
            if(is_divisible(number, i))
                return false;
            else
            {
                return true;
            }
        }
    }
}
int main()
{
    is_prime(4);
    printf("%s", is_divisible(5, 2));
}
