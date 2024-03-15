#include<stdio.h>

int main()
{
	int n;
	printf("enter of the value n:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter  the value of array:");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	int targetsum;
	printf("enter of the targetsum:");
	scanf("%d",&targetsum);
	
	int start=0;
	int end=0;
	int currentsum = arr[start];
	
	while(start<n)
	{
	if(currentsum == targetsum)
	{
	printf("subarry %d %d\n",start,end);
	return 0;
	}
	if(currentsum<targetsum && end<n-1)
	{
		end++;
		currentsum=currentsum+arr[end];
		}
		else
		{
		currentSum = currentsum+arr[start];
            start++;
        }
    }
	printf("no subaray\n");
	return 0;
}



