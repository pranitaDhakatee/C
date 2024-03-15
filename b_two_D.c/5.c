#include<stdio.h>

int main()
{
	int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,1,1,1,}};
	int maxC=0;
	int idx=-1;
	for(int i=0;i<3;i++)
	{
		int c=0;
	for(int j=0;j<4;j++)
	{
		if(arr[i][j]==1)
		c++;
	}
	if(maxC<c)
	{
	maxC=c;
	idx=i;
	}
	printf("\n");
	}
	printf("%d",idx);
	return 0;
}	
	
