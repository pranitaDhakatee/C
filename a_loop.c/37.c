#include<stdio.h>
#include<math.h>
int main()
{
   int N,i,s=0,a=0,A,b;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=0;i<N;i++)
   {
   	A=pow(10,i);
   	b=a+2*A;
   	s=s+b;
   }
   	printf("%d\n",s);
   return 0;
}
  
