#include<stdio.h>

int main()
{
	int i,N,j,A;
	printf("enter a number of N:");
	scanf("%d",&N);
	A=1;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
		printf("%d",A);
		}
		printf("\n");
		A=A+2;
	}
	
	return 0;
}
