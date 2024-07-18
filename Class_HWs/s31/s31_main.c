#include<stdio.h>
#include<stdlib.h>

int* do_sum(int* a, int* b, int size)
{
    int* sum_array = (int*) malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
        sum_array[i] = a[i] + b[i];
    return sum_array;
}

int* do_multiply(int* a, int* b, int size)
{
    int* sum_array = (int*) malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
        sum_array[i] = a[i] * b[i];
    return sum_array;
}

int* do_divide(int* a, int* b, int size)
{
    int* sum_array = (int*) malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
        sum_array[i] = a[i] / b[i];
    return sum_array;
}

int* do_subtract(int* a, int* b, int size)
{
    int* sum_array = (int*) malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
        sum_array[i] = a[i] - b[i];
    return sum_array;
}

typedef int (*fp_alinejad)(int,int);

int* do_action(int* a, int* b, int size, fp_alinejad op)
{
    int* result_array = (int*) malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
        result_array[i] = op(a[i],b[i]);
    return result_array;
}

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}

typedef int (*fp_int)(int);

int pow2(int x)
{}

int plus10(int x)
{}

int sqrt(int x)
{}

int negate(int x)
{}

int do_action(fp_int* actions, int fp_size, int x)
{

}

int main()
{
    fp_int my_actions[4] = {pow2, plus10, sqrt, negate};

    int a[] = {5, 4, 3};
    int b[] = {2, 3, 7};

    // fnptr p = sum;

    int* psum = do_action(a, b, 3, mul);

    for(int i=0; i<3; i++)
        printf("%d\n", psum[i]);
    
    free(sum);
}