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
			printf(" ");
		}
			for(int k=1;k<=i;k++)
			{
				printf("* ");
			}
			for(int l=1;l<=N-i;l++)
			{
				printf("  ");
			}
			for(int m=1;m<=i;m++)
			{
				printf("* ");
			}
                        printf("\n");                			
	}
	for(int p=1;p<N-i;p++)
	{
		for(int j=1;j<=N*2;j++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
	int s=N*2;
		for(int k=s;k>0;k--)
		{
		for(int l=1;l<=s-k;l++)
		{
			printf(" ");
		}
		for(int b=1;b<=k;b++)
		{
			printf("* ");
		}
		printf("\n");
	}
		
return 0;
}
