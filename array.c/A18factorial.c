#include<stdio.h>

int main()
{
	int n;
	printf("enter of the number n:");
	scanf("%d",&n);
	int arr[n];
	//int f=1;
	int p=0;
	for(int i=1;i<=n;i++)
	{	int f=1;
		for(int j=1;j<=i;j++)
		{
			f=f*j;
		}
		arr[p]=f;
		p++;
	}
	for(int j=0;j<n;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}

