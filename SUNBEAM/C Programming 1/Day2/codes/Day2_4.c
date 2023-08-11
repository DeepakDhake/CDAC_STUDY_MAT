#include<stdio.h>

int main( )
{
    /*
        short , long ( type modifiers )
    */
    //short int num; 
    //signed short int num; 
    //printf("%d",sizeof(num)); //2 bytes 
    
    //long int num1; 
    //signed long int num1;  
    //printf("%d",sizeof(num1)); //4 bytes 

    //long long int x;
    //signed long long int x;    
    //unsigned long long int x;    
    unsigned long long x;    
    printf("%d",sizeof(x)); //8 bytes 

    
    return 0; 
}