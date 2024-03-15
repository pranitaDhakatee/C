#include<stdio.h>	

int main()
{
	int n;
	printf("enter of the number:");
	scanf("%d",&n);
	int arr[10][10];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);

		}
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j && arr[i][j]==0)
			{
				c=1;
			}
			else if (i!=j && arr[i][j]!=0)
			{
				c=1;
			}
			
		}
	}
	if(c==0)
	{
		printf("It is a diagonal matrix\n");
	}
	else
	{
		printf("It is not a diagonal matrix\n");
	}
	
}
//3
// 2 0 0
// 0 5 0
// 0 0 7
//true	









