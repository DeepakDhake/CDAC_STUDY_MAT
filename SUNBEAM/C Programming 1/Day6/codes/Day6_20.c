#include<stdio.h>
#include<string.h>  

int main( )
{
    // char str1[20] = "Sunbeam";
    // char str2[20] = "sunbeam";

    // //strcmp(); 
    // if(str1 == str2)// address are getting compared 
    //     printf("same"); 
    // else 
    //     printf("not same"); 

    
    // int res = strcmp( str1 , str2);
    // if(res == 0 )
    //     printf("Same"); 
    // else 
    //     printf("not same");  

    // char *str1 = "Info"; // pointer to string  
    // char *str2 = "Info"; // pointer to string  
    // // memory allocated in RO data section 
    // // RO => readonly      
    //  if(str1 == str2)// address are getting compared 
    //     printf("same"); 
    // else 
    //     printf("not same"); 

    // char name[20] = "Info"; 

    // name[0] = 'K'; 
    // printf("%s",name); // Knfo

    //  char *name = "info"; // RO data section 
    //  name[0] = 'K'; 
    //  printf("%s",name); // Runtime error
     // Trying to modify the string which has been allocated 
     // from RO data section  

      char str[10] = "Sunbeam"; 

      //printf("%s",str); // Sunbeam 

        printf(str); // Sunbeam 
        printf("\n");
        printf(str + 1 );//unbeam 
        printf("\n");  
        printf(str + 2 );//nbeam
        printf("\n"); 
        printf(str + 3 );//beam  




    return 0; 
}