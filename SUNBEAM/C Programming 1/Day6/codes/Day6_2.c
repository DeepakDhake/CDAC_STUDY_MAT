#include<stdio.h> 
//int arr[5]; // data section 
int main( )
{
    //int num1 = 1 , num2 = 2 , num3 = 3 , num4 = 4 , num5 = 5 ;  
    
    int arr[5] = {1,2,3,4,5}; // init list 
    // printf("%d ",sizeof(arr));// 5 * 4 => 20 
    // printf("%d ",sizeof(arr[0]));// 4 * 1 => 4 
    // printf("%d ",sizeof(arr[-1]));// 4 * 1 => 4 

    //int arr[5] = {1}; //partial init(rest ele are init to 0 ) 
      //int arr[5]; // uninit local array (Garbage )

    //int arr[]; // NOT OK 
    //int arr[] = {1,2,3,4,5};  // OK 
    //int arr[5] = {1,2,3,4,5,6,7,8,9}; 

    /*
            index are valid from 0 to n-1 
        arr 

             1    2    3    4    5 
            [0]  [1]  [2]  [3]  [4]
            100  104  108  112  116 
    */
    
    
    int index; 
    for( index = 0 ; index < 5 ; index++)
            printf("%d ",arr[index]); 

    return 0; 
}
/*
        scanf("%d",&n); 
        int arr[n];

        static => compile time ( array ) 
        int arr[100] = {1}; 

        dynamic  => runtime (malloc , calloc , realloc )
                             

*/