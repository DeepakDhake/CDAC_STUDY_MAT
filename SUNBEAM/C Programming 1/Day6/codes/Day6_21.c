#include<stdio.h> 

int main( )
{
    // int a = 1, b = 2; 
    // printf("%d %d",a,b); // 1 2 
    //calling convention 
    // cdecl => right to left 

    int a = 10; 
    int *ptr = &a; 
    printf("%d %d",a,++*ptr); 
    //              11  11 
    return 0; 
}
// printf("%d %d %d %d",i,i++,++i,i++);// compiler dependent 