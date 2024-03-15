#include<stdio.h>

int main()
{
   int N,i,j,A=0;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
	   {
	   for(j=A+1;j<=i*i;j++)
		   {
		   	printf("%d",j);
		   }
	   printf("\n");
	   A=i*i;
	   }
   return 0;
}
     
    
