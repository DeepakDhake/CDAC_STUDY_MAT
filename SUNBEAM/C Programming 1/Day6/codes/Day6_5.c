#include<stdio.h> 
//int arr[5]; // data section 
int main( )
{
    
    
    int arr[5] = {1,2,3,4,5}; // init list 

    //arr++; // Lvalue error 

    /*
            index are valid from 0 to n-1 
        arr 

             1    2    3    4    5 
            [0]  [1]  [2]  [3]  [4] => index 
            100  104  108  112  116 
    */
   //The array name is treated as address of 0th element in any runtime exp
   // name of array represents the base address  
   

    int *ptr = arr; //pointer to 1D array 
    //printf("%u ",arr);//100 
    //printf("%u ",ptr); //100 


    // printf("%u ",ptr); //100 
    // printf("%u ",ptr+1); 
    // printf("%u ",ptr+2); 
    // printf("%u ",ptr+3); 
    // printf("%u ",ptr+4);//116  
    /*
            ptr + 4 
            100 + 4 
            100 + 4 * 4 
            100 + 16 
            116 
    */
     //printf("%d ",*(ptr + 0)); //1 => pointer notation 
     //printf("%d",  ptr[0]); // 1 => array notation

     //printf("%d ",*(0 + ptr)); //1 
     //printf("%d ",*(ptr + 1 - 1 )); //1 
     //printf("%d",  0[ptr]); // 1 

      //printf("%d",  ptr[-1]);// G 
      /*
            ptr[-1]
            *(ptr + -1)
            *(ptr - 1)
            *(100 - 1)
            *(100 - 1 * 4)
            *(100 - 4)
            *(96)
            G

      */
      printf("%d", *ptr + 10 ); // 1 + 10 
      /*
            *ptr 
            valueat(ptr)
            valueat(100)
            1 
      */

    return 0; 
}
//arr[0] => *(arr + 0)
//ptr[0] => *(ptr + 0)