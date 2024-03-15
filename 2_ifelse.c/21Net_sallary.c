#include<stdio.h>

int main()
{
   int y;
   float s,Bonus,Net_salary;
   scanf("%d %f",&y,&s);
   if (y>=5)
   {
      Bonus=s*5/100;
      Net_salary = s+Bonus;
      printf("%0.2f\n",Bonus);
      printf("%0.2f\n",Net_salary);
   }
   else
   {
     printf("No Bonus\n");
   }
   return 0;
}
