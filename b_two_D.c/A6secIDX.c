#include<stdio.h>
int main()
{
	int n;
	printf("enter of the number n:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//rev
	for(int i=0;i<n/2;i++)
	{
	int temp=arr[i];
	arr[i]=arr[n-1-i];
	arr[n-1-i]=temp;
	//	printf("%d",arr[i]);
	}
	
	for(int i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	}
	printf("\n");
	
	int size;
	printf("enter of size:");
	scanf("%d",&size);
	int list[size];
	for(int i=0;i<size;i++)
	{
	scanf("%d",&list[i]);
	}
	for(int i=0;i<size;i++)
	{
	printf("%d ",list[i]);
	}
	printf("\n");
	
return 0;
}
//4
//7 6 5 4
//4 5 6 7 

//2
//200 300
//200 300
