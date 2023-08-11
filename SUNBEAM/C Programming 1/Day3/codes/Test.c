#include<stdio.h>
// int main( void )
// {
// int var1=100,var2=200;
// var2-= var1--;
// //var2 = var2 - var1--; 
// //     = 200  - 100 
// //     =  100      
// printf("var2=%d var1=%d",var2, var1);
// //                        100   99  
// return 0;
// }

#include<stdio.h>
int main( void )
{
int num1 = 0, num2 = -1 , num3 = -2, num4 = 1, ans;
ans = num1++ && num2++ || ++num4 && num3++;
//    (num1++ && num2++) || (++num4 && num3++;) 
//     (F++   &&  XXXX)  || ( ++T  && T++ )
//             F         ||     T
//                       T        



printf("%d %d %d %d %d",num1, num2, num3, num4, ans);
//                       1     -1     -1   2     1  
return 0;
}