#include<stdio.h> 
//int arr[5]; // data section 
int main( )
{
    
    
    int arr[5] = {11,22,33,44,55}; // init list 

    

    /*
            index are valid from 0 to n-1 
        arr 

             11  22   33   44   55 
            [0]  [1]  [2]  [3]  [4] => index 
            100  104  108  112  116 
    */
   //The array name is treated as address of 0th element in any runtime exp
   // name of array represents the base address  
   
    int *ptr = arr;  

    //printf("%d ",*ptr); // 11
    printf("%d ",++*ptr); // 11 => 12 
    //printf("%d ",*ptr); // 12  

    printf("%d ",*++ptr);//22  
    //printf("%d ",*ptr); // 22
    
    printf("%d ",*ptr++);//22  
    printf("%d ",*ptr); // 33 

    return 0; 
}

/*
        ++*ptr++; 
*/

