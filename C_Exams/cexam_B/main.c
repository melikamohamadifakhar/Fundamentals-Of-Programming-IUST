int q3_solve_equation(int a, int b, int c,double* x1, double* x2)
{
    int delta = pow(b,2)-(4*a*c);
    if(delta>0)
    {
        *x1 = ((-1*b) - sqrt(delta))/(2*a);
        *x2 = ((-1*b) + sqrt(delta))/(2*a);
        return 2;
    }
    if(delta==0)
    {
        *x1 = ((-1*b) - sqrt(delta))/(2*a);
        *x2 = ((-1*b) + sqrt(delta))/(2*a);
        return 1;
    }
    if(delta<0)
    {
        return 0;
    }
}
int main()
{
    double* x1;
    double* x2;
    q3_solve_equation(1, -5, 6,x1, x2);
}