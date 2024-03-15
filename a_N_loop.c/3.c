#include<stdio.h>

int main()
{
	int i,N,j;
	printf("enter a number of N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		printf("i=%d",i);
		for(int j=1;j<=4;j++)
		{
		printf("bye\n");
		}
		printf("\n");
	}
	return 0;
}
