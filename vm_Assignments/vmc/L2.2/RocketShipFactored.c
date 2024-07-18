#include<stdio.h>
void cone_part()
{
    printf("    ^\n");
    printf("   /|\\\n");
    printf("  //|\\\\ \n");
    printf(" ///|\\\\\\ \n");
}
void body()
{
    for(int i=0; i<4; i++)
    printf("+*******+\n");
    printf("+-------+\n");
    for(int i=0; i<4; i++)
    printf("+*******+\n");
    printf("+-------+\n");
}
void make_rocket()
{
    cone_part();
    body();
    cone_part();
}
void main()
{
    make_rocket();
}
