#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num; 
    int **pptr = &ptr;

    printf("%u ",**pptr); 
    /*
            **pptr 
            valueat(valueat(pptr))
            valueat(valueat(500))
            valueat(100)
            10 
    */

    **pptr = 20; 
    printf("\n **pptr = %u",**pptr);  
    printf("\n num = %d",num);   
    return 0; 
}