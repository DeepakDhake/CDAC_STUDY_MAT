#include<stdio.h> 

int main( )
{
    //nested loop 

    int i,j; 

    //nested loop 
    for( i = 1; i<=5 ; i++)//i=1,2,3,4,5,6
    {
         printf("for each i:%d",i); 
         for(j=1;j<=5;j++)//j=1,2,3,4,5
         {
              printf("          j:%d",j);       
         }
         printf("\n"); 
    }
    return 0; 
}