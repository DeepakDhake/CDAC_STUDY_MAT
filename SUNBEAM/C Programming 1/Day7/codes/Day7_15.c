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
    
    //void* realloc(void *ptr , size_t size);  
    
    ptr = (int*)realloc(ptr , 5 * sizeof(int)); 

    ptr[3] = 33; // *(ptr + 3) => *(4000 + 3)=> *(4012)
    ptr[4] = 44;   

    for(i=0 ; i<=4 ; i++)
        printf("%d ",*(ptr + i)); // *(4000 + 0)=> *(4000)=>10  
   
    free( ptr );// To avoid memory leakage  
    ptr = NULL; // To avoid dangling pointer 
    
    return 0;
}
