

#include <stdio.h>

int main()
{
   int num;
   printf("Enter a number\n");
   scanf("%d",&num);
   if((num%7)==0 || (num%3)==0)
   {
       printf("given number is divisble by 7 or 3");
   }
   
   else
   {
       printf("given number is not divisible by 7 or 3");
   }

    return 0;
}
