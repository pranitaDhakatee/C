#include<stdio.h>
#include<math.h>
int main()
{
	int i,N,j,A,B;
	printf("enter a number of N:");
	scanf("%d",&N);
	A=1;
		printf("0 ");
		
		printf("\n");
	
	for(int i=1;i<=N;i++)
	{
		
	//}
		for(int j=0;j<=i;j++)
		{
			if(j==0)
			{
				A=pow(2,i);
				printf("%d ",A);
			}
			else
			{
				B=A*2;
				printf("%d ",B);
			}
		}
		printf("\n");
	}
	
	return 0;
}
