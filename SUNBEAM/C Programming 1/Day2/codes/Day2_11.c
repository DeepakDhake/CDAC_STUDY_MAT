#include<stdio.h> 

int main( )
{
    //Increment / decrement operator 
    // ++       /   -- 
    //  +1     /     -1 
    // int a = 1; 
    // int ans; 
    // ans = a; 
    // printf("%d %d",a,ans); // 1 1  

    // int a = 1; 
    // int ans; 
    // ans = ++a; //preincrement operator 
    // printf("%d %d",a,ans); // 2 2 
    
    // int a = 1; 
    // int ans; 
    // ans = a++; //postincrement operator 
    // printf("%d %d",a,ans); // 2 1 
    
    // int a = 1; 
    // int ans; 
    // ans = a--; //postdecrement operator 
    // printf("%d %d",a,ans); // 0 1 
   
    int a = 1; 
    int ans; 
    ans = --a; //postdecrement operator 
    printf("%d %d",a,ans); // 0 0  
   
    //4++; //lvalue error => 4 = 4 + 1 
    //++num++; // lvalue error 
    //--num--; // lvalue error 
    return 0; 
}
/*
    num = 2 
    %d num++; =>2 
              =>3 

    %d ++num; =>3   

    num = num + 1; 
*/