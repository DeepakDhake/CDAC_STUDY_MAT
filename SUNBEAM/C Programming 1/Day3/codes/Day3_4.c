#include<stdio.h> 

int main( )
{
    int num1 = 1000; 
    int num2 = 2000;
    int num3 = 3000; 

    if(num1 > num2) // if(1000>2000)=> if(0)
    {
        if(num1 > num3) 
        {
            printf("num1 is greater"); 
        }
        else 
        {
            printf("num3 is greater"); 
        }
    }
    else 
    {
        if( num2 > num3) // if(2000>3000)
        {
            printf("num2 is greatest"); 
        }
        else 
        {
            printf("num3 is greatest"); 
        }
    }

    return 0; 
}

/*
    if(condtn)
    {
            if(condtn)
            {

            }
            else
            {

            }
    }
    else
    {
        if(condtn)
        {

        }
        else
        {

        }

    }

*/