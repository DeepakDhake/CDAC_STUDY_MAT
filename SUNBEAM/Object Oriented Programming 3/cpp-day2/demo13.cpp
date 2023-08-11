//Complex class having 2 data members real and imag 
#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    // complex()
    // {
    //     cout<<"\n -----complex()-----";
    //     this->real=1;
    //     this->imag=1;
    // }
    complex(int r=1,int i=1)
    {
        cout<<"\n -----complex(int ,int)-----";
        this->real=r;
        this->imag=i;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }
    void acceptComplexNumber()
    {
        cout<<"\n Enter real and imag";
        cin>>this->real>>this->imag;
       // cin>>real>>imag;  //ok
    }
    ~complex()
    {
        cout<<"\n ----- ~complex()----";
    }
};

int main()
{

    complex c1;
    c1.printComplexNumber(); 

    complex c2(5,7);
    c2.printComplexNumber();
    return 0;
}
