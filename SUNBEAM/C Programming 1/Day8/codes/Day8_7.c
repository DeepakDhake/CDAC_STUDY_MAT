#include <stdio.h>

typedef struct node
{
    int data;         //4
    struct node *ptr; //4
} node_t;             // self referential structure => linked list
int main()
{
    struct node s2;
    struct node s1 = {10, &s2};

    return 0;
}

/*
#include<stdio.h>
struct s2 
{
    char *cp;// 4 byte 
    struct s1
    {
        char a[4];//4  
        char *p;//4  
    }o1;==> 8 bytes 
}o2; ==> 12 bytes 

*/