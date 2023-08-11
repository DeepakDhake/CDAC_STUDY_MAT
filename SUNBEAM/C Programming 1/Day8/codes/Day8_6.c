#include<stdio.h> 

struct A 
{
    int a; 
};
struct B 
{
    int a; 
};

int main( )
{
    //struct A a1 = { 10 };  
    //struct A a2 = a1; 
    //printf("%d ",a2.a); 
    struct A a1 = { 10 };  
    struct B b1 = a1; 
     
    return 0; 
}

