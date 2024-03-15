#include<stdio.h>

int main()
{
   int N,i,s;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
      	s=i*i;
      	printf("%d %d\n",i,s);
   }
   return 0;
}
  
