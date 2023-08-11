

#include<iostream>
using namespace std;

//base class
//parent class
class person
{
    protected:
        string name;
        int age;
    public:
        person()
        {
            this->name="Rajesh";
            this->age=24;
        }
        void printPerson()
        {
            cout<<"\n name="<<name<<"  age="<<age;
        }
};

//person is base class
//employee is-a person
//employee-->derived/child
                                              
//child class
//derived class
class emp : public person
{
    private:
        int sal;
        int empid;
    public:
        emp()
        {
            sal=20000;
            empid=101;
        }
        void UpdateName(string newName)
        {
            this->name=newName; //yes
        }
        void printEmp()
        {
            this->printPerson();
            cout<<"  emp sal="<<sal<<"  empid="<<empid;
        }
};
int main()
{
    // person p1;
    // p1.printPerson();

    emp e1;
    e1.printEmp();
    //name=Rajesh
    //rajeshh
    //e1.name="rajeeeeshh";  //no
    e1.UpdateName("rajeshh");
    e1.printEmp();

   
    

    
    cout<<"\n";
    return 0;
}