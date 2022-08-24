
#include <stdio.h>

int main()
{
   int month_num;
   printf("Enter the month number\n");
   scanf("%d",&month_num);
   if(month_num==4 || month_num==6 || month_num==9 || month_num==11)
   {
       printf("month has 30 days");
   }
   else if(month_num==1 || month_num==3 || month_num==5 || month_num==7 || month_num==8 || month_num==10 || month_num==12)
   {
       printf("month has 31 days");
   }
   else if(month_num==2)
   {
       printf("month has 28/29 days");
   }
   else
   {
       printf("please enter a valid month number");
   }
   

    return 0;
}
