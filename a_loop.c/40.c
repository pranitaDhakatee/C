#include<stdio.h>
int main()
{
   int N,s=0;
   printf("Enter the value of N: ");
   scanf("%d", &N);
   for(int j=1;j<=N;j++)
   {
   	int i=1;
        i=i*j;
   	s=s+i;
   }
   	printf("%d\n",s);
   return 0;
}

