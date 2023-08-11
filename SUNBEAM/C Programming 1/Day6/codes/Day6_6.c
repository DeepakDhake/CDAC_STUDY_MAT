#include<stdio.h> 
//int arr[5]; // data section 
int main( )
{
    
    
    int arr[5] = {1,2,3,4,5}; // init list 

    

    /*
            index are valid from 0 to n-1 
        arr 

             1    2    3    4    5 
            [0]  [1]  [2]  [3]  [4] => index 
            100  104  108  112  116 
    */
   //The array name is treated as address of 0th element in any runtime exp
   // name of array represents the base address  
   
   //printf("%u ",arr); // 100 
   //printf("%u ",arr + 1); // 104
   //printf("%u ",&arr); // 100  
   //printf("%u ",&arr + 1); // 100 
   /*
            &arr + 1 
            100  + 1 
            100 + 1 * 20 
            120 

   */
  
    int *ptr1 = &arr[4]; 
    int *ptr2 = &arr[0];
    int res = ptr1 - ptr2; 
    /*
            ptr1 - ptr2

            (ptr1 - ptr2) / scale factor of ptr1 
            (116  - 100 ) / 4 
              16  / 4 
                 4  

    */
     printf("res= %d",res); 


  
    return 0; 
}

/*
    // &num1 = 104 
    // &num2 = 100 

    int num1 = 1; 
    int num2 = 2; 
    int *ptr1 = &num1; 
    int *ptr2 = &num2;
    int res = ptr1 - ptr2; 

    ptr1 - ptr2 / (scale factor of ptr1)
    (104 - 100 ) / 4 
    4 / 4  
    1 
*/