
#include<iostream>
using namespace std;

class shape 
{
    public:
    virtual void cal_area()=0;
    virtual void acceptData()=0; 
};

class square:public shape
{
    //virtual void cal_area()=0;
    //virtual void acceptData()=0; 
    int s;
};

class rect:public shape
{
    int l,b;
    public:
    void cal_area() 
    {
        int area=l*b;
        cout<<"\n area of rect="<<area;
    }
    void acceptData()
    {
        cout<<"\n Enter l and b for rect";
        cin>>l>>b;
    }
};
class circle:public shape
{
    int r;
    public:
    void cal_area()
    {
        int a=3.14*r*r;
        cout<<"\n area of circle="<<a;
    }
    void acceptData()
    {
        cout<<"\n Enter r";
        cin>>r;    
    }
};
int main()
{
   // square s1;


    shape *sptr=NULL;
    rect r1;
    circle c1;
    int ch;
    do
    {
        cout<<"\n enter 1:rect  2:circle  0:exit";
        cin>>ch;
        switch(ch)
        {
            case 1: //rect
                sptr=&r1;
            break;
            case 2: //circle
                sptr=&c1;
            break;
        };
        if(sptr!=NULL)
        {
            sptr->acceptData();
            sptr->cal_area();
        }
        sptr=NULL;
    } while (ch!=0);
    




    // shape sp1;
    // sp1.acceptData();
    // sp1.cal_area();

    // rect r1;
    // r1.acceptData();
    // r1.cal_area();

    // circle c1;
    // c1.acceptData();
    // c1.cal_area();
   

    return 0;
}

