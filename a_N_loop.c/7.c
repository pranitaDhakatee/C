#include<stdio.h>

int main()
{
	int i,N,m=1,j;
	printf("enter a number of N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		//printf("i=%d",i);
		for(int j=1;j<=i;j++)
		{
		printf("%d",m);
		m=m+1;
		}
		printf("\n");
	}
	
	return 0;
}
