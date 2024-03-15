#include<stdio.h>

int main()
{
   int N,i,j;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
	   {
	   for(int j=1;j<=N-i;j++)
		   {
		   	printf("  ");
		   }
		    for(int m=1;m<=i;m++)
		   {
		   	printf("* ");
		   }
	          printf("\n");
	   }
	   	for(int k=N-1;k>0;k--)
	   		{
	   			for(int j=1;j<=N-k;j++)
	   			{
	   				printf("  ");
	   			}
	   			for(int l=1;l<=k;l++)
	   			{
	   				printf("* ");
	   			}
	   	 printf("\n");
	   		}
   return 0;
}
     
    
