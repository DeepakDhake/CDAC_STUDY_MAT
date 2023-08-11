#include<stdio.h> 
#include<string.h> 
//Blueprint
struct emp //created the datatype 
{
    int empno; //4 
    char name[20]; // 20
    double salary; // 8 
};

void accept_emp( struct emp *p  ) ; 
void print_emp( struct emp e1 ); 
int main( )
{
    struct emp e1; 
    accept_emp( &e1 ); // call by address 
    print_emp( e1 ); // call by value 
    return 0; 
}
void print_emp( struct emp e1 )
{
    printf("%d %s %lf",e1.empno,e1.name,e1.salary); 
}
void accept_emp( struct emp *p  )  
{   
        printf("Enter the empid"); 
        scanf("%d",&p->empno); 
        printf("Enter the name"); 
        scanf("%s",p->name); 
        printf("Enter the salary"); 
        scanf("%lf",&p->salary); 
}

