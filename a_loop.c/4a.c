#include<stdio.h>

int main()
{
   int N,i;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=100;i<=N;i=i+7)
   {
   	if(100%7)
   	printf("%d\n",i);
   }
   return 0;
}
   
