#include<stdio.h>

int main()
{
	int N,m,c,k;
	printf("enter of the number m:");
	scanf("%d",&m);
	printf("enter of the number N:");
	scanf("%d",&N);
	for(int i=m;i<=N;i++)
	{
		c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
			//j++;
		}
		
		
			if(c>2)
			{
				  printf("%d",i);
				
			}
	            	
		
	//printf("%d",k);
	printf("\n");
	}
return 0;
}
	
	
