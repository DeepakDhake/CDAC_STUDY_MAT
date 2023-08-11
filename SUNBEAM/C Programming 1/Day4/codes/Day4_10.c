#include<stdio.h> 
void sumpro( int a, int b); 
int main()
{
    
    auto int d;  //auto is a keyword and it indicates local variable 
    /*
        variable declared inside the function are called as local variable 
    */
    int c; // auto 
    //if not initialized then it contains garbage (anything)
    {
        int c = 10; 
        printf("\n %d",c); //10
        {
            int  c = 100; 
             printf("\n %d",c); //100 
             {
                 int c = 500; 
                 printf("\n %d",c); //500
             }
        } 
    }
    
    int a =10, b = 3; 
 //a,b,c,d will be created when main is called 
 // on main's FAR    
    //sumpro(a,b);// call 
    //printf("\n Inside the main %d %d",a,b); 
    return 0;
}

void sumpro( int a, int b)
{
    //a,b,ps,pp will be created when sumpro is called 
    // on sumpro's FAR 
    int ps,pp;

    ps = a + b; 
    pp = a * b; 
    printf("\n sum = %d prod = %d",ps,pp);// 13 30 

    a++; 
    b++;
    /*
        changes made in a and b doesn't reflect in main 
        because main's a and b are different 
    */   

   //a,b,ps,pp are destroyed 
}
