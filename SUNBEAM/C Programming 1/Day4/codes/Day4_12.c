#include<stdio.h> 
void sumpro( int a, int b); 
int main()
{
     int a = 10 , b = 3; 
     sumpro(a,b);
     //printf("%d %d",ps,pp);    
     //main cannot access the local variable in another function 
     //scope of ps and pp is limited to sumpro only  
     return 0;
}

void sumpro( int a, int b)
{
    //a,b,ps,pp will be created when sumpro is called 
    // on sumpro's FAR 
    int ps,pp;

    ps = a + b; 
    pp = a * b; 
    
}
