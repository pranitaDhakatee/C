#include<stdio.h>

int main()
{
	int n;
	printf("enter oft the number n:");
	scanf("%d",&n);
	int arr[n];
	int c=0;
	for(int i=1;i<=n;i++)
	{	
		if(n%i==0)
		{
			arr[c]=i;
			c++;
		}
	}
	for(int j=0;j<c;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}
