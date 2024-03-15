#include<stdio.h>

int main()
{
	int i,N,j,A=1,k;
	printf("enter a number of N:");
	scanf("%d",&N);
	A=1;
	for(int i=0;i<=N;i++)
	{
		k=A;
		for(int j=0;j<=i;j++)
		{
		printf("%d ",k);
		k=k-1;
		}
		A=A+i+2;
		printf("\n");
		
	}
	
	return 0;
}
