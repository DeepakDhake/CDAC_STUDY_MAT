#include<stdio.h> 
#include<string.h> 
//Blueprint
struct emp //created the datatype 
{
    int empno; //4 
    char name[20]; // 20
    double salary; // 8 
};

int main( )
{
    // local structure 
    struct student 
    {
        int rollno; 
        char name[20]; 
    }; 
    //datatype variable-name 
    // int          x = 1 ;

    struct emp e1 = {1, "Ketan", 1000.00}; 
    struct emp e2 = {2,"Amit"}; 
    struct emp e3; 
    struct emp e4;    
    //e1,e2,e3,e4 => variables / objects 

    //printf("%d %s %.2lf",e1.empno,e1.name,e1.salary); 

    /*
            int *ptr = &num1; 
    */
    struct emp *p = &e1; //scale factor => 32 byte  
    
    //printf("%d %s %.2lf",p->empno,p->name,p->salary); 
    
    /*
            int x; 
            x = 1; 
    */

    //  e3.empno = 3; 
    //  strcpy(e3.name, "Aditya");
    //  e3.salary = 2000.00;   
    //  printf("%d %s %.2lf",e3.empno,e3.name,e3.salary); 

    printf("Enter empno name and salary"); 
    scanf("%d%s%lf",&e4.empno,e4.name,&e4.salary); 

    printf("%d %s %.2lf",e4.empno,e4.name,e4.salary); 

    return 0; 
}