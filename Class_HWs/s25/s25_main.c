#include<stdio.h>
#include<stdbool.h>

bool concat(
    char *pch1, int size1, 
    char* pch2, int size2, 
    char* pchTarget, int targetsize)
{
    char* pcht = pchTarget;
    int i1 = 0;
    for (char* pch = pch1; *pch && (i1<size1) && (i1<targetsize); pch++, pcht++, i1++)
        *pcht = *pch;

    if (i1 == targetsize)
        return false;

    int i2 = 0;
    for (char* pch = pch2; *pch && (i2<size2) && (i1+i2 < targetsize); pch++, pcht++, i2++)
        *pcht = *pch;
    
    if (i1+i2 == targetsize)
        return false;

    if (i1+i2+1 <= targetsize)
        *pcht = 0;
    else
        return false;
    
    return true;
}

void main()
{
    const char f[10] = "melika";
    const char l[10] = "mohamadi";
    char fl[20];
    int idx;
    char* x = &f;
    for(idx=0; *x!=0; idx++)
    {
        fl[idx] = *x;
        x++;
    }
    char* y= &l;
    while (*y !=0)
    {
        fl[idx] = *y;
        y++;
        idx++;
    }
    fl[idx] = 0;
    printf("%s", fl);


    char buff1[5] = "Melika";
    char buff2[9] = "mohamadi";
    char buff3[15];
    bool success = concat(&(buff1[0]), 5, &(buff2[0]), 9, &(buff3[0]), 15);
    if (! success)
        printf("Error\n");
        
    printf("%s\n",buff3);
}

    