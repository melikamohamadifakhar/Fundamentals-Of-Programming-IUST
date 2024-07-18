#include<stdio.h>
#include<stdbool.h>
int get_len(char* pch)
{
    int i;
    for (i=0; *pch!=0; i++)
    {
    pch++;
    }
    return i;
}
void reverse(char* pch)
{
    int l = get_len(pch);
    for(int i = l-1; i>=0; i--)
    {
        printf("%c", pch[i]);
    }
    
}
void print_str(char* p)
{
    // char* p1 = p;
    while (*p != 0)
    {
        printf("%c", *p);
        p++;
    }
}
void reverse2(char* p, int size)
{
    char* p1 = p;
    p = p+(size-2);
    while (p != p1-1)
    {
        printf("%c", *p);
        p--;
    }
}
bool compare(const char* buf1, int size1, const char* buf2, int size2)
{
    int len1=0;
    int len2=0;
    while(*buf1 == *buf2 && (buf1 != 0) && (buf2 !=0) && len1<size1 && len2<size2)
    {
        buf1++;
        buf2++;
        len1++;
        len2++;
    }
    return (*buf1 == *buf2);
}

int main()
{
    char c[10]="Melika";
    // char* b = &c[0];
    // get_len(b);
    // print_str(&c);
    // reverse(&c);
    reverse2(&c, 7);
    return 0;
}