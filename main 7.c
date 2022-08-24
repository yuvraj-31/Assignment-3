#include <stdio.h>

int
main ()
{
  int a,b,c;
  printf ("Enter the coefficients value of quadratic equation\n");
  scanf ("%d %d %d", &a, &b, &c);
  int D = (b*b)-(4*a*c);
  if(D>0)
   {
      printf("Roots are real and distinct");
   }
  if(D==0)
   {
      printf("Roots are real and equal");
   }
  if(D<0)
   {
      printf("Roots are imaginary");
   }
  
  

  return 0;
}
