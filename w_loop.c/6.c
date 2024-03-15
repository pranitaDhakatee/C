#include<stdio.h>

int main()
{
	int N;
	printf("enter of the number N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=(N-i);j++)
		{
			printf("  ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
		for(int l=i-1;l>0;l--)
		{
			printf("%d ",l);
		}
		printf("\n");
        }
        return 0;
}
