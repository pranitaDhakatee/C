#include<stdio.h>

int main()
{
   int N,p=1;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i=i+1)
   {
   	p=p*i;
   }
   	printf("%d\n",p);
   return 0;
}
   
