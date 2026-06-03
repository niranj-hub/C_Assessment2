#include <stdio.h>
int main() 
{
   int a,ones,tens,result;
   printf("Enter a two digit number:");
   scanf("%d",&a);
   ones=a%10;
   tens=a/10;
   result=(tens>=ones);
   printf("%d",result);
   return 0;
}
