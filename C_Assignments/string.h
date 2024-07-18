#include<stdio.h>
#include<stdbool.h>

int str_len(char* str)
{
    int i;
    for(i=0; *str !=0; i++)
        str++;
    return i;
}

bool str_compare(char* str1,int size_str1,char* str2, int size_str2 )
{
    for(int i=0; i<size_str1 && str1[i]!=0; i++)
    {
        if(str1[i] != str2[i])
            return false;
    }
    return true;
}
void str_append(char* a,int size,char* b)
{
    int x = str_len(a);
    int y = str_len(b);
    int z = x+y;
    char c[z];
    int idx = 0;
    char* p = a;
    while (*p != 0)
    {
        c[idx]=*p;
        idx++;
        p++;
    }        
    p = b;
    while (*p != 0)
    {
        c[idx]=*p;
        idx++;
        p++;
    }
    c[idx]=0;
    printf("%s", c);
}
void str_copy(char* str1,int s, char* str2, int s1)
{
    int i;
    for(i=0; str1[i]!= 0; i++)
    {
        str2[i] = str1[i];
    }
    str2[i]=0;
    printf("%s", str2);
}
// int array_sum2d(int n, int matrix[2][n])
// {
//     int  sum = 0; 
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < n; j++) {
//             sum += matrix[i][j];
//         }
//     }
//     return sum;
// }
// int  array_sum2d_ptr(int* array, int col, int row)
// {
//     int sum = 0;
//     for (int i=0; i<row; i++){
//         for (int j=0; j<col; j++){
//             sum += *array;
//             array++;
//         }
//     }
//     printf("%d", sum);
// }

// int** create_jagged_matrix(int row, int col)
// {
//     int** matrix = (int**)(malloc(row * sizeof(int*)));
//     for(int i=0; i<row; i++)
//         matrix[i] = (int*)malloc(col * sizeof(int));
// }

// void zero_matrix(int** pMem, int row, int col)
// {
//     for(int i=0; i<row; i++)
//         for(int j=0; j<col; j++)
//             pMem[i][j] = 0;
// }
// int jagged_array_sum(int** jagged_array, int num, int* array)
// {
//     int i;
//     for(i=0; i);
// }