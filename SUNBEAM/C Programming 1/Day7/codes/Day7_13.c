#include<stdio.h> 
#include<stdlib.h> 
int main( )
{
    //int *ptr; // uninit pointer ( wild pointer ) 
     //int *ptr = NULL; 
    // dynamic memory allocation ( runtime ) 
    //malloc , calloc , realloc  
    
    // void* malloc(size_t size); 

    float *ptr; 
    ptr=(float*)malloc(sizeof(float));  // Request 

    if(ptr == NULL)// check if avail 
    {
        printf("Fail to allocate memory"); 
        exit(1); 
    }
    *ptr = 11.33;//Use  
    // valueat(ptr) => valueat(6000)=> 11.33  
    
    printf("%.2f",*ptr); 

    free( ptr ); // To avoid memory leakage 
    ptr = NULL;  // To avoid dangling pointer 
    return 0; 
}