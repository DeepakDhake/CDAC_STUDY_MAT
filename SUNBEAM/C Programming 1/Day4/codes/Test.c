// #include<stdio.h>
// int main( void )
// {
// char i = 48;
// switch (i)
// {
// case '2': printf("SunBeam Karad");break; // case 50: 
// case '1': printf("SunBeam Market Yard");break;// case 49: 
// default : printf("SunBeam IT Park Hinjewadi");
// }
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// int i=5;
// if (!printf("0"))// if(!1)=> if(0)
// i = 3;
// else
// i = 5;
// printf("%d", i);
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// char check = 'a';
// again:
// if(check) // 97 
// {
// switch (check)
// {
// case ('a'=='b' || 1 ) : printf("PG-DAC "); break;// case 1: 
// case 0 && 'b'=='a' : printf("PG-DMC "); break; // case 0: 
// default : printf("PG-DITISS"); break; 
// }
// }
// else
// goto again;
// return 0;
// }

#include <stdio.h>
int main( void )
{
int num1,num2,num3;
num1 = 144;
num2 = 156;
num3 = printf("%10d",++num1 )+ ++num2;
//                   1 4 5 
//     - - - - - - - - - -  
//              10           +  157 
//                  167 

printf(" %d",num3);//167 
return 0;
}