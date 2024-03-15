#include<stdio.h>

int main()
{
	int N,i;
	printf("enter the valueof N:");
	scanf("%d",&N);
	for(int i=N;i>2;i=i-2)
	{
	  if(i%2==0)
	  printf("%d\n",i);
	}
	


}
