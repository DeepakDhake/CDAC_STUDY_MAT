#include<stdio.h> 
int main( )
{
    int num = 10; 
    int *ptr = &num; // ptr declare + init  
    
    printf("num = %d\n",num); //10 

    printf("*ptr = %d\n",*ptr); // dereferencing opr / indirection opr 
    //* => value-at 
    /*  
                *ptr 
                valueat(ptr)
                valueat(100)
                10 
    */ 
    
    return 0; 
}