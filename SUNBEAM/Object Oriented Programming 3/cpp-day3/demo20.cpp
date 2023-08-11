#include<iostream>
using namespace std;
//static demo
class complex
{
    int real;
    int imag;
    static int count;
    public:
    complex(int r=1,int i=1)
    {
        cout<<"\n --- complex(int ,int)-----";
        this->real=r;
        this->imag=i; 
        count++;
    }
    static void printCount()
    {
        //this-> not available in static function
        cout<<"\n value of count="<<count<<"  address of count="<<&count; 
    }
   
    void printComplexNumber()
    {
        cout<<"\n complex ="<<this->real<<"+j"<<this->imag;
    } 
};//end of class

int complex::count=0;

int main()
{

    complex::printCount();
//     complex c1(22,54);
//     cout<<"\n size of c1="<<sizeof(c1);
//     c1.printCount();
   
//    complex c2;
//    c2.printCount();
   
    return 0;
}