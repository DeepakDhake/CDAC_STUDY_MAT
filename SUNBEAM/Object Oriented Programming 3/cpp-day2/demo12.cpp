//cin and cout
#include <stdio.h>
//add header file and namespace std
#include<iostream>
using namespace std;

//cout --> printf() --- use <<
//cin ---> scanf()  ----  use >>
int main()
{
    printf("\n hello..OC12");
    cout<<"\n hello..OC12";

   
    int n1=10;
    printf("\n n1=%d",n1);
    cout<<"\n n1="<<n1;
   

     int a=99,b=98;
     printf("\n a=%d  b=%d",a,b);
     cout<<"\n a="<<a<<"  b="<<b;
 

    int num1;
    printf("\n enter num1");
    //scanf("%d",&num1);
    cin>>num1;
    cout<<"\n num1="<<num1;
 

    int a1,b1;
    printf("\n enter a1,b1");
    //scanf("%d%d",&a1,&b1);
    cin>>a1>>b1;
    cout<<"\n  a1="<<a1<<"  b1="<<b1;
    cout<<"\n address of  a1="<<&a1;
   
    return 0;
}