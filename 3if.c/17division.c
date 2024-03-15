#include<stdio.h>

int main()
{	
        int A;
	scanf("%d",&A);
		if (A%5==0 && A%11==0)
		{
			printf("Both are divisible");
	        }
	        else if (A%5==0)
	        {
	        printf("Divisible by 5");
	        }
	        else if (A%11==0)
	        {
	        printf("Divisible by 11");
	        }
	        else
	        {
	        printf("Name");
	        }
	        return 0;
}
	        
