#include<stdio.h>


void print_args1(const char* argv[], int argc)
{
    for(int i=0; i<argc; i++)
        printf("%s\n", argv[i]);
}

void print_args2(char* argv[], int argc)
{
    for(int i=0; i<argc; i++)
    {
        char* buf = argv[i];
        printf("%s\n", buf);
    }    
}

void print_args3(const char** argv, int argc)
{
    char** ppc = (char**) argv;
    int i = 0;
    while (i < argc)
    {
        char* pch = *ppc;
        printf("%s\n", pch);
        ppc++;
        i++;
    }
}

// void get_arg_lens(const char** argv, int argc)
// {
//     char* x = **argv;
//     int i;
//     for(i=0; i<argc; i++)
//     {
//         int f;
//         for(f=0; *argv!=0; f++)
//         {
//             *argv++;
//         }
//     }
// }

int main(int argc, char const *argv[])
{   
    // // int arg_lengths[10];
    // // int buf_size;
    // get_arg_lens(argv, argc);
    // // printf("There are %d args\n", argc);
    // // for(int i=0; i<buf_size; i++)
    // // {
    // //     printf("Arg %d has length %d", i, arg_lengths[i]);
    // // }

    // printf("number of args: %d\n", argc);
    print_args1(argv, argc);
    // // print_args2(argv, argc);
    // print_args3(argv, argc);
    return 0;
}