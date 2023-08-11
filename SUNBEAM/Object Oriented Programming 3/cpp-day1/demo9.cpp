#include <stdio.h>

class empty
{
    
};

int main()
{
    empty e1; //e1 object of empty class
    printf("\n size of e1=%d",sizeof(e1));  //1 byte
    printf("\n");
    return 0;
}