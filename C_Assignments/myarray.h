int  array_sum(int* array, int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += array[i];
    return sum;
}
int array_sum_ptr(int* array, int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += *array;
        array++;
    }
    return sum;
}

int array_sum2d(int rows,int col, int matrix[][2])
{
    int  x = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            x += matrix[i][j];
        }
    }
    return x;
}
int  array_sum2d_ptr(int col, int row, int* array)
{
    int sum = 0;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            sum += *array;
            array++;
        }
    }
    return sum;
}
int jagged_array_sum(int** jagged_vector,int* size_vector,int row_count)
{
    int sum=0;
    for(int i=0; i<row_count; i++)
        for(int j=0; j<size_vector[i]; j++)
            sum += jagged_vector[i][j];
    return sum;
}
int jagged_array_sum_ptr(int** jagged_vector, int* size_vector, int row_count)
{
    int sum=0;
    for(int i=0; i<row_count; i++)
    {
        for(int j=0; j<*size_vector; j++)
        {
            sum += *(*(jagged_vector + i)+j);
        }
        *(size_vector++);
    }
    return sum;
}