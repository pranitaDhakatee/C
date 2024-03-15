#include<stdio.h>
int main()
{
	int r,c;
	printf("enter of the r:");
	scanf("%d",&r);
	printf("enter of the c:");
	scanf("%d",&c);
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int tar;
	printf("enter of the ele find:");
	scanf("%d",&tar);
	int fr=-1,fc=-1;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(arr[i][j] == tar)
			{
			fr=i;
			fc=j;
			break;
			}
		}
	}
	if(fc!=-1 &&fc!=-1)
	{
	printf("%d element found (%d,%d).\n",tar,fr,fc);
	}
	else
	{
	printf("%d\n",tar);
	}

	return 0;
}

//found value
