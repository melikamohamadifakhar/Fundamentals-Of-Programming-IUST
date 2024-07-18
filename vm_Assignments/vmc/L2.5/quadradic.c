#include<stdio.h>
#include<math.h>
void quardical(float a, float b, float c)
{
    float delta = (b*b) - (4*a*c);
    if(delta>=0)
    {
        float x1 = ((-1 * b) + sqrt(delta))/(2*a);
        float x2 = ((-1 * b) - sqrt(delta))/(2*a);
        printf("the first root is : %.2f \n", x1);
        printf("the second root is : %.2f", x2);
    }
    else
    {
        printf("The equation has no real roots.");
    }
    
}
int main()
{
    quardical(1, 3, -10);
}