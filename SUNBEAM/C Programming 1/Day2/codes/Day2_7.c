#include<stdio.h> 

int main( )
{
    int num; 
    char ch; 
    double d1; 
    short int s1; 
    //printf("%d",sizeof(1 + 2)); // 4 bytes 
    //sizeof is a compile time operator 
    // printf("%d\n",sizeof(num + ch)); // 4 bytes 
    // printf("%d\n",sizeof(10.33 + 'A')); // 8 bytes
    // printf("%d\n",sizeof(10.33f + 'A')); // 4 bytes
    // printf("%d\n",sizeof(s1 + ch)); // 4 bytes

    //char ch2 = 'A'; 
    //printf("%d ",sizeof(ch2));// 1 byte 
    // ch => variable => (char ) => 1 byte   
    //printf("%d ",sizeof('A'));// 4 byte 
    // 'A'=> constant => char constant => int 
    
    int x = 1; 
    printf("%d",sizeof(x++));// 4 byte  
    printf("\nx = %d",x); // 1 
    
    
    return 0; 
}





// int main( )
// {
//     //float f = 1; 
//     //float <= int 
//     //1.0 <= 1   
//     //printf("%.1f",f); 
    
//     int a = 2.5f; 
//     //int <= float  
//     printf("%d",a); //2  
    
//     return 0; 
// }