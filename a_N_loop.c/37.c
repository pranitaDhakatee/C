#include<stdio.h>

int main()
{
	int N;
	printf("enter of the number N:");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=i;j++)
			{
				if(j==i)
				{
					printf("%d",j);
					printf("  ");
				}
				else
				{
					printf("%d",j);
					printf("*");
				}
			}
		printf("\n");
	}
	return 0;
}	
