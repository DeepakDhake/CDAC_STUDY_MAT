#include<stdio.h> 
int main(int argc, char const *argv[])
{
    //argc => argument count 
    //argv => argument vector 

    
    //printf("%d",argc); // 4   
    // a.exe one two three 
    
    // printf("%u ", argv[0]); 
    // printf("%u ", argv[1]);
    // printf("%u ", argv[2]);
    // printf("%u ", argv[3]); 

    //printf("%u ", *(argv + 0)+0);   
    //printf("%u ", *(argv + 0)+1);
    //printf("%u ", *(argv + 0)+2);
    //printf("%u ", *(argv + 0)+3);
    
    // a.exe one two three
    // pointer notation 
    //printf("%c ", *(*(argv + 0)+0) );//a 
    //printf("%c ", *(*(argv + 0)+1) );//.
    //printf("%c ", *(*(argv + 0)+2) );//e 

    //array notation 
    printf("%c ", argv[0][0] );//a    
    return 0;
}

