#include<stdio.h>

int main()
{
   int N,i,a=0,b=1,c;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
   	printf("%d\n",a);
   	c=a+b;
   	a=b;
   	b=c;
   }
   return 0;
}
   
