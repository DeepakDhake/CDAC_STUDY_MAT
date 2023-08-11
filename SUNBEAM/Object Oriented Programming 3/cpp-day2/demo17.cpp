#include<iostream>
using namespace std;
//Copy constructor
//sum of two complex numbers
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
    complex(complex& refc1) //Copy constructor 
    {
        this->real=refc1.real;
        this->imag=refc1.imag;
    }
    complex sum(complex& c2)
    {
        complex c3;
        c3.real=this->real+c2.real;
        c3.imag=this->imag+c2.imag;
        return c3;
    }
    void printComplexNumber()
    {
        cout<<"\n complex ="<<this->real<<"+j"<<this->imag;
    }  
};

int main()
{
    complex c1(7,6), c2(3,2),c3;
    c1.printComplexNumber();
    c2.printComplexNumber();

    c3=c1.sum(c2);
    c3.printComplexNumber();





    //Copy constructor 
    //  complex cc(c1);  //complex cc=c1
    //  cc.printComplexNumber();

    return 0;
}