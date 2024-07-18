int _plus2(int a) { return a+2;}
int _mult2(int a) { return a*2;}
int _negate(int a) { return a*-1;}
int _add(int a, int b) {return a+b;}
int _sub(int a, int b) {return a-b;}
int _mul(int a, int b) {return a*b;}
int _div(int a, int b) {return a/b;}
int _max(int a, int b) {return a<b?b:a;}
int _min(int a, int b) {return a<b?a:b;}

typedef int(*pfn)(int);
void apply(int* pf,pfn p)
{
    *pf = p(*pf);
}

typedef int(*pf)(int, int);
void apply2(int a, int b, int* c, pf p)
{
    *c = p(a,b);
}

typedef int(*p)(int);
void apply_fn_list(int* n,p* sth, int a)
{
    for(int i=0; i<a; i++)
    {
        *n = sth[i](*n);
    }
}

typedef int(*pfnx)(int, int);
pfnx get_func(char a)
{
    if(a=='+')
        return &_add;
    if(a=='-')
        return &_sub;
    if(a=='*')
        return &_mul;
    if(a=='/')
        return &_div;
    else
    {
        return NULL;
    }
}

typedef struct _new
{
    int n;
    _new* (*f)(_new*);
}_self;

_self* self_func(_self* p)
{
    (*p).n += 1;
    return p;
}