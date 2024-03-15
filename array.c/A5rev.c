#include<stdio.h>

int main()
{
	int n;
	printf("enter of the number n:");
	scanf("%d",&n);
	int arr[n];
	int k=1;
	for(int i=0;i<n;i++)
	{
		arr[i]=k;
		k++;
	}
	//int A=n-1;
	for(int A=n-1;A>=0;A--)
	{
		printf("%d\n",arr[A]);
	}
	return 0;
}
	
	
/*	#include<stdio.h>
int main()
{
	int arr[5];
	for (int i=0;i<=4;i++)
	{
		printf("enter of the number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=4;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	return 0;
}*/
