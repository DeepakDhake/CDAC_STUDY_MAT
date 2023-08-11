
#include<iostream>
using namespace std;

class engine
{
    int cc;
    int fuel;
    public:
    void  printEngineData()
    {
        cout<<"\n engine cc="<<cc<<"  engine fuel="<<fuel;
    }
    void acceptEngineData()
    {
        cout<<"\n enter cc and fuel for engine";
        cin>>cc>>fuel;
    }
};

//class car
//car has a engine
//engine object is a part of car
class car
{
    int price;
    engine e1; //engine object is a part of car
    public:
    void printCar()
    {
        cout<<"\n price="<<this->price;
        e1.printEngineData();
    }
    void acceptCar()
    {
        cout<<"\n enter car price";
        cin>>this->price;
        e1.acceptEngineData();
    }
};



int main()
{

    // engine e;
    // e.acceptEngineData();
    // e.printEngineData();


    car c1;
    c1.acceptCar();
    c1.printCar();
   


    cout<<"\n";
    return 0;
}