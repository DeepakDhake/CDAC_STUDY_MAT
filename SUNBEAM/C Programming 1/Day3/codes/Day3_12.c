#include <stdio.h>

int main( )
{
    //goto
    int rank; 

    START: 
    printf("Enter the rank"); 
    scanf("%d",&rank); 

    if(rank>=1 && rank<=5)
            goto LABEL; 
    else 
            goto START;  

    LABEL: 
    printf("Excellent rank all the best!!!!"); 
    return 0; 





    return 0; 
}


// int main()
// {
//     //break , continue , return , goto

//     //   int i;
//     //   if(i==1)//break statement not within loop
//     //     continue;
//     int i; 
//     for (i = 1; i <= 5; i++)
//     {

//         if (i == 3)
//           continue;
//         printf("%d", i);//1 2 4 5     
//     }

//     return 0;
// }
// int main( )
// {
//     //break , continue , return , goto

//     int i;
//     //if(i==1)//break statement not within loop or switch
//     //  break;

//     for( i = 1 ; i<=5 ; i++)
//     {
//         printf("%d",i); //1 2 3
//         if(i == 3)
//            break;
//     }
//     printf("\n outside the loop : %d",i); // 3

//     return 0;
// }