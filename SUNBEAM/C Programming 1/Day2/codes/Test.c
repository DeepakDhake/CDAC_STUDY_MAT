#include<stdio.h>
// int main(void)
// {
// signed char c1 = -1;
// unsigned char c2= -1; // 0 to 255 => 256   
// // 256 - 1 => 255 
// //printf("%u ",c2); // 255 
// printf("%d\n",c1+c2 );
// //            -1+255 => 254  
// return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// int val = 10;
// float fval = 56.789643;
// printf("%5d %*.*f",val,val,val-8,fval);
// //          %10.2f
// //                    5 6 . 7 8   
// //          - - - - - - - - - -    


// //       1 0 
// // - - - - - 

// return 0;
// }

// #include<stdio.h>
// int main()
// {
// printf("%d %d %d",'\r'-'\n','\r'-'\t','\r'-'\b');
// //                 13 - 10 , 13 - 9 , 13 - 8 
// //

// return 0;
// }

//1234 6789 
#include<stdio.h>
int main(void)
{
int a,b;
printf("Specify two numbers\n");
scanf("%2d%2d",&a,&b);
printf("a=%d b=%d\n",a,b);
return 0;
}
