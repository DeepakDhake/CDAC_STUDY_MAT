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
    
    // printf("%u ",arr); // name of array => 100 
    // printf("%u ",&arr);// 100 
    // printf("%u ",&arr[0]);// 100 

    // printf("%u ",arr); // 100 
    // printf("%u ",arr+1); // 104
    // printf("%u ",arr+2); // 108
    // printf("%u ",arr+3); // 112 
    // printf("%u ",arr+4); // 116  
    /*
            arr + 4 
            100 + 4 
            100 + 4 * 4
            100 + 16 
            116  
    */  

   // pointer notation 
    //printf("%d ",*arr); //1 
    /*  
            *arr 
            valueat(arr)
            valueat(100)
            1 
    */
    //printf("%d ",*(arr + 0));//1 
    /*
            *(arr + 0 )
            *(100 + 0 )
            *(100)
            1 
    */ 
    //printf("%d ",*(arr + 1));//2  
    /*
            *(arr + 1)
            *(100 + 1 )
            *(100 + 1 * 4 )
            *(104)
            2
    */
   //printf("%d ",*(arr + 2));//3 
   //printf("%d ",*(arr + 3));//4 
   //printf("%d ",*(arr + 4));//5    
    
    //printf("%d ",*(arr + 0));//1
    //printf("%d ",*(0 + arr));//1
    //printf("%d ",*(arr + 4 - 2 ));//3    
    
    /*
            arr[1]  ====>  *(arr + 1 )
            arr[2]  ===>   *(arr + 2 )
    */

    //printf("%d",arr[-1]); // G  
    /*
            arr[-1]
            *(arr + -1)
            *(arr - 1)
            *(100 - 1)
            *(100 - 1 )
            *(100 -1 * 4)
            *(100 - 4)
            *(96)

    */
    
    // printf("%d ",arr[0]); // 1 
    // printf("%d ",*(arr + 0));//1
    // printf("%d ",*arr + 12 );//1 + 12 => 13   

      //printf("%d ",arr[0]); // 1
      //printf("%d ",++arr[0]); // 2
      //printf("%d ",arr[0]); // 2

      printf("%d ",arr[0]); // 1
      printf("%d ",arr[0]++); // 1
      printf("%d ",arr[0]); // 2    

    return 0; 
}
