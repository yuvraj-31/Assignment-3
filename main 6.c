#include <stdio.h>

int
main ()
{
  int num1, num2;
  printf ("Enter the two numbers\n");
  scanf ("%d %d", &num1, &num2);
  if (num1 != num2)
    {
       if (num1 > num2)
	    {
	       printf ("%d is greatest number", num1);
	    }
      else
	    {
	       printf ("%d is greatest number", num2);
     	}
    }
  else
    {
      printf ("%d is greatest number", num1);
    }

  return 0;
}
