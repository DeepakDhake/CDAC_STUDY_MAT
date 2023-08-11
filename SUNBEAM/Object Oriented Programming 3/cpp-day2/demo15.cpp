#include<iostream>
using namespace std;
//Reference is alias or another name given to the existing 
//memory location / object.

int main()
{

    int n;
    n=10;

    int& ref=n;
    ref=55;

    cout<<"\n value of n="<<n<<"  address of n="<<&n;
    cout<<"\n value of ref="<<ref<<"  address of ref="<<&ref;
    

    cout<<"\n";
    return 0;
}