#include<stdio.h>

int main()
{
	int i,N,j,A=1;
	printf("enter a number of N:");
	scanf("%d",&N);
	A=1;
	for(int i=1;i<=N*2;i=i+2)
	{
		for(int j=1;j<=i;j++)
		{
		printf("%d ",A);
		A=A+1;
		}
		printf("\n");
	}
	
	return 0;
}
