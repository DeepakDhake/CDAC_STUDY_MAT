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
        cout<<"\n ------complex()------";
        this->real=r;
        this->imag=i;
    } 
    void printComplexNumber()
    {
        cout<<"\n complex ="<<this->real<<"+j"<<this->imag;
    }  
    ~complex()
    {
        cout<<"\n ------~complex()------";
    } 
};

int main()
{
    complex c1(7,6);
    c1.printComplexNumber();

    //heap based object
    complex *cptr=new complex(11,22);
    cptr->printComplexNumber();
    delete cptr;
    cptr=NULL;

    complex c2(3,2);
    c2.printComplexNumber(); 
   
    return 0;
}
// ------complex()------
//  c1=complex =7+j6
// ------complex()------
//  cptr=complex =11+j22
//  cptr=------~complex()------
//  ------complex()------
//  c2=complex =3+j2
//  c2=------~complex()------
//  c1=------~complex()------