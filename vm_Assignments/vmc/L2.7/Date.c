#include<stdio.h>

int days_in_month(int year,int monthNumber)
{
    if(monthNumber == 1)
        return(31);
    if(monthNumber == 2)
    {
        if(year % 400 ==0 || (year % 4 == 0 && year % 100 !=0))
            return 29;
        else
            return 28;
    }
    if(monthNumber == 3)
        return(31);
    if(monthNumber == 4)
        return(30);
    if(monthNumber == 5)
        return(31);
    if(monthNumber == 6)
        return(30);
    if(monthNumber == 7)
        return(31);
    if(monthNumber == 8)
        return(31);
    if(monthNumber == 9)
        return(30);
    if(monthNumber == 10)
        return(31);
    if(monthNumber == 11)
        return(30);
    if(monthNumber == 12)
        return(31);
}
int days_before_date(int year, int monthNumber, int day)
{
    int sum=0;
    for(int i=1; i<monthNumber; i++)
    {
        sum = sum + days_in_month(year, i);
    }
    sum = sum + day -1;
    return sum;
}
int main()
{
    printf("%d\n", days_before_date(2014, 12, 31));
    printf("%d", days_in_month(800,2));
}
