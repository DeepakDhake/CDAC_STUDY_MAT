#include<stdio.h> 

int main( )
{
    const int num1 = 10; 
    const int num2 = 10; 
    const int * const ptr = &num1; 
//ptr is a constant pointer pointing to a constant int variable     
    
    printf("%d ",num1); //10 
    printf("%d ",*ptr);//10 

    //*ptr = 20; // NOT OK  
    //ptr = &num2; // NOT OK 
    return 0; 
}