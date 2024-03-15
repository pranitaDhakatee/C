#include<stdio.h>

int main()
{
	int i,N,j,A;
	printf("enter a number of N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
		printf("%d ",i);
		}
		for(int k=i+1;k<=N;k++)
		{
		printf("%d ",k);
		}
		printf("\n");
	}
	
	return 0;
}
