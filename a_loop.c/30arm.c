#include<stdio.h>
#include<math.h>
int main()
{
   int N;
   int A;
   int r;
   printf("enter the value of N:");
   scanf("%d",&N);
   int a=N;
   int s=0;
   while (N!=0)
   {
   	r=N%10;
   	A=pow(r,3);
   	s=s+A;
   	N=N/10;
   }
   if(s==a)
   {
   	printf("arm");
   }
   else
   {
   	printf("not arm");
   }
   return 0;
}
  
