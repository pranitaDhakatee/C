#include<stdio.h>


void rotateWithGap(int arr[],int n,int k)
{
	int temp[n];
	for(int i=0;i<n;i++)
	{
	temp[(i+k)%n]=arr[i];
	//printf("%d",arr[(i+k)%n]);
	}
	for(int i=0;i<n;i++)
	{
	arr[i]=temp[i];
	}
}
int main()
{
int n,k;
printf("enter of the array:");
scanf("%d",&n);
int arr[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("enter the value of k:");
	scanf("%d",&k);
	 rotateWithGap(arr, n, k);
	printf("array rotated %d:",k);
	for(int i=0;i<n;i++)
	{
	printf("%d",arr[i]);
	}
	printf("\n");
    return 0;
}



