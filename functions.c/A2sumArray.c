#include<stdio.h>

int sumArray(int arr[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
	sum=sum+arr[i];
	}
	return sum;
	}
	int main()
	{
	int arr[]={8,2,3,0,7};
	int size=sizeof(arr)/sizeof(arr[0]);
	int result=sumArray(arr,size);
	printf("sum of array elements:%d\n",result);
	return 0;
}










































































