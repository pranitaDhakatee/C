#include<stdio.h>
#include<math.h>
int main()
{
   int N,k,s=0,a,i;
   printf("Enter the value of N: ");
   scanf("%d", &N);
   printf("Enter the value of K: ");
   scanf("%d", &k);
   for(int i=1;i<=N;i++)
   {
   	a=pow(i,k);
   	s=s+a;
   }
   	printf("%d\n",s);
   return 0;
}
 // -lm
