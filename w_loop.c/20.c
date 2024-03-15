#include<stdio.h>

int main()
{
	int N,m,c;
	printf("enter of the number m:");
	scanf("%d",&m);
	printf("enter of the number N:");
	scanf("%d",&N);
	c=0;
	for(int i=N;i>0;i--)
	{
		if(N%i==0)
		{
			c++;
			if(c==m)
			{
				printf("%d\n",i);
				break;
			}
			
			}
		
	//printf("\n");
	}
return 0;
}
	
	
