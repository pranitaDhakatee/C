#include<stdio.h>

int main()
{
	int N,i,s=0,m;
	printf("enter the value of N:");
	scanf("%d",&N);
	m=N%2;
	for(int i=1;i<m;i++)
	{
		if(N%i==0)
		{
		  s=s+i;
		}
	 if(s==N)
	    {
	       printf("%d perfect no\n",s);
	    }
	 else
	{
	printf("invalid");
	}
	}
	
	return 0;


}
