#include <stdio.h>

int main()
{
   int num;
   printf("Enter a number\n");
   scanf("%d",&num);
   if(num>99 && num<1000)
    {
       printf("Given Number is a three digit number");
    }
   else
    {
       printf("Given Number is not a three digit number");
    }
    
    return 0;
}
