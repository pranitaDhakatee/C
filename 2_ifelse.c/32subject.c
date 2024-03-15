#include<stdio.h>

int main()
{
   int p,c,m,b,g,S;
   scanf("%d %d %d %d %d",&p,&c,&m,&b,&g);
   S=(p+c+m+b+g*100)/500;
   printf("%d",S);
   if (S>=90)
   {
      printf("Grade A");
   }
   else if (S>80)
   {
      printf("Grade B");
   }
   else if (S>70)
   {
      printf("Grade C");
   }
   else if (S>60)
   {
      printf("Grade D");
   }
   else if (S>40)
   {
      printf("Grade E");
   }
   else if (S<40)
   {
      printf("Grade F");
   }
   else
   {
      printf("Fale");
   }
   return 0;
}
