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
	}	
		int e=0,o=0;
		for(int i=1;i<=n;i++)
		 {
			if(i%2==0)
			{
			e=e+1;
			//c++;
			}
			else
			{
			o=o+1;
			//c++;
			}
		}
	printf("%d even of the num\n",e);
	printf("%d odd of the num\n",o);
	return 0;
}
