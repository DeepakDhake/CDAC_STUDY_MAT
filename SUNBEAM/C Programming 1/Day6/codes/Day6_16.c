#include<stdio.h> 

int main( )
{
    //char str1[5] = {'A','B','C','D','E'}; 
    // char array=> 5 bytes  

    //char str2[5] = {'a','b','c','d','\0'};
    // 5 char array terminated with \0 => string
    // \0 => null character  

    //char str3[5] = {'I','N','F','O'}; // partial init 
    // it is a string 


    char str4[] = {'S','u','n','b','e','a','m'}; 
    // char array => 7 chars 

   

    int i;
     for( i = 0 ; i < 7 ; i++)
          putchar(str4[i]);   
 
    // for( i = 0 ; i < 5 ; i++)
    //       putchar(str1[i]);   

    // for( i = 0 ; str2[i]!='\0' ; i++)
    //       putchar(str2[i]);   

    // for( i = 0 ; str3[i]!='\0' ; i++)
    //       putchar(str3[i]);   


    return 0; 
}
/*

    char name[3] = {'a','b','c'} ; // char array 
    char name[3] = {'a'} ; // string 
    char name[3] = {'a','b','\0'} ; // string
    char name[] = {'a','b','c'} ; // char array 


*/