#include<stdio.h>
void is_leap_year(int year)
{
    if(year % 400 ==0 || (year % 4 == 0 && year % 100 !=0))
    {
        printf("true\n");
    }
    else
    {
    printf("false\n");
    }
}

int main()
{
    is_leap_year(1792);
    is_leap_year(1796);
    is_leap_year(1800);
    is_leap_year(1804);
    is_leap_year(1900);
    is_leap_year(1904);
    is_leap_year(2000);
}