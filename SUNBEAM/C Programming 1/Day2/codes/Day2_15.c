#include<stdio.h> 

int main( )
{
    // int ans; 
    // int num1 = 1;  
    // int num2 = 2; 
    // ans = num1 && num2;
    // //      T  &&  T 
    // //         T  
    // printf("num1 = %d num2 = %d ans = %d",num1,num2,ans);   
    
    
    // int ans; 
    // int num1 = 0;  
    // int num2 = 2; 
    // ans = num1 && num2;
    // //      F  &&  XXX 
    // //         F  
    // printf("num1 = %d num2 = %d ans = %d",num1,num2,ans);   
    
    // int ans; 
    // int num1 = 0;  
    // int num2 = 2; 
    // ans = num1 && ++num2;
    // //      F  &&  XXX 
    // //         F  
    // printf("num1 = %d num2 = %d ans = %d",num1,num2,ans);   
    
    // int ans; 
    // int num1 = 0;  
    // int num2 = 2; 
    // ans = ++num1 && ++num2;
    // //    ++F=>T && ++T
    // //          T  

    // printf("num1 = %d num2 = %d ans = %d",num1,num2,ans);   
  
    // int ans; 
    // int num1 = 0;  
    // int num2 = 2; 
    // ans = num1++ && ++num2;
    // //     F++   &&   XXX
    // //          F 
    // printf("num1 = %d num2 = %d ans = %d",num1,num2,ans);   
  
    // int ans; 
    // int num1 = 0;  
    // int num2 = 2; 
    // ans = num1++ || ++num2;
    // //      F++  ||  ++T
    // //          T  
    // printf("num1 = %d num2 = %d ans = %d",num1,num2,ans);   
  

    // int ans; 
    // int num1 = 0;  
    // int num2 = 0; 
    // ans = num1++ || ++num2;
    // //      F++  ||  ++F=>T 
    // //          T  
    // printf("num1 = %d num2 = %d ans = %d",num1,num2,ans);   
  
    int ans; 
    int num1 = 0;  
    int num2 = 0; 
    ans = num1++ || num2++;
    //      F++  ||  F++
    //          F  
    printf("num1 = %d num2 = %d ans = %d",num1,num2,ans);   
  

    return 0; 
}