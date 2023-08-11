#include <stdio.h>
//Default Arguments
int sum(int a=0,int b=0,int c=0,int d=0)
{
    printf("\n a=%d  b=%d  c=%d  d=%d",a,b,c,d);
    int r=a+b+c+d;
    return r;
}
int main()
{
    int res;
    res=sum(1,2,3,4);
    printf("\n res=%d",res);
    res=sum(1,2,3);
    printf("\n res=%d",res);
    res=sum(1,2);
    printf("\n res=%d",res);
    res=sum(1);
    printf("\n res=%d",res);
    res=sum();
    printf("\n res=%d",res);
    
    printf("\n");
    return 0;
}
