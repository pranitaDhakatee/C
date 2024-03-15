#include<stdio.h>

void printEvenNumbers(int arr[],int size)
{
	printf("even number in the array:");
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
		printf("%d",arr[i]);
		}
	}	
	printf("\n");
}
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
printEvenNumbers(arr,size);
return 0;
}


















































