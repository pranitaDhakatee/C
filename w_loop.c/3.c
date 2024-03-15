#include<stdio.h>

int main()
{
	int m;
	int n;
	printf("enter of number tn number m:");
	scanf("%d",&m);
	printf("enter of number tn number n:");
	scanf("%d",&n);
	int i=m;
	//int p;
	while(i<n)
	{
		int p;
		p=i*i;
		if(p<=n)
		{
			printf("%d",p);
		}
		printf("\n");
		i++;
	}
	
	//printf("\n");
	
return 0;
}
