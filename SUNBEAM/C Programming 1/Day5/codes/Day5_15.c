#include<stdio.h> 
int main()
{
    char ch = 'A'; 
    char *cptr = &ch; 
    char **cpptr = &cptr; 
    
    // printf("%d ",sizeof(ch)); // 1 
    // printf("%d ",sizeof(cptr)); //pointer size => 4 byte ( 32 bit) 
    // printf("%d ",sizeof(cpptr)); //pointer size => 4 byte ( 32 bit) 
    // printf("%d ",sizeof(*cptr));//1 byte 
    // printf("%d ",sizeof(**cpptr));//1 byte  
    
    printf("%d",sizeof(*cpptr)); // 4 bytes 

    
    return 0;
}
