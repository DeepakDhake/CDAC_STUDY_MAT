#include<stdio.h> 
int addition( int num1 , int num2  ); // function declaration 
//int addition( int  , int   ); // function declaration ( type checking ) (Global declaration )
int main( )
{
    //num1 and num2 are called as local variables 
    //variables declared inside the function are called as local variables 
    int num1 = 1; 
    int num2 = 2; 
    int result; 
    //int addition( int num1 , int num2  ); // local function declaration 
    result = addition( num1 ,num2 ); //function call 
    //num1 and num2 are  called as actual argument 
    printf("result = %d\n",result); // 3 
    result = addition( 4 , 5); 
    printf("result = %d\n",result);// 9 
    
     
    return 0; 
}

//main => calling function 
//addition =>called function 

//num1 and num2 are called as formal arguments 

//function defination 
//                 1          2 
int addition( int num1 , int num2  ) // user defined function 
{
        //num1 and num2 are local variables 
        int res; // local variable 
        res = num1 + num2; //1 + 2 => 3 
        return res;   
}