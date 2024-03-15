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
	//2nd matrix
	int p;
	printf("enter no of rows 2st matrix :");
	scanf("%d",&p);
	int q;
	printf("enter no of coloum 2st matrix :");
	scanf("%d",&q);
	int b[p][q];
	//input 2nd element
	printf("\n enter elements of 2nd matrix:");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
	//check
	
	if(n!=p)
	{
		printf("the matrix cannot be multiply");
	}
	else
	{
	int res[m][q];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
		res[i][j]=0;
		//i row of a, j column of b
		for(int k=0;k<n;k++)
		{
		res[i][j]=res[i][j]+a[i][k]*b[k][j];
		}
		}
	}
	printf("the resultant matrix is:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	
	}
	return 0;
}
	
	
