#include <stdio.h>

int main()
{
    //matrix representation
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // 2D array

    /*
        arr 
                [0]    [1]    [2]
        [0]      1      2      3 
        100     100    104    108 

        [1]      4      5      6 
        112     112    116    120 

        [2]      7      8      9 
        124     124    128    132  

    */

    int row, col;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%u ", &arr[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    // name of array represents base address
    // printf("%u ",arr); // 100
    // printf("%u ",&arr[0][0]); //100

    //printf("%u ",arr); // 100

    //printf("%u ",arr + 1 );//112
    /*
                arr + 1 
                100 + 1 
                100 + 1 * 12 
                112  
      */
    //printf("%u ",arr + 2 );//124

    //inner address
    //printf("%u ",*(arr + 0) );//100

    //printf("%u ",*(arr + 1) );//112

    //printf("%u ",*(arr + 2) );//124

    //Elements

    //printf("%u ", *(*(arr + 0) )  ); //1
    //printf("%u ", *arr[0] );//1
    //printf("%u ", *(*(arr + 1) ) ); // 4

    //printf("%u ", *(*(arr + 2) ) ); // 7

    //printf("%u ",*(arr + 0) + 1 ); //104
    //printf("%u ",*(arr + 1) + 1 ); //116
    //printf("%u ",*(arr + 2) + 2 ); //132

    // printf("%u ", *(*(arr + 0) + 1 )  ); // *(104) =>2
    // printf("%u ", *(*(arr + 1) + 1 ) );// *(116) => 5
    // printf("%u ", *(*(arr + 2) + 2 )); //*(132) => 9

    /*
            arr[0][1]  =>   *(*(arr + 0) + 1 ) 
            arr[1][1]  =>   *(*(arr + 1 ) + 1)
            arr[2][2]  =>   *(*(arr + 2) + 2 )       
        */

    //  printf("%d ",arr[2][2]); // array notation
    //  printf("%d ",*(*(arr + 2) + 2 )  ); // pointer notation

    //printf("%u ", **arr );//1

    //printf("%u ", *arr + 1  );//104
    /*
                    100 + 1 
                    100 + 1 * 4 
                    104 

          */

    //printf("%u ", *(*arr + 1)  );//*(104) => 2
    return 0;
}
/*
        arr => base address ( outer address )
        arr + 0 => outer address 

        *(arr + 0 ) => inner address 
        *(arr + 0) + 1 => col ( 4  bytes )
        *(*(arr + 0) + 1)  => value 

        arr[1][1] =>  *(*(arr + 1 ) + 1 ) 
*/