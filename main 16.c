

#include <stdio.h>

int main()
{
   char c;
   printf("Enter a character\n");
   scanf("%c",&c);
   if(c>='A' && c<='Z')
   {
       printf("given character is an uppercase alphabet");
   }
   else if(c>='a' && c<='z')
   {
       printf("given character is a lowercase alphabet");
   }
   else if(c>='0' && c<='9')
   {
       printf("given character is a digit");
   }
   else
   {
       printf("given character is a special character");
   }

    return 0;
}
