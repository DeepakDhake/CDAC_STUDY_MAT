// Constructor : object initialization
// Destructor : used to release the resources
// Mutators  / setter : modify state of object
// Inspector /getter : read the data member but do not change the state of the object
// Facilitator : Provide extra facility to work with object

#include<stdio.h>
class time
{
    private:
    int hr,min,sec;
    public:
    time() //Parameterless constructor 
    {
        printf("\n ---------time()-------");
        this->hr=0;
        this->min=0;
        this->sec=0;
    }
    time(int h,int m,int s) //Parameterized constructor
    {
        printf("\n ---------time(int,int,int)-------");
        this->hr=h;
        min=m;
        this->sec=s;
    }
    void setMin(int min) //setter
    {
        this->min=min;
    }
    //setHr(int hr)
    //setSec(int sec)

    int getSec() //getter
    {
        return this->sec;
    }
    //int getMin()
    //int getHr()
    // void initTime()
    // {
    //     this->hr=0;
    //     this->min=0;
    //     this->sec=0;
    // }
    void printTime()//Facilitator
    {
        printf("\n Time=%d:%d:%d",this->hr,this->min,this->sec);
    }
    void acceptTime()//Facilitator
    {
        printf("\n Enter Time");
        scanf("%d%d%d",&this->hr,&this->min,&this->sec);
    }
    ~time()  //Destructor
    {
        printf("\n ---~time()----");
    }
};//end of class
int main()
{
    //time is class then t1=> object of class time
    // time t1;
    // t1.printTime();

    // time t2;
    // t2.printTime();
    
    //9:30:45
    time t_p(9,30,45);
    t_p.printTime();
    //9:15
    //t_p.min=15;
    t_p.setMin(15);
    t_p.printTime();

    //int s=t_p.sec;
    int s=t_p.getSec();
    printf("\n sec in t_p obj =%d",s);



    //8:30:33
    // time t_s(8,30,33);
    //  t_s.printTime();
    


    
    return 0;
}

