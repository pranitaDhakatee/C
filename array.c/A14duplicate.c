#include<stdio.h>

int main()
/*{
	int N;
	printf("enter of the number N:");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{

		printf("enter of the number e:");
		scanf("%d",&arr[i]);
	}
	int c=0;
	for(int k=0;k<N;k++)
	{	c=0;
		for(int j=0;j<N;j++)
		{
			if(arr[k]==arr[j])
			{
			c++;
			}
		}
		if (c==1)
		{
			printf("%d\n",arr[k]);
		}
	}
	return 0;
}*/
{
	int N;
	printf("enter of the number N:");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
	scanf("%d",&arr[i]);
	}
	int i;
	for(int i=0;i<N;i++)
	{
		int c=0;
		for(int j=i+1;j<N;j++)
		{
			if(arr[i]==arr[j])
			{
			c++;
			}
		}
	 if(c==1)
	{
	printf("%d\n",arr[i]);
	}
	}
	return 0;
}
