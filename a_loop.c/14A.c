#include<stdio.h>

int main()
{
   int N,i,f=1;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
   	f=f*i;
   }
   	printf("%d\n",f);
   return 0;
}
   
