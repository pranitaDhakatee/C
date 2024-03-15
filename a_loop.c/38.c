#include<stdio.h>

int main()
{
   int N,i,t=1,x=2,m=1;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
   	t=t+m%i;
   	m=m*i;
   }
   	printf("%d\n",m);
   return 0;
}
  
