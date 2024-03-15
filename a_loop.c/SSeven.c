#include<stdio.h>

int main()
{
	int N,i,sum=0;
	printf("enter the valueof N:");
	scanf("%d",&N);
	for(int i=2;i<=N*2;i=i+2)
	{
	  sum=sum+(i*i);
	  printf("%d\n",sum);
	}
	


}
