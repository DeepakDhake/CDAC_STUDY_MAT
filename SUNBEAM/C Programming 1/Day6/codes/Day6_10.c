#include<stdio.h> 
void printArray(int *ptr); 
int main()
{

    int arr[5] = {1,2,3,4,5}; 
    //arr++; // NOT OK 
    printArray(arr);  
    return 0; 
}


void printArray(int *ptr) // pointer notation 
{
    
    ptr++; // OK => pointer 
    printf("%d ",*ptr); //2 
    printf("%d ",ptr[-1]); //1 
    //*(ptr - 1 )=> *(104 - 1 )=> *(100) => 1 
    
}       



// void printArray(int arr[]) // array notation 
// {
    
//     arr++; // OK => pointer 
//     printf("%d ",*arr); //2 
//     printf("%d ",arr[-1]); //1 
//     //*(arr - 1 )=> *(104 - 1 )=> *(100) => 1 
    
// }       





// void readArray(int arr[]); 
// void printArray(int arr[]); 
// int main()
// {

//     int arr[5]; 

//     printf("Enter the array elements :: "); 
//     readArray(arr); // base address
//     printf("array elements are :: \n"); 
//     printArray(arr);  
//     return 0; 
// }

// void readArray(int arr[]) // array notation 
// {
//     //printf("%d",sizeof(arr));//pointer size => 4 
//     int index; 
//     for( index = 0 ; index < 5 ; index++)
//             scanf("%d",&arr[index]); 
// }       


// void printArray(int arr[]) // array notation 
// {
//     //printf("%d",sizeof(arr));//pointer size => 4 
//     int index; 
//     for( index = 0 ; index < 5 ; index++)
//             printf("%4d",arr[index]); 
// }       

/*
           1    2    3    4    5   
          [1]  [2]  [3]  [4]  [5]
          100  104  108  112  116 

          arr[1] => 1   

          *(arr + 1 )
          *(100 + 1 )
          *(104)
            2 
*/