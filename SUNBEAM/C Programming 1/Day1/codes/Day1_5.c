#include<stdio.h> 

int main( )
{
    //datatypes in C 
    //dataypes ( int , char , float , double)
    //10 => int , 1.2 => float , double 
    // 'A' => char  

     int x;   // variable declaration  
     x = 120; // assignment 
     int num = 10; // variable declaration + initialization  
     double dvar = 12.3; 
     char   ch   ='A'; 
     float fvar = 10.33;  

     //format specifiers 
     //int=>%d , float=>%f , char=>%c , double=>%lf  
       
      //\n => new line  ( escape sequence )
    //   printf("%d\n",num); 
    //   printf("%.2lf\n",dvar); // 12.30  
    //   printf("%c\n",ch); 
    //   printf("%.2f\n",fvar); // 10.33 

    printf("%d \n %.2lf \n %c \n %.2f",num,dvar,ch,fvar); 


    return 0; 
}
/*
    1 + 2 
    2.1 + 3.1 
    'A' 
    "Sunbeam"
*/