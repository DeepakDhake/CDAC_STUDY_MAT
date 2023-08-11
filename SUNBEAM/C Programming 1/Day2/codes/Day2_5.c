#include<stdio.h> 

int main( )
{
    printf("%d ",sizeof(10.33));// double => 8 bytes  
    printf("%d ",sizeof(10.33f));// float => 4 bytes 
    printf("%d ",sizeof(10.33F));// float => 4 bytes  
    return 0; 
}


// int main( )
// {
//     char ch; 
//     printf("Enter the char"); 
//     scanf("%*c%c",&ch); 
//     printf("%c",ch); 
//     return 0; 
// }

// int main()
// {
//     //scanf ( ); 
//     int num1 , num2;
//     int ans;  
//     printf("Enter the 2 numbers"); 
//     //scanf("%d",&num1); 
//     //scanf("%d",&num2);  
//     scanf("%d%d",&num1,&num2);// 2 1 
    
//     ans = num1 + num2; // 2 + 1 => 3 
//     printf("ans = %d",ans); //3 

//     return 0;
// }
