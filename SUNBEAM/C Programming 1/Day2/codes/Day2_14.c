#include<stdio.h> 

int main( )
{
    //logical opr
    //&& , || , ! => 0 or 1 
    // all non zero values ( -ve ) are considered as true 
    // 0 => false 

    // && (logical AND) 
    // printf("%d ", 12 && 11); 
    // //             T && T  => T ( 1 )
    // printf("%d ", 12 && 0);
    // //             T && F  => F ( 0 ) 
    // printf("%d ", 0 && -11);
    // //            F &&  T  => F ( 0 ) 
    // printf("%d ", 0 && 0);
    // //            F && F   => F ( 0 )  


    //Logical OR 
    // printf("%d ", 12 || 11); 
    // //             T || T  => T ( 1 )
    // printf("%d ", 12 || 0);
    // //             T && F  => T ( 1 ) 
    // printf("%d ", 0 || -11);
    // //            F &&  T  => T ( 1 ) 
    // printf("%d ", 0 || 0);
    // //            F && F   => F ( 0 )  

    //Logical NOT => unary (!)
    // ! => !True => False 
    
    //printf("%d",!11); 
    //11 => true => !True => False => 0  
    
    printf("%d",!!-11); 
    return 0; 
}