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
	
	//spiral
	printf("\n");
	int minr=0;
	int maxr=m-1;
	int minc=0;
	int maxc=n-1;
	int tnu=m*n;
	int c=0;
	while(c<tnu)
	{
	//min row
	for(int j=minc;j<=maxc && c<tnu;j++)
	{
		printf("%d ",a[minr][j]);
		c++;
	}
	minr++;
	//print max coloum
	for(int i=minr;i<=maxr && c<tnu;i++)
	{
	printf("%d ",a[i][maxc]);
	c++;
	}
	maxc--;	
	//print max row
	for(int j=maxc;j>=minc && c<tnu;j--)
	{
	printf("%d ",a[maxr][j]);
	c++;
	}
	maxr--;
	//print min coloum
	for(int i=maxr;i>=minr && c<tnu;i--)
	{
	printf("%d ",a[i][minc]);
	c++;
	}
	minc++;
	}
	return 0;
}
//3 
//3
//1 2 3
//8 9 4 
//7 6 5
//1 2 3 4 5 6 7 8 9

