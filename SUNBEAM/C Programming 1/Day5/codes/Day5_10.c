#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num; 
    int **pptr = &ptr;
 //pptr is a pointer which is storing address of integer pointer    
 //pptr is a pointer which is pointing to pointer to a integer    
    
    printf("%u ",pptr); //500 
    printf("%u ",&ptr); //500
    
    return 0; 
}