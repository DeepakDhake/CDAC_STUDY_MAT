#include<stdio.h> 
int main( )
{
    int num = 10; 
    int num2 =2000; 
    int *ptr = &num; // ptr declare + init  
    
    printf("num = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr); // dereferencing opr / indirection opr 
    // *ptr => valueat(ptr)=>valueat(100)=>10 

    *ptr = 20; 
    /*
            valueat(ptr)
            valueat(100)
                10  => 20 

    */
    printf("\nnum = %d",num); //20 
    printf("\n*ptr = %d\n",*ptr); //20 
    //*ptr => valueat(ptr) =>valueat(100) => 20 

    *ptr = 300; 
    printf("\nnum = %d",num); //300 
    printf("\n*ptr = %d\n",*ptr); //300 

    *ptr = *ptr + 20; 
    //      300 + 20 
    //         320   

    printf("\nnum = %d",num); //320 

    ptr = &num2; 

    printf("\n *ptr = %d",*ptr); //2000 
    //*ptr => valueat(ptr) => valueat(700) => 2000 

    return 0; 
}

/*

int *ptr = 1000; // NOT OK 

*/