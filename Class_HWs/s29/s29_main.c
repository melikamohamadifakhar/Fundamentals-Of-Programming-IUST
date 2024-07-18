#include <stdio.h>

const int row_count = 3;
const int col_count = 3;

void zeromemory(int* pMem, int size)
{
    for(int i=0; i<size; i++)
        pMem[i]=0;

}

void setmatrix(int* pMem, int i, int j, int value)
{
    pMem[i * col_count + j] = value;
}

int getmatrix(int* pMem, int i, int j)
{
    return pMem[i * col_count + j];
}

void printrow(int* pMem, int row)
{
    for(int i=0; i<col_count; i++)
        printf("%d ", getmatrix(pMem, row, i));
    printf("\n");
}

void printmatrix(int* pMem)
{    
    for(int j=0; j<row_count; j++)
        printrow(pMem, j);
    
    printf("\n");
}


//#define n 10

int main(int argc, char const *argv[])
{
    // char* phello = "hello world";

    // int w=97 | (98 << 8) | (99 << 16);
    // char * pch = (char *) &w;
    // printf("%d\n", w);
    // printf("%s\n", pch);
    // pch[0] = 'A';
    // pch[1] = 'B';
    // pch[2] = 'C';
    // pch[3] = 0;
    // printf("%s\n", pch);
    // printf("%d\n", w);

    // unsigned long x;

    int matrix[9];

    printmatrix(matrix);
    zeromemory(matrix, 25);
    printmatrix(matrix);

    setmatrix(matrix, 0, 0, 1);
    setmatrix(matrix, 2, 2, 1);
    printmatrix(matrix);

    return 0;
}