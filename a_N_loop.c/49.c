#include<stdio.h>

int main()
{
	int i,N,j,A=1;
	printf("enter a number of N:");
	scanf("%d",&N);
	A=1;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
		printf("%d ",j);
		}
		for(int k=i-1;k>0;k--)
		printf("%d ",k);
		printf("\n");
	}
	
	return 0;
}
