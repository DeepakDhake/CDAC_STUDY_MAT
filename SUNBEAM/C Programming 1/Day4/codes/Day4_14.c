#include<stdio.h> 
void sumpro( int a, int b);
extern int ps,pp;  //declaration 
int main()
{
     int a = 10 , b = 3; 
     sumpro(a,b);
     printf("%d %d",ps,pp);    
     return 0;
}
int ps,pp; // defination 
void sumpro( int a, int b)
{
    ps = a + b; 
    pp = a * b; 
    
}

