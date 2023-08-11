#include<stdio.h> 

int main( )
{
    int num1 = 12;  
    int num=10; 
    //printf("          %d",num); 
    //width specifier 
    //printf("%10d",num);// right justified 
    //                 1 0 
    // - - - - - - - - - -  
    //printf("%-10d %d",num,num1);// left  justified 
    // 1 0                 12 
    // - - - - - - - - - -  

    //printf("%010d\n",num);// right justified 
    
    float fvar = 10.33; 

    // printf("%10.2f",fvar);// right justified 
    // //            1 0 . 3 3 
    // //  - - - - - - - - - -     
    
    //printf("%-10.2f",fvar);// left  justified 
    //  1 0 . 3 3           
    //  - - - - - - - - - -     
    
    
    //printf("%010.2f",fvar);// right justified 
    // //            1 0 . 3 3 
    // //  - - - - - - - - - -     
    
    //printf("%.3f",fvar); 

    //printf("%.f",fvar);  // 10.33 => 10 
    
    //printf("%f",fvar); 
    
    printf("%*.*f",10,2,fvar);
    //      %10.2f


    
    return 0; 
}