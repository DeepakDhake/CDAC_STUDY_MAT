#include<stdio.h> 

int main( )
{
    int num = 10; 
    char ch = 'A'; 
    float fvar = 11.33; 
    double dvar = 10.33; 

    void *ptr; // generic pointer 

    ptr = &num; // pointer to int 
    printf("%d\n",*(int*)ptr); 

    ptr = &ch; // pointer to char
    printf("%c\n",*(char*)ptr); 

    ptr = &fvar;// pointer to float    
    printf("%.2f\n",*(float*)ptr); 

    ptr = &dvar;  
    printf("%.2lf\n",*(double*)ptr); 
    return 0; 
}
