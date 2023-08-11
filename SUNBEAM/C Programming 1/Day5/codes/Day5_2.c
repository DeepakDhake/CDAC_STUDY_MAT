#include<stdio.h>

int main( )
{
    int a = 10; 
    static int b = 20; 
//created in datasection when program is started ( before main is called )    
    
    static int c = a; //created in datasection when program is started ( before main is called )     
    //but trying to init with local variable( which is not created yet )

//To init static and global variable , use const values( not local variables )    
    
    return 0; 
}