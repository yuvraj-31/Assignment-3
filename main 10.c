#include <stdio.h>

int
main ()
{
  float cp,sp;
  printf ("Enter the cost and selling price\n");
  scanf ("%f %f", &cp, &sp);
  if(sp>cp)
  {
      float profit_percentage = ((sp-cp)/cp)*100;
      printf("profit is %f percent",profit_percentage);
  }
  else if(cp>sp)
  {
      float loss_percentage = ((cp-sp)/cp)*100;
      printf("loss is %f percent",loss_percentage);
  }
  else
  {
      printf("no profit and no loss");
  }
 

  return 0;
}
