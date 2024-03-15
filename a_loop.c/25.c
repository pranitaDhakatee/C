#include<stdio.h>

int main()
{
   int N;
   int a;
   printf("enter the value of N:");
   scanf("%d",&N);
   int p=1;
   while (N>0)
   	{
   		a=N%10;
		p=p*10+a;
   		N=N/10;
   	}
   	       printf("%d",p);
   return 0;
}
  
