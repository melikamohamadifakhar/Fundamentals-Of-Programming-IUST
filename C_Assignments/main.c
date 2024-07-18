#include<stdbool.h>
bool str_compare(char* str1,int size_str1,char* str2, int size_str2 )
{
    for(int i=0; i<size_str1 && *str1!=0; i++)
    {
        if(str1[i] != str2[i])
            return false;
    }
    return true;
}
int main()
{
    char pch1[4] = 'a';
    char pch2[4] = 'a';
    str_compare(pch1, 10, pch2, 10);
}