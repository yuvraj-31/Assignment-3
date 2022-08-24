

#include <stdio.h>

int main()
{
   char alphabet;
   printf("Enter an alphabet\n");
   scanf("%c",&alphabet);
   if(alphabet>='A' && alphabet<='Z')
   {
       printf("given alphabet is an uppercase alphabet");
   }
   else if(alphabet>='a' && alphabet<='z')
   {
       printf("given alphabet is a lowercase alphabet");
   }
   else
   {
       printf("given alphabet is not valid");
   }

    return 0;
}
