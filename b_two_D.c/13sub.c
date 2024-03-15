#include<stdio.h>

int main()
{
	//1st matrix
	int m,n;
	printf("enter no of rows 1st matrix :");
	scanf("%d",&m);
	printf("enter no of coloum 1st matrix :");
	scanf("%d",&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
	}
	//2nd matrix
	int p,q;
	printf("enter no of rows 2nd matrix :");
	scanf("%d",&p);
	printf("enter no of coloum 2nd matrix :");
	scanf("%d",&q);
	if (m != p || n != q) {
        printf("Matrices cannot be subtracted\n:");
        }
        else
        {
	int b[p][q];
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
	}
	//sub 
	int res[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		res[i][j]= a[i][j] - b[i][j];
		printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	}
	return 0;
}
	
