#include<stdio.h>
const int row=3;
const int col=3;
void make_matrix()
{
    int a[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void zeromemory(int* pMem, int size)
{
    for(int i=0; i<size; i++)
        pMem[i]=0;
}
void setmatrix(int* pMem, int i, int j, int value)
{
    pMem[i * col + j] = value;
}
int getmatrix(int* pMem, int i, int j)
{
    return pMem[i * col + j];
}

void printrow(int* pMem, int row)
{
    for(int i=0; i<col; i++)
        printf("%d ", getmatrix(pMem, row, i));
    printf("\n");
}

void printmatrix(int* pMem)
{    
    for(int j=0; j<row; j++)
        printrow(pMem, j);
    
    printf("\n");
}

int main()
{ 
    int a[3][3];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // make_matrix();
    // // int a;
    // int i=0;
    // int j=0;
    // int matrix[9];
    // zeromemory(matrix, 9);
    // for(a=0; a<row; a++)
    // {
    //     setmatrix(matrix, i, j, 1);
    //     i++;
    // }
    // i=0;
    // for(a=0; a<row; a++)
    // {
    //     setmatrix(matrix, i+1, j+1, 1);
    //     i++;
    // }

    // i=0;
    //     setmatrix(matrix, i+2, j+2, 1);
    // printmatrix(matrix);
}