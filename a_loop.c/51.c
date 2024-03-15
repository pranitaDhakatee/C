#include<stdio.h>
#include<math.h>
int main()
{
   int N,i,a;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i=i+1)
   {
      	a=pow(i,2);
      	printf("%d\n",a);
   }
   return 0;
}
  
