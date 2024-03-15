#include<stdio.h>

int main()
{
	int N;
	printf("enter a number of N:");
	scanf("%d",&N);
	printf("1\n");
	for(int i=2;i<=N;i++)
	{
		   for(int j=1;j<=i+1;j++)
		   {
			if(j==1 || j==i+1)
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
