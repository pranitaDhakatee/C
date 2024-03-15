#include<stdio.h>

int main()
{
	int N,i,s=0,os=0;
	printf("enter the valueof N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
	  if(i%2==0)
	  {s=s+i;
	  }
	  else
	  {
	   os=os+i;
	  }
	  printf("%d %d\n",s,os);
	}
	


}
