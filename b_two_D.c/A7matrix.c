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
			if(i==j && arr[i][j]!=1)
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
		printf("It is a identity matrix\n");
	}
	else
	{
		printf("It is not a identity matrix\n");
	}
	
}
	
//3
//1 0 0
//0 1 0
//0 0 1
//yes

//1 0 0
//1 0 0
//0 0 1








