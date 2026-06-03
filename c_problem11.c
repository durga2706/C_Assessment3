#include <stdio.h>
int main()
{
   int a,ones,tens;
   printf("Enter a  two digit number:");
   scanf("%d",&a);
   ones=a%10;
   tens=a/10;
   if(tens<=ones)
   printf("success");
   else
   printf("Failure");
return 0;
}
