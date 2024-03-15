#include<stdio.h>

int main()
{
   int p,q,m,N,i;
   printf("enter the value of N:");
   scanf("%d",&N);
   printf("enter the value of m:");
   scanf("%d",&m);
   printf("enter the value of p:");
   scanf("%d",&p);
   printf("enter the value of q:");
   scanf("%d",&q);
   for(int i=N;i<=m;i=i+1)
   {
   	if(i%p==0)
   	{
   		if(i%q!=0)
   		{
   			printf("%d\n",i);
   		}
   	}
   }
   return 0;
}
   
