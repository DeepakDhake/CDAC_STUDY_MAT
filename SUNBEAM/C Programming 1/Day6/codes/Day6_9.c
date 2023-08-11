#include<stdio.h> 

int main( )
{
    int arr[5] = {1,2,3,4,5}; 
    /*
            index are valid from 0 to n-1 
        arr 

             1    2    3    4    5 
            [0]  [1]  [2]  [3]  [4] => index 
            100  104  108  112  116 
    */
    int *ptr = &arr + 1; //120  
    //printf("%d",*ptr); // G 
    ptr--; 
    //120 => 116 
    printf("%d",*ptr); // 5  
    return 0; 
}