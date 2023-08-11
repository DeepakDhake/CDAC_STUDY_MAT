#include <stdio.h>
//Structure in c
//Structure is a collection of similar or dissimilar data.
// It is used to bind logically related data into a single unit.

struct time
{
    int hr,min,sec;
};//end of struct

//call by value
void printTime(struct time t1)
{
    printf("\n Time=%d:%d:%d",t1.hr,t1.min,t1.sec);
}
//call by address
void acceptTime(struct time *t1)
{
    printf("\n Enter Time");
    scanf("%d%d%d",&t1->hr,&t1->min,&t1->sec);
}

int main()
{
    int n1;
    struct time t1;
    // t1.hr=6;
    // t1.min=22;
    // t1.sec=55;
    acceptTime(&t1);
    t1.hr=22;
    printTime(t1);

    
    return 0;
}