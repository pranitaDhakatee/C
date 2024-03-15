#include<stdio.h>

int main()
{
   int P,Tax;
   scanf("%d",&P);
   if (P>100000)
   {
   Tax=P*15/100;
      printf("%d",Tax);
   }
   else if (P>50000 && P<=100000)
   {
   Tax=P*10/100;
      printf("%d",Tax);
   }
   else if (P<=500000)
   {
   Tax=P*5/100;
      printf("%d",Tax);
   }
   else 
   {
      printf("Tax to be paid");
   }
   return 0;
}
