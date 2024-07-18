#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define M_PI 3.1415926535897932
int factorial(int x)
{
    if(x==0)
        return 1;
    int a=1;
    for(int i=0; i<x; i++)
    {
        a = a * (x);
        x--;
    }
    return a;
}
float eulers_constant(float precision)
{
    float n = 0.0;
    float current = 0.0;
    float nextt = precision +1.0;
    while (nextt>precision)
    {
        nextt = (float)(1.0/(factorial(n)));
        if (nextt>precision)
        {
            current = current + (float)(1.0/factorial(n));
            n = n + 1;
        }
    }
    return (float)current;
}


float exp1(int x, float precision)
{
    int n =0;
    float current =0;
    float nexxt = precision+1;
    while (nexxt>precision)
    {
        float p = power(x, n);
        nexxt = p/(float)(factorial(n));
        if (nexxt>precision)
        {
            current = current + nexxt;
            n = n + 1;
        }
        
    }
    return current;
}


float abs1(float x)
{
    if (x>=0)
    {
        return x;
    }
    else
    {
        x = -1 * x;
        return x;
    }
}

bool near(float x, float y, float closeness)
{
    float difference = x - y;
    float d = abs1(difference);
    if (d>closeness)
        return false;
    return true;
}
float exp21(int x, float precision)
{
    float m = 1;
    float current =0;
    float nextt =1;
    while (nextt > precision)
    {
        current = current + nextt;
        nextt = nextt * x/m;
        m = m+1;
    }
    return current;
}
float taylorsin1(float x, float precision)
{
    x = x *(3.14)/180.0;
    int n = 1;
    float sum = 0;
    float w = 1;
    float sign = 1 ;
    while (abs1(w)>precision)
    {
        float p = pow(x,n);
        w = sign * ( p / factorial(n));
        if( abs1(w)> .000001)
        {
            sum = sum + w ;
            n = n + 2;
            sign = -1 * sign;
        }
    }
    return sum ;
}

float square_root1(int x, float precision)
{
    float lower =0; 
    float upper =x;
    float mid;
    while ((upper-lower)>precision)
    {
        mid = (lower+upper)/2;
        float mid2 = mid*mid;
        if (mid2==x)
            return mid;
        if (mid2<x)
            lower = mid;
        if (mid2>x)
            upper = mid;
    }
    return mid;
}
float root1(int x,int n, float precision)
{
    float lower =0; 
    float upper =x;
    float mid;
    while ((upper-lower)>precision)
    {
        mid = (lower+upper)/2;
        float midpo = power((int)(mid), n);
        if (midpo==x)
            return mid;
        if (midpo<x)
            lower = mid;
        if (midpo>x)
            upper = mid;
    }
    return mid;
}
float ln1(int x, float precision)
{
    float e = eulers_constant(precision);
    int upper = x;
    int lower = 0;
    float mid;
    while (upper-lower>precision)
    {
        mid = (lower+upper)/2;
        if (power(e, mid)==x)
            return mid;
        if (power(e, mid)>x)
            upper = mid;
        if (power(e, mid)<x)
            lower = mid;
    }
    return mid;
}
int main()
{
    printf("%f\n", taylorsin1(30, .1));
    printf("%f\n", eulers_constant(.1));
    printf("%f\n", exp1(1, .01));
    printf("%f\n", abs1(-2));
    printf("%d\n", near(0.5, 0.3, .3));
    printf("%f\n", exp21(1, .01));
    printf("%d\n", near(exp1(1, .01), exp21(1, .01), .1));

    printf("%f\n",square_root1(25,.001));
    printf("%f\n",root1(64,3,.001));
    printf("%f", ln1(1, .000001));
}
