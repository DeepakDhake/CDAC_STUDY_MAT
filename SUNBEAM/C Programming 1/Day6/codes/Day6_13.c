#include<stdio.h> 

int main( )
{

    int num1 = 10; 
    int num2 = 20; 
    int * const ptr = &num1; 
  //int *  ptr const  = &num1; // NOT OK  
//ptr is a constant pointer pointing to a non constant int variable       
    
    printf("%d ",*ptr);// 10 
    *ptr = 20; 
    printf("%d ",*ptr);// 20 
    
    //ptr = &num2; // NOT OK 
    
    return 0; 
}