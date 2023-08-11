#include<stdio.h> 

int main( )
{
    // printf("%d ",sizeof(10)); // int => 4 bytes 
    // printf("%d ",sizeof(10L)); // long int => 4 bytes 
    // printf("%d ",sizeof(10LL)); // long long int => 8 bytes
    // printf("%d ",sizeof(10u)); // unsigned int => 4 bytes

    //printf("%d",10); 
    //10 => int => %d   

    printf("%d ",010); 
    // octal => decimal
    printf("%o ",010);
    // octal => octal 
    printf("%d ",0x32);
    // hexadecimal => decimal   
    printf("%x ",0x32);
    return 0; 
}