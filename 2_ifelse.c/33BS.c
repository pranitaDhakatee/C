#include<stdio.h>

int main()
{
   int BS,HRA,GS,DA;
   scanf("%d",&BS);
   if (BS<=10000)
   {
   HRA=BS*20/100;
   DA=BS*80/100;
   GS=BS+HRA+DA;
      printf("%d",GS);
   }
   else if (BS<=20000)
   {
   HRA=BS*25/100;
   DA=BS*90/100;
   GS=BS+HRA+DA;
      printf("%d",GS);
   }
   else if (BS>=20000);
   {
   HRA=BS*30/100;
   DA=BS*95/100;
   GS=BS+HRA+DA;
      printf("%d",GS);
   }
   return 0;
}
