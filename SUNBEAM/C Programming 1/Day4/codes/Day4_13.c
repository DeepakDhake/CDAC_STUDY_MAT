#include<stdio.h> 
void sumpro( int a, int b); 
int ps,pp; 
/*
    variable declared inside the function => local variable 
    variable declared outside the function => Global variable 

*/
int main()
{
     int a = 10 , b = 3; 
     sumpro(a,b);
     printf("%d %d",ps,pp);    
     return 0;
}
/*
        ps and pp are => global variable 
        life => throughout the program 

    global var => can be accessed in whole program 
            //created when program is started 
                    => even before main is called 
            //created in datasection => default value => 0 
    destroyed when program is terminated 
            => after completion of main                 

*/

void sumpro( int a, int b)
{
    ps = a + b; 
    pp = a * b; 
    
}
