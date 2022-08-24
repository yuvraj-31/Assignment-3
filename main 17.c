

#include <stdio.h>

int main()
{
   int a,b,c;
   printf("Enter the length of the sides of triangle\n");
   scanf("%d %d %d",&a,&b,&c);
   if((a+b)>c && (a+c)>b && (b+c)>a)
   {
       printf("given triangle is a valid triangle");
   }
   
   else
   {
       printf("given triangle is not a valid triangle ");
   }

    return 0;
}
