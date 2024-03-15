#include<stdio.h>

int main()
{
   int N,i,j;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
	   {
	   for(int j=1;j<=i;j++)
		   {
		   	printf("* ");
		   }
	   
	   printf("\n");
	   }
	   	for(int k=N-1;k>0;k--)
	   		{
	   			for(int j=1;j<=k;j++)
	   			{
	   				printf("* ");
	   			}
	   	 printf("\n");
	   		}
   return 0;
}
     
    
