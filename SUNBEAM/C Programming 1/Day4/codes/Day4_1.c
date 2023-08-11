#include <stdio.h>
int main()
{
    int a = 4;
    //int x;
    //datatype variable
    enum color // creating a datatype
    {
        RED, GREEN, BLUE
        //RED=1, GREEN=2, BLUE=3
        //RED=-1, GREEN, BLUE
        //RED=-1, GREEN=-1, BLUE
        //RED=1.5, GREEN=-1, BLUE // NOT OK
        //RED=12, GREEN=1, BLUE
        //RED='A', GREEN, BLUE
        //RED='A' + 1 , GREEN, BLUE
        //red, GREEN, BLUE
        //red, GREEN, BLUE,red // NOT OK
        //RED, GREEN, BLUE,red
        //RED = a , GREEN, BLUE
    };
    // enum IPL
    // {
    //     MI , CSK , RR 
    // };
    // enum IPL I1,I2;

    enum  // annonymous enum 
    {
        MI , CSK , RR 
    }I1,I2; 
    return 0;
}

// int main()
// {
//     //int x;
//     //datatype variable
//     enum color // creating a datatype
//     {
//         RED, GREEN, BLUE, WHITE, YELLOW
//     };
//     //printf("%d",RED);//0
//     //printf("%d",GREEN);//1
//     //printf("%d",BLUE); //2

//     enum color    c1,c2,c3;
//     //datatype   variable-name
//     c1 = RED;
//     printf("%d ",c1); // 0
//     c1++;
//     printf("%d ",c1); // 1
//     //RED++;// 0++ => 0 = 0 + 1

//     printf("\n %d %d",sizeof(enum color) , sizeof(c1));

//     return 0;
// }
