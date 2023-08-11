#include <stdio.h>
//namespace=to group/ organize functionally equivalent / related types together.

int num1=10;

namespace ns1
{
    int con=3307;
    namespace nns
    {
        int num2=221;
    }
}
namespace ns2
{
    int con=9982;
    int num3=55;
    int num4=56;
    int num5=56;
    int num6=56;
    int num7=56;
    int num8=56;

}

int main()
{
    num1=2; //ok
    ::num1=22; // accessing globle data
    printf("\n globle ::num1=%d",::num1);
   
   printf("\n ns1::con=%d",ns1::con);
   printf("\n ns1::nns::num2=%d", ns1::nns::num2);

   using namespace ns2;	// Like this we can write our own namespace
    printf("\n num3=%d",num3);


    return 0;
}

