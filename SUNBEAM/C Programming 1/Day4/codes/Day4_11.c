#include<stdio.h> 

int main( )
{
    {
        {
            int c = 10; 
            {
                c+=1; 
                printf("\nc = %d",c); //  11 
            }
            printf("\nc = %d",c); //  11 
        }
    }
 
    return 0; 
}
// int main( )
// {
//     {
//         {
//             {
//                 int c = 10; 
//                 printf("c = %d",c); //  OK 
//             }
//         }
//     }
//     //printf("c = %d",c); // NOT OK 
//     return 0; 
// }