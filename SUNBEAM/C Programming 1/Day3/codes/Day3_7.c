#include<stdio.h> 

int main( )
{
    int num1 = 10; 
    int num2 = 20; 

    int ans; 
    ans = num1 > num2 ? num1 : num2; 
    //       condtn   ? exp1 : exp2 
    //        10>20   ? skip : ###  
    printf("%d",ans); 

    return 0; 
}
/*
     nested conditional opearator 
     num1,num2,num3
 ans = num1 > num2 ? ( num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3 );     
          condtn   ?          exp1                 :             exp2  


    a>b && a>c ? printf("%d",a) : ( b > c ? printf("%d",b): printf("%d",c));  

    max = a>b && a>c ? a    : ( b > c ? b : c ); 
             condtn  ? exp1 :      exp2 

*/