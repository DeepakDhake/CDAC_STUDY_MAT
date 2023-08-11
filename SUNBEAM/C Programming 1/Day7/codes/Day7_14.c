#include<stdio.h> 
#include<stdlib.h> 

int main( )
{
    // calloc => void* calloc( size_t n , size_t size); 
    // Heap section 
    int *ptr; 
    ptr = (int*)calloc(3 , sizeof(int)); // request

    if(ptr == NULL) // check 
    {
        printf("Fail to allocated memory"); 
        exit(1); 
    }
    int i; 
    for(i=0 ; i<=2 ; i++)
          *(ptr + i ) = 10 * ( i + 1);   

    for(i=0 ; i<=2 ; i++)
        printf("%d",*(ptr + i)); // *(4000 + 0)=> *(4000)=>10  
    
    free( ptr );// To avoid memory leakage  
    ptr = NULL; // To avoid dangling pointer 
    
    return 0;
}
