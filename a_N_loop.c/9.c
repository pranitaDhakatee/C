#include<stdio.h>

int main()
{
	int i,N,j;
	printf("enter a number of N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		//printf("i=%d",i);
		for(int j=1;j<=i;j++)
		{
			if(j==1)
			{
				printf("1 ");
		        }
		        else
		        {
		        	printf("0 "); 
		        }
		 }
		printf("\n");
	      }
	
	return 0;
}
