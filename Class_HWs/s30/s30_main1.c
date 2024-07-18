// #include<stdio.h>
// #include<stdlib.h>

// int strlen(const char* string)
// {
//     int i=0;
//     while (*(string++))
//     {
//         i++;
//     }
//     return i;
// }

// char* duplicate_string(const char* string)
// {
//     int l = strlen(string)+1;
//     char* strcopy = (char*)malloc(l * sizeof(char));
//     int i=0;
//     while (*string)
//     {
//         strcopy[i++] = *(string++);
//     }
//     strcopy[i] =0;
//     return strcopy;
// }

// int* create_matrix(int row, int col)
// {
//     return (int*) malloc(row * col * sizeof(int));
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
// int main()
// {
//     int* matrix = create_matrix(10, 10);
//     char string[] = "hello world";
//     char* my_copy = (char*) string;
//     char* duplicated = duplicate_string(string);
//     string[3] = 'S';
//     printf("%s\n%s\n%s\n", string, duplicated, my_copy);
//     free(duplicated);
    
// }
struct student
{
    char name[10];
    int age;
    float grade;
}a;
int main()
{
    s.grade = 18.5;
}