#include<stdio.h> 


int main( )
{
    int a = 1; 
    int b = 2; 
    int c = 3; 

    //a+=b+=c+=1;
    /*
        c = c + 1 => 3 + 1 => 4 
        b = b + c => 2 + 4 => 6 
        a = a + b => 1 + 6 => 7    
    */
    a = b = c = -3; 

    printf("%d %d %d",a,b,c); // -3 -3 -3 

    return 0; 
}

// int main( )
// {
//     //assignment opr ( = )
//     int num1= 1 ; 
//     //num1 = +20;
//     // num1 = 20;   
//     //12 = 3; // Lvalue error   
//     //2+1 = 3; // Lvalue error  
//     //num1 + 2; 
//     //num1 = num1 + 2; 
//     //printf("num1 = %d",num1); // 3 
    
//     int a = 1; 
//     int b = 2; 
//     printf("%d ",a); // 1 
//     printf("%d ",a = b); //2 
//     printf("%d ",a ); //2 
    
    
//     return 0; 
// }


// int main( )
// {
//     //short hand assignment opr 
//     int num1 = 10; 
//     //num1 = num1 +2; 
//     //num1+=2; // num1 = num1 + 2;  
//     //num1-=4; // num1 = num1 - 4;   
//     //num1*=4; // num1 = num1 * 4;   
//     //num1/=2; // num1 = num1 / 2;  
//     //printf("%d",num1); //6 
//     return 0; 
// }
/*
    num1+=2; // num1 = num1 + 2 
    num1=+2

    num1*=6; // num1 = num1 * 6   

    +=, *= , /= , -= , /= 

*/

