#include<stdio.h>

int main()
{
   int N,i,j;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=N;i>0;i--)
	   {
	 
		   for(int m=1;m<=i;m++)
		   {
		   	printf("* ");
		   }
	          printf("\n");
	   }
	   	for(int k=1;k<=N;k++)
	   		{
	   			
	   			for(int l=1;l<=k;l++)
	   			{
	   				printf("* ");
	   			}
	   	 printf("\n");
	   		}
   return 0;
}
     
    
