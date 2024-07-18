#include<stdbool.h>
#include<math.h>
#include<stdlib.h>


typedef int (*_int_2int_)(int, int);

int get_max(int a, int b)
{
    return a>b?a:b;
}

int get_min(int a, int b)
{
    return a<b?a:b;
}

int get_sum(int a, int b)
{
    return a+b;
}
int q1_sum(int a, int b)
{
    return(a+b);
}

int q2_sum(int a, int b, int* s)
{
    *s = a+b;
    if(*s %2 == 0)
        return 0;
    else
    {
        return 1;
    }
    
}
void q4_add_equations(int a1,int b1,int c1,int a2,int b2, int c2,int* a,int* b,int* c)
{
    *a = a1+a2;
    *b = b1+ b2;
    *c = c1+ c2;
}

int q5_digit_count(int x)
{
    int result =x;
    int i=0;
    if (x<0)
    {
        result = -1 * x;
    }
    while (result>0)
    {
        i += 1;
        result=result/10;
    }
    return i;
}
int q3_solve_equation(int a, int b, int c,double* x1, double* x2)
{
    double delta = pow(b,2)-(4*a*c);
    if(delta>0)
    {
        *x1 = (double)((-1*b) - sqrt(delta))/(2*a);
        *x2 = (double)((-1*b) + sqrt(delta))/(2*a);
        return 2;
    }
    if(delta==0)
    {
        *x1 = (double)((-1*b) - sqrt(delta))/(2*a);
        *x2 = (double)((-1*b) + sqrt(delta))/(2*a);
        return 1;
    }
    if(delta<0)
    {
        *x1 =0;
        *x2 =0;
        return 0;
    }
}
void q8_fill_array(int* array,int size, int value)
{
    for(int i=0; i<size; i++)
        array[i] = value;
}

void q9_array_copy(int* array1,int size,int* array2)
{
    for(int i=0; i<size; i++)
        array2[i] = array1[i];
}
int q10_max_odd_numbers(int* array1, int size)
{
    int max =0;
    for(int i=0; i<size; i++)
    {
        if (array1[i]%2==1)
        {
            if (max<array1[i])
            {
                max = array1[i];
            }
            
        }
        
    }
    return max;
}

int q11_max_odd_positions(int* array1, int size)
{
    int max =0;
    for(int i=0; i<size; i++)
    {
        if (i%2==1)
        {
            if (max<array1[i])
            {
                max = array1[i];
            }
            
        }
        
    }
    return max;
}
int q13_matrix_compare(int** m1, int** m2,int row,int num)
{
    for (int i=0;i<row; i++)
    {
        for(int j=0; j<num; j++)
        if(*(*(m1 + i)+j) != *(*(m2 + i)+j) )
            return 0;
    }
    return 1;
}
int** q14_matrix_add(int** m1,int** m2, int row, int size)
{
    int** result = (int**) malloc(row * sizeof(int*));
    for (int i=0;i<row; i++)
    {
        int* r =(int*) malloc(size * sizeof(int));
        for(int j=0; j<size; j++)
        result[i][j] = (*(*(m1 + i)+j) + *(*(m2 + i)+j));
    }
    return result;
}

typedef struct
{
    double i;
    double r;
}complex_number;

complex_number* q15_create_complex_number(double i,double r)
{
    complex_number* a = (complex_number*) malloc (sizeof(complex_number));
    a->i = i;
    a->r = r;
    return a;
}

complex_number*  q16_add_complex_number(complex_number* pcn1, complex_number* pcn2)
{
    pcn1->i = pcn1->i + pcn2->i ;
    pcn1->r = pcn1->r + pcn2->r;
    return pcn1;
}

typedef int(func)(int, int);
int q18_aggregate(int* array1,int size,func* f)
{
    int result = (*f)(array1[0], array1[1]);
    for(int i=2; i<size; i++)
        result = (*f)(result, array1[i]);
    return result;
}


    // q7_equation_to_string(1,2,4, buf);
    // REQUIRE( strcmp(buf, "x^2+2x+4") == 0);

// char* q7_equation_to_string(int a,int b,int c,char* buf)
// {
//     if(a!=1)
//     {
//         printf("x^%d+",a);
//         printf("%dx+",b);
//         printf("%d",c);
//     }
//         if(a!=0)
//     {
//         printf("x^%d+",a);
//         printf("%dx+",b);
//         printf("%d",c);
//     }
// }
void q12_reverse_odd_positions(char* buff)
{
    int l=0;
    while (*buff !=0)
    {
        l++;
        buff++;
    }
    for(int i=0; i<l; i++)
    {
        if (i%2==1)
        {
            int x = buff[i];
            buff[i] = buff[l-i-1];
            buff[l-i] = x;
        }
        
    }
}