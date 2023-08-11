#include <stdio.h>
//Function Overloading.
void printValue(int n)
{
    printf("\n int n=%d",n);
}
// int printValue(int n)
// {
//     printf("\n int n=%d",n);
// }
void printValue(int n1,int n2)
{
    printf("\n int n1=%d n2=%d ",n1,n2);
}
void printValue(char ch)
{
    printf("\n char ch=%c",ch);
}
void printValue(int n,char ch)
{
    printf("\n int n=%d ch=%c",n,ch);
}
void printValue(char ch,int n)
{
    printf("\n char ch=%c int n=%d",ch,n);
}
int main()
{
    printValue(22);
    printValue(33,44);
    printValue('A');
    printValue(11,'Z');
    printValue('W',33);
    printf("\n");
    return 0;
}
