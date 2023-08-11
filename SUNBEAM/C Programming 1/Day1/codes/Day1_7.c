#include<stdio.h> 

int main( )
{
    //Escape sequence 
    // \n , \b , \r , \t 
    //printf("Hello \n world"); 
    
    //\" \" => double quote 
    //printf("\"Hello world\""); 

    //\' \' => single quote 
    //printf("\'Hello world\'"); 
    
    //\b => backspace
    //printf("Hello wo\brld");
    //      Hello wrld   

    //\t => tab space ( 8 spaces )
    //printf("\t12345678\t12345678");

    //\r => carraige return 
    //(it takes the cursor to the begining of the current line )

    //printf("LC 12batch\rO");
    //      OC 12batch 
    
    //\ => escape character 
    //printf("\\n is used for new line");
    
    printf("Discount is 10%%"); 
    return 0; 
}