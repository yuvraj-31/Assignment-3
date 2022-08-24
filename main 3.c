#include <stdio.h>

int main()
{
   int num;
   printf("Enter a number\n");
   scanf("%d",&num);
   if(num%2==0)
    {
       printf("Given Number is an Even number");
    }
   else
    {
       printf("Given Number is an odd number");
    }
    
    return 0;
}
