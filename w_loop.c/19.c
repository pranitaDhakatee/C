#include<stdio.h>

int main()
{
	int N,c,k=0;
	printf("enter of the number N:");
	scanf("%d",&N);
	k=0;
	for(int i=1;i<=N;i++)
	{
		c=0;
		for(int j=2;j<=10;j++)
		{
			if(i%j==0)
			{
				c++;
			}
			//j++;
		}
		
		
			if(c==0)
			{
				  k++;
				
			}
	//printf("\n");
	}
	printf("%d",k);
	//printf("\n");
return 0;
}
	
	
