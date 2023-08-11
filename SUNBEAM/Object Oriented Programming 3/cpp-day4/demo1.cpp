

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
            this->age=23;
        }
        void accept()
        {
            cout<<"\n Enter name and age";
            cin>>name>>age;
        }
        void printPerson()//2
        {
            cout<<"\n name="<<name<<"  age="<<age;
        }
};

//person is base class
//employee is-a person
//employee-->derived/child
                                              
//child class
//derived class
class emp: public person 
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
        void updateName(string newName)
        {
            this->name=newName;
        }
        void accept()
        {
            person::accept();
            cout<<"\n enter empid and sal";
            cin>>empid>>sal;
        }
        void printEmp() //4
        {
            //cout<<"name="<<name;
            this->printPerson();
            cout<<"  emp sal="<<sal<<"  empid="<<empid;
        }
};
int main()
{
    // person p1;
    // person *pptr=NULL;
    // pptr=&p1;


    // person p1;
    // p1.accept();
    // p1.printPerson();


    // emp e1;
    // emp* eptr=NULL;
    // eptr=&e1;

    // emp e1;
    // e1.accept();
    // e1.printEmp();
   
    
    emp e1;
    person *pptr=NULL;
    pptr=&e1;  // person class pointer can hold derived class obj

    

    
    cout<<"\n";
    return 0;
}