#include<stdio.h> 
void sqr( int x ); 
void display( int res ); 
int main( )
{
    sqr(2); 
    return 0; 
}

void sqr( int x )
{
      int r = x * x; 
      display( r );   
}
void display( int res )
{
    printf("res = %d",res); 
}