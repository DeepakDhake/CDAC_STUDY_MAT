#include<stdio.h> 

int main( )
{
    //Bitwise operators 

    printf("%d\n",10 & 5);
    printf("%d\n",10 | 5);
    printf("%d\n",10 ^ 5); 

    //Bitwise NOT 
    printf("%d",~10); // -(n + 1) => -(10 + 1) => -11 
    return 0; 
}