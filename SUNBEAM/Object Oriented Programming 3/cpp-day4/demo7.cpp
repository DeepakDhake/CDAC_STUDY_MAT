
#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        this->real=r;
        this->imag=i;
    }
    void printComplexNumber()
    {
        cout<<"\n complex ="<<this->real<<"+j"<<this->imag;
    }  
};

template<class T>
void MySwap(T& refa,T& refb)
{
    T t =refa;
    refa=refb;
    refb=t;
}

int main()
{
    int a1=55,b1=99;
    cout<<"\n before swap a="<<a1<<" b="<<b1;
    MySwap(a1,b1);
    cout<<"\n after swap a="<<a1<<" b="<<b1;

    char a='A',b='z';
    cout<<"\n before swap a="<<a<<" b="<<b;
    MySwap(a,b);
    cout<<"\n after swap a="<<a<<" b="<<b; 



    complex c1(11,11), c2(99,99);
    cout<<"\n before swap ";
    cout<<"\n c1=";
    c1.printComplexNumber();
    cout<<"\n c2=";
    c2.printComplexNumber();
    MySwap(c1,c2);
    cout<<"\n after swap ";
    cout<<"\n c1=";
    c1.printComplexNumber();
    cout<<"\n c2=";
    c2.printComplexNumber();

    cout<<"\n";
    return 0;
}


