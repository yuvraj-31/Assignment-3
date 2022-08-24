

#include <stdio.h>

int main()
{
   float phy,chem,maths,eng,hindi;
   printf("Enter physics subject marks\n");
   scanf("%f",&phy);
   printf("Enter chemistry subject marks\n");
   scanf("%f",&chem);
   printf("Enter maths subject marks\n");
   scanf("%f",&maths);
   printf("Enter english subject marks\n");
   scanf("%f",&eng);
   printf("Enter hindi subject marks\n");
   scanf("%f",&hindi);
   float result = ((phy+chem+maths+eng+hindi)/500)*100;
   if(phy>=33 && chem>=33 && maths>=33 && eng>=33 && hindi>=33)
   {
       printf("Your result is %0.2f percent , and you are passed in the examination",result);
   }
   else
   {
       printf("Your result is %0.2f percent, and you are failed in the examination",result);
   }
   

    return 0;
}
