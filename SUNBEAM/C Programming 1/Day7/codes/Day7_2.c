#include<stdio.h> 

int main(int argc, char  *argv[])
{
    //argc => argument count 
    //argv => argument vector 
    // a.exe 1 2 3 
    //printf("%d",argc); 
    
    // printf("%s ",argv[0]);//a.exe
    // printf("%s ",argv[1]);//1
    // printf("%s ",argv[2]);//2 
    // printf("%s ",argv[3]);//3
    
    int i; 
    for( i = 0 ; i < argc ; i++)
            puts(argv[i]); 
    
    return 0;
}

//atoi( ); 