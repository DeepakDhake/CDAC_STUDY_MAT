#include<stdio.h> 
void fun( void  );  
extern int num;  
int main()
{
    //extern int num; 
    printf("\n%d",num); 
    fun( ); 
    return 0;
}
void fun( void  )
{
    //extern int num; 
    printf("\n%d",num); 
}
int num = 10; 
