#include<stdio.h>
// int m_24()
// {
//     int test[10];
//     for (int i=0; i<10; i++)
//     {
//         test[i] = i;
//         printf("%d\t", test[i]);
//     }
// }
// int main()
// {
//     m_24();
//     int test[] = {6, 5, 7, 9, 2};
//     printf("%d", test[3]);
//     return 0;
// }

int main()
{
    int a[10];
    a[0] = 0;
    a[1] = 1;
    printf("%d\t %d\t", a[0], a[1]);
    for(int i = 2; i<10; i++) 
    {
        a[i] = a[i-1] + a[i-2];
        printf("%d\t", a[i]);
    }
}
// int main()
// {
//     int p[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
//         5, 6, 7, 3, 7, 8, 8, 4, 2, 2,
//         6, 8, 5, 2, 4, 7, 8, 9, 0, 1};
//     int f[10];
//     for(int i=0; i<10; i++)
//     {
//         f[i] = 0;
//     }
//     for(int j=0; j<30; j++)
//     {
//         f[p[j]] = f[p[j]] + 1;
//     }
//     for(int i=0; i<10; i++)
//     {
//         printf("%d\t, %d\n",i , f[i]);
//     }
//     return 0;
// }