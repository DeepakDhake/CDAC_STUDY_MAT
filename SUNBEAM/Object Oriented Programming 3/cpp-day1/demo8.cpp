#include <stdio.h>
//time class

class time
{
    private:
    int hr,min,sec;
    public:
    void printTime()
    {
        printf("\n Time=%d:%d:%d",hr,min,sec);
    }
    void acceptTime()
    {
        printf("\n Enter Time");
        scanf("%d%d%d",&hr,&min,&sec);
    }
};//end of class
int main()
{
    int n1;
    time t1;
    printf("\n size of t1=%d",sizeof(t1));
    //time is a class then veri of class time is called as object
    t1.acceptTime();
    //t1.hr=22;  //error
    t1.printTime();

    time t2;
    t2.acceptTime();
    t2.printTime();

    time t3;
    t3.acceptTime();
    t3.printTime();

    
    return 0;
}