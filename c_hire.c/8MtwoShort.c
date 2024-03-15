#include<stdio.h>

int main()
{
	int n,m;
	printf("enter of 1st array n:");
	scanf("%d",&n);
	int arr1[n];
	for(int i=0;i<n;i++)
	{
	printf("enter element %d:",i+1);
	scanf("%d",&arr1[i]);
	}
	printf("enter of 2nd array m:");
	scanf("%d",&m);
	int arr2[m];
	for(int i=0;i<m;i++)
	{
	printf("enter of element %d:",i+1);
	scanf("%d",&arr2[i]);
	}
	int merged[n+m];
	int i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			merged[k]=arr1[i];
			i++;
		}
			else
			{
			merged[k]=arr2[i];
			j++;
			}
			k++;
	}
	while(i<n)
	{
	merged[k]=arr1[i];
	i++;
	k++;
	}
	while(j<m)
	{
	merged[k]=arr2[j];
	j++;
	k++;
	}
	int totalsize=n+m;
	double median;
	if(totalsize%2==0)
	{
	int middle1=merged[totalsize/2-1];
	int middle2=merged[totalsize/2];
	median=(middle1+middle2)/2.0;
	}
	else
	{
	median=merged[totalsize/2];
	}
	printf("median:%.2f\n",median);
	return 0;
}
	
	
	
	
