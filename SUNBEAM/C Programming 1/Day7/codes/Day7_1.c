#include<stdio.h> 

int main( )
{
    //input a single digit number 
    // 1 => one 
    // 2 => two 
    char *numbers[] = { "zero", "one", "two","three" };  
    //printf("%d",sizeof(numbers)); // 4 * 4 => 16 
    
    int num; 
    printf("Enter the number"); 
    scanf("%d",&num); // 0 
    printf("%s",numbers[num]); // numbers[0] 
    
    return 0; 
}
/*
      char *str1 = "hello";   
      char *str2 = "world"; 
      char *str3 = "sunbeam";
      char *str4 = "info";    

      char *str1[] = {"hello","world","sunbeam","info"};

      int *a = &num1; 
      int *b = &num2; 

      int *a[] = {&num1 , &num2};  
*/