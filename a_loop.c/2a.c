#include<stdio.h>

int main()
{
   int N,i,s=0;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=2;i<=N*2;i=i+2)
   {
   	s=s+i;
   }
   	printf("%d\n",s);
   return 0;
}
   
