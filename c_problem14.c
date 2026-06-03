#include <stdio.h>
int main()
{
   int a,ones,tens,hundreds,Thousands;
   printf("Enter a  four digit number:");
   scanf("%d",&a);
   ones=a%10;
   tens=(a/10)%10;
   hundreds=(a/100)%10;
   Thousands=a/1000;
   if(Thousands==tens&&hundreds==ones)
   printf("success");
   else
   printf("Failure");
return 0;
}
