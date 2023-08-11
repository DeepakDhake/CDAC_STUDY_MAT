
#include<iostream>
using namespace std;

//parent
//base
class base
{
    public:
    int b;
    void FunBase()
    {
        cout<<"\n----base::FunBase()----";
    }
};
//add one more class named as derived class
// derived class is inherited from base class

//child
//derived
class derived:public base
{
    public:
    int d;
    void funDerived()
    {
        cout<<"\n ----derived::funDerived()-----";
    }
};

int main()
{

    // base b1;
    // cout<<"\n size of base="<<sizeof(b1);
    // b1.FunBase();

    derived d1;
    cout<<"\n size of derived="<<sizeof(d1);
    d1.funDerived();
    d1.FunBase();

     
    cout<<"\n";
    return 0;
}