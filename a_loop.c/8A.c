#include<stdio.h>

int main()
{
   int N,i,s=0,a;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
   	int a;
   	printf("enter the value of a:");
        scanf("%d",&a);
      	s=s+a;
   }
   	printf("%d\n",s);
   return 0;
}
  
