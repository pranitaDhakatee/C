#include<stdio.h>
int main()
{
   int N,i,s=0,fact=1,A;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i=i+1)
   {
      	fact=fact*i;
      	A=i/fact;
      	s=s+A;
   }
   	printf("%d",s);
   return 0;
}
  
