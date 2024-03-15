#include<stdio.h>

int main()
{
	int i,N,j;
	printf("enter of the number N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0 ");
		         }
		         else
		         {
		         	printf("1 ");
		         }
		 }
		         printf("\n");
   	}
   	return 0;
}      
