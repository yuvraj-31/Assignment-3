#include <stdio.h>

int main()
{
   int num;
   printf("Enter a number\n");
   scanf("%d",&num);
   if(num>0)
   {
       printf("Given Number is Positive");
   }
   if(num<=0)
   {
       printf("Given Number is Non-Positive");
   }
    
    return 0;
}
