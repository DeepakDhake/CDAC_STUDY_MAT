#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num; 

    printf("%u ",ptr); // 100 

    ptr = ptr + 1;
    /*      
          ptr + n = ptr + n * scale factor of ptr
          
                    ptr + 1 
                    ptr + 1 * scale factor of ptr 
                    100 + 1 * 4 
                    100 + 4 
                    104 
    */
    printf("\nptr = %u ",ptr); // 104  
    
    ptr + 1; //OK 
    ptr - 1; //OK 
    // ptr * 1; //NOT OK 
    // ptr / 1; //NOT OK 
    // ptr % 1; // NOT OK 

    ptr--; 
    /*
            ptr = ptr - 1 
                  104 - 1 
                  104 - 1 * 4 
                  104 - 4 
                  100   

    */
    printf("\nptr = %u ",ptr); // 100 
    printf("\n*ptr = %d ",*ptr); // 100   
    return 0; 
}
/*
        double *dptr; 
        dptr + 3; 

        ptr + 3 * scale factor of ptr 
        100 + 3 * 8 
        100 + 24 
        124 



*/