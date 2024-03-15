#include<stdio.h>

int main()
{
	int N,i,j,k;
	printf("enter of the number N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N-i;j++)
		{
			printf("  ");
		}
			for(int k=1;k<=i;k++)
			{
				printf("* ");
			}
			for(int l=1;l<i;l++)
			{
				printf("* ");
			}
			printf("\n");
			}
			//printf("\n");
return 0;
}
