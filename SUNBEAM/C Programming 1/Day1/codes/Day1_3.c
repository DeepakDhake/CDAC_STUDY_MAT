#include<stdio.h> 
int main()
{
    
    printf("Program started..\n"); 
    int ans;
    ans = 5 / 0; // divide by zero 
    //runtime error 
    printf("%d",ans);  
    printf("Program End..\n"); 
    return 0;
}
/*
1. Compilation ( Yes )
2. Excution Start ( Yes )
3. Program Succesfully execute ( no )

// OS => main function 

//int -> integer 
int main( )
{
    // 0 => integer 
    return 0; 
}

// void => nothing 
void main( )
{

}


*/