#include<stdio.h> 

int main( )
{
    int num = 10; 
    char ch = 'A'; 
    float fvar = 1.2; 
    double dvar = 13.33;   
    //sizeof() => operator => bytes
    printf("%d\n",sizeof(num));// int => 4 bytes 
    printf("%d\n",sizeof(ch));// char => 1 byte
    printf("%d\n",sizeof(fvar));// float => 4 bytes 
    printf("%d\n",sizeof(dvar));// double => 8 bytes 
    return 0; 
}