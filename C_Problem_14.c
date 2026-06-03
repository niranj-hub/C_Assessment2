#include <stdio.h>
int main() 
{
   int a,ones,tens,hundreds,thousands,result;
   printf("Enter a four digit number:");
   scanf("%d",&a);
   ones=a%10;
   tens=(a/10)%10;
   hundreds=(a/100)%10;
   thousands=a/1000;
   result=(ones==hundreds)&(tens==thousands);
   printf("%d",result);
   return 0;
}
