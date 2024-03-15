#include<stdio.h>

int main()
{	
	int A,cost;
	scanf("%d",&A);
		if (A<=100)
		{
			printf("NO charge");
	        }
	        else if (A<=200)
	        {
	        cost = 300+(A-200)*5;
	        printf("%d",cost);
	        }
	        else if (A>200)
	        {
	        cost=500+(A-200)*10;
	        printf("%d",cost);
	        }
	        return 0;
}
	        
