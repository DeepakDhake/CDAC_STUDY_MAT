#include<stdio.h> 
// static int num = 10; // file scope // data section ( before main is called only once  ) 
// int num2; // Global variable ( program scope )
// int main( )
// {
//     printf("%d",num); // 10 
//     return 0; 
// }

// void fun( )
// {
//     printf("%d",num); // OK 
// }

static int num; // File scope 
int num3; // data section ( program scope )
int main( )
{
    // function scope 
    static int num = 10; // data section ( before main is called only once  ) 
    int num2; // stack ( FAR of main )
    printf("%d",num); // 10 
    return 0; 
}

void fun( )
{
    printf("%d",num); // NOT OK 
}



// int main( )
// {
//     // function scope 
//     static int num = 10; // data section ( before main is called only once  ) 
//     printf("%d",num); // 10 
//     return 0; 
// }

// void fun( )
// {
//     printf("%d",num); // NOT OK 
// }