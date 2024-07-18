#include<stdbool.h>
#include<math.h>
#include<stdlib.h>


typedef bool (*__cmp_fn__)(int,int);

bool is_bigger(int a, int b)
{
    return a>b;
}

bool is_smaller(int a, int b)
{
    return a<b;
}

int q1_get_max(int a, int b, int c){
    int result[3] = {a, b, c};
    int i;
    int max=0;
    for(i=0; i<3; i++){
        if (result[i]>max)
        {
            max = result[i];
        }
    }
    return max;
}

bool q2_is_right_angled(int a, int b, int c){
    if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)){
        return true;
    }
    else
    {
        return false;
    }
}

int q3_array_fsum(int* a,int* b, int* c, int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum += ((a[i] * b[i]) + c[i]);
    }
    return sum;
    
}

int len(char* a)
{
    int c=0;
    while (*a !=0)
    {
        c++;
        a++;
    }
    return c;
}

void q4_string_shuffle(char* str1){
    int l = len(str1);
    for (int i=0; i<l;i++)
    {
        if (i%2 == 0)
        {
            char temp;
            temp = str1[i];
            str1[i] = str1[i+1];
            str1[i+1] = temp;
        }
        
    }
    
}
int count_pattern(const char *array, const char * pattern){
    int i=0;
    int count =0;
    while (array[i] != 0)
    {
        if (array[i] == pattern[0]){
            int j=0;
            int iseq = 1;
            while (pattern[j] != 0){
                if (array[i+j] != pattern[j]){
                    iseq = 0;
                    break;
                }
                j++;
            }
            count += iseq;
        }
        i++;
    }
    return count;
}
// int q5_last_index_of(char* s, char* y)
// {
//     return 0;
// }
// void q6_sort(int* a,int* b,int* c, int* d)
// {
//     int max1=0;
//     int max=0;
//     int max2=0;
//     int max3=0;
//     int lis[4] = {*a, *b, *c, *d};
//     for (int i = 0; i < 4; i++)
//     {
//         if (lis[i]>max1)
//         {
//             max1 = lis[i];
//         }
//         *a = max1;

//         if (lis[i+1]>max)
//         {
//             max = lis[i+1];
//         }
//         *b = max;
//         if (lis[i+2]>max2)
//         {
//             max2 = lis[i+1];
//         }
//         *c = max2;
//         if (lis[i+3]>max2)
//         {
//             max3 = lis[i+2];
//         }
//         *d = max3;
// }