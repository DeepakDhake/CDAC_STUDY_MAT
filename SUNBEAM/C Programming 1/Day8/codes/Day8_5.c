#include<stdio.h> 
#pragma pack(1)
// struct test {
//  int a; //4 
//  char b;//1
// };
// struct test {
//  int a; //4 
//  char b;//1
//  int c; //4  
// };// 9 
struct test {
 int a; //4 
 char b;//1
 double d1; // 8  
 int c; //4  
};// 17 
// 8 16 24 32  

int main( )
{
    printf("%u\n", sizeof(struct test));
    return 0; 
} 

//geeksforgeeks.com 