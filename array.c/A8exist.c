#include<stdio.h>

int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int size = sizeof(arr) / sizeof(arr[0]);
	int c=0,number;
	printf("size of array %d\n",size);
	printf("enter of the number number:");
	scanf("%d",&number);
	for(int i=0;i<size;i++)
	{
		if(arr[i]==number)
		{	
		c++;
	        }
	}
	if(c>0)
	{
	 	printf("%d\n",number);
	}
	else
	{
		printf("Invalid");
	}
	return 0;
}
