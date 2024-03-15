#include<stdio.h>

int main()
{
   int N;
   scanf("%d",&N);
   if (N%10==3)
   {
      printf("End with 3");
   }
   else if (N%10==7)
   {
     printf("End with 7");
   }
   else
   {
     printf("Num itself");
   }
   return 0;
}
