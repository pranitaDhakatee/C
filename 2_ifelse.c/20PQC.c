#include<stdio.h>

int main()
{
   int Q,A,Discount,Total_cost;
 
   scanf("%d",&Q);
   A=Q*100;
   if (Q>1000)
   {
      Discount=A*10/100;
      Total_cost=A-Discount;
      printf("%d\n",Total_cost);
   }
   else
   {
     printf("No Bonus\n");
   }
   return 0;
}
