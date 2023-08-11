#include <stdio.h>
//Structure in cpp
//Structure is a collection of similar or dissimilar data.
// It is used to bind logically related data into a single unit.

struct time
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
};//end of struct
int main()
{
    int n1;
    struct time t1;
    //time is struct  -- t1 as veriable of struct time
    t1.acceptTime();
    //t1.hr=22;  //error
    t1.printTime();

    
    return 0;
}
