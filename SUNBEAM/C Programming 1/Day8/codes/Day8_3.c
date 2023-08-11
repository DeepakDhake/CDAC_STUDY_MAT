#include<stdio.h> 
//Blueprint
struct emp //created the datatype 
{
    int empno; //4 
    char name[20]; // 20
    double salary; // 8 
};
void accept_emp ( struct emp a[] ); 
void print_emp( struct emp a[] );
int main( )
{
    struct emp arr[3]; 
    accept_emp ( arr ); // by address 
    print_emp( arr ); 
    return 0; 
}
void print_emp( struct emp a[] )
{
    int i; 
    for( i = 0 ; i < 3 ; i++)
        printf("%d %s %.2lf\n",a[i].empno,a[i].name,a[i].salary); 
}
void accept_emp ( struct emp a[] )
{
        int i; 
        for( i = 0 ; i < 3 ; i++)
        {
            printf("Enter empno name and salary"); 
            scanf("%d%s%lf",&a[i].empno,a[i].name,&a[i].salary); 
        }    
    
}
