

#include <stdio.h>

int main()
{
   int num;
   printf("Enter a number\n");
   scanf("%d",&num);
   if(num>0)
   {
       printf("given number is positive");
   }
   
   else if(num<0)
   {
       printf("given number is negative");
   }
   else
   {
       printf("given number is equal to zero");
   }

    return 0;
}
