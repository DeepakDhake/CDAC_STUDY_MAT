
#include<iostream>
using namespace std;
class MyData
{
private:
	int pin;
	int pass;
public:
	MyData()
    {
        this->pin=1998;
        this->pass=2010;
    }
	void PrintMyAccDetails()
    {
        cout<<"\n pin="<<pin<<"  pass="<<pass;
    }
	friend void anyFunction();
};//end of class 

void anyFunction()
{
	MyData d1;
	d1.pass=9898;
	d1.pin=9999;
	d1.PrintMyAccDetails();
}

int main()
{
    anyFunction();
    return 0;
}

