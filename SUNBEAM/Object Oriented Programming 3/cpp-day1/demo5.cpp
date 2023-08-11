#include <stdio.h>
//bool :- it can take true or false value. 
//It takes one byte in memory.

//wchar_t :- it can store 16 bit character. 
//It takes 2 bytes in memory.

int main()
{
    bool b=true;  //false
    printf("\n bool b=%d  size of b=%d",b,sizeof(b)); //1  1

    wchar_t wch=L'A';
    printf("\n wchar wch=%c  sizeof wch=%d",wch,sizeof(wch)); //2
    
    printf("\n");
    return 0;
}
