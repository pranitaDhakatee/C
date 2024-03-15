#include<stdio.h>

int main()
{
	int i,N,j,A;
	printf("enter a number of N:");
	scanf("%d",&N);
	A=1;
	for(int i=0;i<=N;i++)
	{
		for(int j=0;j<=i;j++)
		{
		A=j*i;
		printf("%d ",A);
		}
		printf("\n");
	}
	
	return 0;
}
