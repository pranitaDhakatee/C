#include<stdio.h>

int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
	printf("enter the value of element %d :",i+1);
	scanf("%d",&arr[i]);
	}
	 int key;
	 printf("enter of key serch :");
	scanf("%d",&key);
	 int mid;
	int p=n-1;
	int j=0;
	 while(j<=p)
	 {
	  mid=(j+p)/2;
	 	if(key == arr[mid])
	 	{
	 	printf("key found index %d\n",mid);
	 	break;
		}
	 	else if(key > arr[mid])
	 	{
	 	j=mid+1;
	 	}
	 	else
	 	{
	 	p=mid-1;
	 	}
	 }	
	 	if(j>p)
	 	{
	 		printf("key not foud array\n");
	 	}
	 
	 	return 0;
}





