#include<stdio.h>
	int max(int a,int b,int c)
		{
			int max=a;
			if(b>max)
			{
			max=b;
			}
			if(c>max)
			{
			max=c;
			}
			return max;
		}
int main()
{
	int n1,n2,n3;
		printf("enter three number:");
		scanf("%d %d %d",&n1,&n2,&n3);
	int maximum=max(n1,n2,n3);
	printf("max of number is:%d\n",maximum);
	return 0;
}








