#include<stdio.h> 
double addition( double num1, double num2); 
void multiplication(double a  ,double b); 
int division( int num , int den); 
void subtraction( void  ); 
int main( )
{
    double num1 = 10.00 , num2 = 2.00 , res; 
    res = addition( num1, num2);  
    printf("\n res= %.2lf",res);

    multiplication(2.0 , 4.0);// function call  
    
    int num,den,result; 
    printf("\n Enter the num1 and num2"); 
    scanf("%d%d",&num,&den); // 4 2  
    result = division( num , den); // 4 2 
    printf("\n result = %d",result); 
    subtraction(  ); 
    return 0; 
}

void subtraction( void  )
{
        int p,q,r; 
        printf("\n Enter p and q "); 
        scanf("%d%d",&p,&q); 
        r = p - q; 
        printf("\n r = %d",r); 
}

int division( int num , int den)
{
        return (num/den); 
}
void multiplication(double a  ,double b)
{
        double c; 
        c = a * b; 
        printf("\n multiply = %.2lf",c);
        
}
double addition( double num1, double num2)
{
        double res; 
        res = num1 + num2; 
        return res;  
}