#include<stdio.h> 

int main( )
{
    //typedef => alias ( nickname)
    //typedef => datatype 
    int a; 
    
    typedef int INT;
    INT x; // int x;      
    int b;  

    enum color 
    {
        RED,BLUE,GREEN 
    }; 

    enum color c1;   
    typedef enum color e_c; 
    e_c c2,c3,c4;  

    size_t s;  
    //unsigned long long 
    return 0; 
}