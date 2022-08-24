#include <stdio.h>

int
main ()
{
  int a, b, c;
  printf ("Enter the three numbers\n");
  scanf ("%d %d %d", &a, &b, &c);
  if (a != b && b != c && a != c)
    {
      if (a > b)
	{
	  if (a > c)
	    {
	      printf ("%d is the greatest number", a);
	    }
	  else
	    {
	      printf ("%d is the greatest number", c);
	    }
	}
      else
	{
	  if (b > c)
	    {
	      printf ("%d is the greatest number", b);
	    }
	  else
	    {
	      printf ("%d is the greatest number", c);
	    }
	}
    }
  if (a == b && b != c)
    {
      if (a > c)
	{
	  printf ("%d is the greatest number", a);
	}
      else
	{
	  printf ("%d is the greatest number", c);
	}
    }
  if (a == c && b != c)
    {
      if (a > b)
	{
	  printf ("%d is the greatest number", a);
	}
      else
	{
	  printf ("%d is the greatest number", b);
	}
    }
  if (a != b && b == c)
    {
      if (a > b)
	{
	  printf ("%d is the greatest number", a);
	}
      else
	{
	  printf ("%d is the greatest number", b);
	}
    }
  if (a == b && b == c)
    {
      printf ("%d is the greatest number", a);
    }

  return 0;
}
