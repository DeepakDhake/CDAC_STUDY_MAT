#include<stdio.h> 

void fun( int *p) // p=>100 
{       
        ++*p; // 10 => 11 
        printf("\n Inside the function %d",*p++); //11  
        //100 => 104    
}
int main( )
{
    int a = 10; 
    fun( &a);
    printf("\n %d",a); //11   
    return 0; 
}