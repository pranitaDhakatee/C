#include<stdio.h>
#include<math.h>
int main()
{
   int N,s=0,a;
   printf("Enter the value of N: ");
   scanf("%d", &N);
   for(int i=1;i<=N;i++)
   {
   	a=pow(i,3);
   	s=s+a;
   }
   	printf("%d\n",s);
   return 0;
}
 // -lm
