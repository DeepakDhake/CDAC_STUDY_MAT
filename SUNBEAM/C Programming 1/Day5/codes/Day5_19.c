#include<stdio.h> 
int fun( int **ptr ); 
int main( )
{
    int num = 10; 
    int *ptr = &num; 
    printf("\nBefore call %d ",num); //10  
    fun( &ptr ); 
    printf("\nAfter call %d ", num); // 30   
    return 0; 
}

int fun( int **ptr )
{
        **ptr = **ptr + 20; 
        printf("\n Inside the function %d",**ptr); // 30 
}



// int fun( int *ptr ); 
// int main( )
// {
//     int num = 10; 
//     printf("\nBefore call %d ",num); //10  
//     fun( &num ); 
//     printf("\nAfter call %d ", num); // 30   
//     return 0; 
// }

// int fun( int *ptr )
// {
//         *ptr = *ptr + 20; //30 
// }