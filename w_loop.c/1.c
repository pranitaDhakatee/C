#include<stdio.h>

int main()
{
	int m,n;
	printf("enter of number tn number m:");
	scanf("%d",&m);
	printf("enter of number tn number n:");
	scanf("%d",&n);
	for(int i=m;i<=n;i++)
	{
	for(int j=1;j<=10;j++)
	{
		printf("%d * %d = %d",i,j,(i*j));
		printf("\n");
	}
	printf("\n");
	}
return 0;
}
