#include<stdio.h>

int main()
{
   int N,i,s=0,a,p;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
   	int a;
   	printf("enter the value of a:");
        scanf("%d",&a);
      	s=s+a;
   }
   	p=s/N;
   	printf("%d\n",p);
   return 0;
}
  
