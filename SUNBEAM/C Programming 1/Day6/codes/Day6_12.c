#include<stdio.h> 

int main( )
{
    const int num = 10; 
    const int num2 = 20; 

    // All are valid and same 
     const int *ptr = &num;
    //int const *ptr = &num;
    //const int const *ptr = &num;  
//ptr is a non constant pointer pointing to constant integer variable 

    printf("%d ",num); // 10 
    printf("%d ",*ptr); // 10 

    //*ptr = 20; // NOT OK 
    
    ptr = &num2; // OK 
    return 0; 
}