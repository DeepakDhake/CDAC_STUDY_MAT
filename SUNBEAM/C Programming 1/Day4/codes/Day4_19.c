#include<stdio.h> 
//register int y; // NOT OK 
int main( )
{
    register int a; // cpu memory ( if not init it contains Garbage ) 
    int x; // RAM => process => STACK 
    {
        register int a =  100;
        printf("%d",a); // 100 
    }
    int y; 
    printf("%u ", &y); // OK 
    //register int z; 
    //printf("%u ", &z); // NOT OK  
    
    //int m; 
    //register int *ptr = &m; 
    
    //register int p; 
    //int *ptr = &p; // NOT OK  
    
    //register static int z; // NOT OK  
    return 0; 
}