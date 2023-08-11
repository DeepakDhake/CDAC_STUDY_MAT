#include <stdio.h>

int main()
{
    int num = 10;
    char ch = 'A';
    float fvar = 11.33;
    double dvar = 10.33;

    int *ptr = &num;
    char *cptr = &ch;
    float *fptr = &fvar;
    double *dptr = &dvar;

    printf("%d",sizeof(*ptr));// 4 
    printf("%d",sizeof(*cptr));//1 
    printf("%d",sizeof(*fptr));// 4
    printf("%d",sizeof(*dptr));// 8 
    return 0;
}