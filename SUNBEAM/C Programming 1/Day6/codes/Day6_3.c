#include<stdio.h> 
//int arr[5]; // data section 
int main( )
{
    //int num1 = 1 , num2 = 2 , num3 = 3 , num4 = 4 , num5 = 5 ;  
    
    int arr[5] = {1,2,3,4,5}; // init list 

    /*
            index are valid from 0 to n-1 
        arr 

             1    2    3    4    5 
            [0]  [1]  [2]  [3]  [4] => index 
            100  104  108  112  116 
    */
    
    //printf("%d \n",arr[0]); //1
    //arr[0] = 111;       
    //printf("%d \n",arr[0]); //111

    // printf("%d \n",arr[0]); //1
    // printf("%d \n",0[arr]); //1
    // printf("%d \n",arr[1-1]); //1

      printf("%d ",arr[ arr[1] ] ); 
      //           arr[   2     ]
      //                 3    

    return 0; 
}
