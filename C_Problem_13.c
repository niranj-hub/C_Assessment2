#include <stdio.h>
int main() 
{
   int a,ones,tens,result;
   printf("Enter a four digit number:");
   scanf("%d",&a);
   ones=a%10;
   tens=(a/10)%10;
   result=(ones==tens);
   printf("%d",result);
   return 0;
}
