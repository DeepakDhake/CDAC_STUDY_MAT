#include<stdio.h> 

int main( )
{
    int num1 = 10;
    const int *ptr = &num1; 

    printf("%d ",*ptr); //10 
    *ptr = 20;  // NOT OK 
    printf("%d ",*ptr); //20 
    return 0; 
}
// int main( )
// {
//     const int num1 = 10;
//     int *ptr = &num1; 

//     printf("%d ",*ptr); //10 
//     *ptr = 20;  
//     printf("%d ",*ptr); //20 
//     return 0; 
// }