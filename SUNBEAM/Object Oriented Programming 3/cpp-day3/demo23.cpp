#include<iostream>
using namespace std;
//deep copy
class complex
{
    int *ptrReal;
    int imag;
    public:

    complex(int r=1,int i=1)
    {
        this->ptrReal=new int;
        *this->ptrReal=r;
        this->imag=i; 
    }
    complex(complex& c1)
    {
        this->ptrReal=new int;
        *this->ptrReal=*c1.ptrReal;
        this->imag=c1.imag; 
    }
    void printComplexNumber()
    {
        cout<<"\n complex ="<<*this->ptrReal<<"+j"<<this->imag;
    }
    ~complex()
    {
        if(this->ptrReal!=NULL)
        {
            delete this->ptrReal;
            this->ptrReal=NULL;
        }
    }
};
int main()
{
    complex c1(5,6);
    c1.printComplexNumber();

    complex cc(c1); // complex cc=c1;
    cc.printComplexNumber();
    return 0;
}