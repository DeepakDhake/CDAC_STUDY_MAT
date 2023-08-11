#include<stdio.h> 

int main( )
{
    int choice=12; 

    //switch (choice)
    //switch (1)
    //switch (1.5)
    //switch ((int)1.5)
    //switch (++choice) 
    //switch (choice++) 
    switch (12,13) 
    {
    
         case 1: 
        //case 1.5://NOT OK 
        //case 'A':               //case 65:   
        //case 0 + 1:               // case 1:   
        //case 2:  
        //case 12 || 13:              //case 1:  
        //case 12 && 0:                //case 0 
        //case 12 : case 13:  
        //case 12: 
        //case 13: 
        //case 'A': 
        //case choice:   
        printf("one ");   
        break;   

        case 12: 
        printf("two "); 
        break; 
            
        case 13:   
        printf("Three ");
        break; 

        default: 
        printf("Invalid");
        break; 

 
    }  
    return 0; 
}

// int main( )
// {
//     int choice=12; 

//     switch (choice)
//     {
//         default: 
//         printf("Invalid");
//         break; 
    
//         case 1: 
//         printf("one ");   
//         break;   

//         case 2: 
//         printf("two "); 
//         break; 
            
//         case 12:   
//         printf("Three ");
//         break; 

 
//     }  
//     return 0; 
// }
// int main( )
// {
//     int choice=12; 

//     switch (choice)
//     {
//         case 1: 
//         printf("one ");   
//         break;   

//         case 2: 
//         printf("two "); 
//         break; 
            
//         case 3:   
//         printf("Three ");
//         break; 

//         default: 
//         printf("Invalid");
    
//     }  
//     return 0; 
// }