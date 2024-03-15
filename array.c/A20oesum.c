#include<stdio.h>

int main()
{
	int n,m;
	printf("enter oft the number n:");
	scanf("%d",&n);
	int arr[n];
	//int f=1;
	//int m=n/2;
	for(int i=0;i<n;i++)
	{
		printf("enter oft the number m:");
		scanf("%d",&m);
		arr[i]=m;
	}	
		int s=0,s1=0;
		for(int i=0;i<n;i++)
		 {
			if(arr[i]%2==0)
			{
			s=s+arr[i];
			}
			else
			{
			s1=s1+arr[i];
			}
		}
	printf("%d even of the num\n",s);
	printf("%d odd of the num",s1);
	return 0;
}
