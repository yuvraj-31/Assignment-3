#include <stdio.h>

int main()
{
   int num;
   printf("Enter a number\n");
   scanf("%d",&num);
   if(num%5==0)
    {
       printf("Given Number is Divisible by 5");
    }
   else
    {
       printf("Given Number is Not Divisible by 5");
    }
    
    return 0;
}
