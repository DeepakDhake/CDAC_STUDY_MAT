#include<stdio.h> 

int main( )
{
    //char ch1 = 'A'; // 65 => ( binary of 65 => 1 byte )
    //char ch2 = 65; // char are internally integral constants 
    
    //printf("%d ",'A'); // 65 
    //printf("%c ",65);//A 
    
    //\r \t \b \n => character constants (ASCII value)
    //printf("%d ",'\r');//13 
    //printf("%d ",'\n');//10  

    //  printf("%d - %d\n",'A','Z');// 65 - 90 
    //  printf("%d - %d\n",'a','z');// 97 - 122 
    //  printf("%d - %d\n",'0','9');// 48 - 57 
    
    //printf("%d",'\n' - '\r'); 
    //           10  -  13 => -3 

    //char c1='z'; // 122 
    //printf("%d\t%c\t%o",c1-57,c1-'9',c1-32);
    //                  122-57 , 122 - 57 , 122 - 32 
    
    char ch2 = 131; // Range   ( +ve and -ve )(127 to -128 )
    //by default signed 
    /*  
            char => 1 byte 
            1 byte => 8 bits
            (2 to the power 8 - 1) - 1   
            (2 to the power 7 ) - 1 
             128 - 1 => 127 

            max range => 127 
            min range => -128

    */
    printf("%d",ch2); //-128 
    
    /*
                unsigned char => 1 byte 
                (2 to the power 8) - 1  =>
                256 - 1 => 255 ( max range )
                0 to 255 
    */
    
    
    return 0; 
}
// -128 -127 -126 -125 ....0 1 2 3 4 ...... 127 

//128 => -128 
//129 => -127 
//130 => -126 
//131 => -125 

// char ch = 'A'; // => 65 => binary   

/*
        char ch = 900;  // 127 to -128 ( signed  )

        char => 1 byte => 8 bits 
        2 to the power 8 => 256 

        900 - 256 => 644 ( no )
        644 - 256 => 388 ( no )
        388 - 256 => 132 ( no )
        132 - 256 => -124 ( yes )  


*/