#include<stdio.h>

int main()
{
	//1st matrix
	int m;
	printf("enter no of rows 1st matrix :");
	scanf("%d",&m);
	int n;
	printf("enter no of coloum 1st matrix :");
	scanf("%d",&n);
	int a[m][n];
	//input 1st element
	printf("\n enter elements of 1st matrix:");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	
	//wave
	printf("\n");
	for(int i=0;i<m;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d",a[i][j]);
			}
		}
		else
		{
		for(int j=n-1;j>=0;j--)
		{
			printf("%d",a[i][j]);
		}
	       }
	printf("\n");
	} 
	return 0;
}
