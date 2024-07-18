#include<stdio.h>
#include<math.h>
void FToC()
{
    int f;
    printf("Fahrenheit : ");
    scanf("%d", &f);
    float c = (f-32) *(5.0/9.0);
    printf("Celsius : %.2f", c);
}
int main()
{
    FToC();
}