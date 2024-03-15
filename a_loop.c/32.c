#include<stdio.h>
int main()
{
   int N;
   int r;
   printf("enter the value of N:");
   scanf("%d",&N);
   int s=0;
   int a=N;
   while (N!=0)
   {
   	r=N%10;
   	s=s*10+r;
   	N=N/10;
   }
   if(s==a)
   {
   	printf("palindrom");
   }
   else
   {
   	printf("not palindrom");
   }
   return 0;
}
  
