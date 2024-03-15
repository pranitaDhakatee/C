#include<stdio.h>

int main()
{
   int N;
   int a;
   printf("enter the value of N:");
   scanf("%d",&N);
   int s=0;
   while (N>0)
   	{
   		a=N%10;
		s=s+a;
   		N=N/10;
   	}
   	       printf("%d",s);
   return 0;
}
  
