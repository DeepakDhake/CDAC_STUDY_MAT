#include<stdio.h> 
int main( )
{
    int num = 10; 
    int *ptr = &num; // ptr declare + init  
    // referencing operation 
    //ptr is pointer to a integer 
    
    printf("num = %d\n",num); //10 
    printf("&num = %d\n",&num); //100 
    printf("ptr = %u\n",ptr); //100 
    printf("&ptr = %u\n",&ptr); //500    
    
    return 0; 
}