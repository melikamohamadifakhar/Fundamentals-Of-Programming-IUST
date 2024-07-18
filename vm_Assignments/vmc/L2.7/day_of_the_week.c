#include<stdio.h>
const char* day_of_the_week(int dayNumber)
{
    if(dayNumber == 0)
        return "sunday";   
    if(dayNumber == 1)
        return "monday";
    if(dayNumber == 2)
        return "tuesday";
    if(dayNumber == 3)
        return  "wednesday";
    if(dayNumber == 4)
        return "thursday"; 
    if(dayNumber == 5)
        return "friday";
    if(dayNumber == 6)
        return "saturday";
}
int main()
{
    printf("%s", day_of_the_week(5));
}
