#include<stdio.h>
void CToF()
{
    int c;
    printf("Celsius : ");
    scanf("%d", &c);
    float f = (c * (9.0/5.0)) + 32;
    printf("Fahrenheit : %.2f", f);
}
int main()
{
    CToF();
}