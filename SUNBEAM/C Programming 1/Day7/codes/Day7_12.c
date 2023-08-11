#include<stdio.h> 
void readArray(int arr[3][3]); 
void printArray(int arr[3][3]); 
int main( )
{
    
    int arr[3][3];
    
    printf("Enter the array elements"); 
    readArray(arr);
    printf("Array elements are "); 
    printArray(arr); 
    return 0; 
}
//void readArray(int (*ptr)[3] )//=>ptr is a pointer to the block of 3 integers   
void readArray(int arr[3][3])
{
    int r,c; 
    for( r = 0 ; r < 3 ; r++)
    {
        for( c = 0 ; c< 3 ; c++)
        {
            scanf("%d",&arr[r][c]);
        }
    }
}
void printArray(int arr[3][3])
{
    int r,c; 
    for( r = 0 ; r < 3 ; r++)
    {
        for( c = 0 ; c< 3 ; c++)
        {
            printf("%4d",arr[r][c]);
        }
        printf("\n"); 
    }
}