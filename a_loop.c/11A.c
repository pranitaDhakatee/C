#include<stdio.h>

int main()
{
   int N,i,p=1,a;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
   	int a;
   	printf("enter the value of a:");
        scanf("%d",&a);
      	p=p*a;
   }
   	printf("%d\n",p);
   return 0;
}
  
