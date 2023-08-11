
#include<iostream>
using namespace std;

int main()
{
    int n,d;
    try
    {
        cout<<"Enter n and d";
        cin>>n>>d;
        if(d==0)
            throw "error";
        int r=n/d;
        cout<<"\n result="<<r;
    }
    catch(int e)
    {
        cout<<"\n -------(int)-------";
        cout<<"\n divid by zero error entered d=0";
    }
    catch(char e)
    {
        cout<<"\n -------(char)-------";
        cout<<"\n divid by zero error entered d=0";
    }
    catch(...)
    {
        cout<<"\n -------(...)-------";
        cout<<"\n divid by zero error entered d=0";
    }
    return 0;
}