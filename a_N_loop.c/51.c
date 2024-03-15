#include<stdio.h>

int main()
{
   int N,i,j;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
	   {
	   for(int j=1;j<=(N-i);j++)
		   {
		   	printf(" ");
		  }
		   for(int k=1;k<=i;k++)
		   {
		   	printf("%d ",k);
		   }
	        printf("\n");
	    }
	  int p=N-1;     
	  for(int k=p;k>0;k--)
	   		{
	   			for(int j=1;j<=N-k;j++)
	   			{
	   				printf(" ");
	   			}
	   			for(int l=1;l<=k;l++)
	   			{
	   				printf("%d ",l);
	   			}
	   			printf("\n");
	   	 
	                }
	   		
	   
   return 0;
}
     
    
